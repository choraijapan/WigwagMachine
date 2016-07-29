using System.Collections.Generic;
using Assets.Codes.GameState;
using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour
{
    
    public IGameState _CurrentState;             
    //标记位置
    public Transform  _btnGroup;                          //两个按钮的
    public Transform  _board;                             //标题
    public Transform  _Obstacles_Group;                   //障碍物
    public Transform _gesture;                           //手势示意图
    //GameObject
    public GameObject _Obstacles_GroupPrefab;    
    public GameObject _playerInstance;                    
    public GameObject _playerPrefab;                      //Player预设体
    public GameObject _result;                            //结果显示面板

    private bool didInit = false;
    public List<GameObject> _ObstaclesList = new List<GameObject>(4);
    public ScoreManager _ScoreManager;                    //分数管理器对象

    // Use this for initialization
    void Start()
    { 
        //Init
        _board = GameObject.Find("Board").transform;
        _Obstacles_Group = GameObject.Find("Obstacles_Group").transform;
        _btnGroup = GameObject.Find("btn_Group").transform;

        _ScoreManager = GetComponent<ScoreManager>();
        var temp = Instantiate(_Obstacles_GroupPrefab, transform.position, Quaternion.identity) as GameObject;//障碍物预设体
        temp.SetActive(false);          //对克隆出的这组障碍物进行隐藏，目前面板上已经有一组障碍物
        _ObstaclesList.Add(temp);       //加入List ，List最大为4
        _CurrentState = new GameStartState(this);           //GameStartState的构造函数

    }

    // Update is called once per frame
    void Update()
    {

        _CurrentState.Update();         //针对的是对当前状态的Update一直执行

    }

    public void SpawnObstacles()
    {
        //在GameRunState中开始生成障碍物
        if (!didInit)           
        {   
            Invoke("SpawnObstacles", 1); //如果没有进行过初始化的情况下1秒后立即回调SpawnOb并且置didInit为true
            didInit = true;
            return;
        }
        else
        {
            if (_ObstaclesList.Count < 4)  //当障碍物对象列表里面的数量小于4
            {
                var temp = Instantiate(_Obstacles_GroupPrefab, transform.position, Quaternion.identity) as GameObject;
                temp.SendMessage("SetInit");//位置初始化
                temp.SendMessage("StartMove");//开始向下移动
                _ObstaclesList.Add(temp);//存储在对象列表中
            }
            else
            {   //障碍物已经有4个的时候(最大4个)
                foreach (var o in _ObstaclesList)
                {
                    if (o.activeSelf == false)          //找到移动到下面而已经隐藏掉的,让它重新从上显示
                    {
                        o.SetActive(true);
                        o.SendMessage("SetInit");
                        o.SendMessage("StartMove");
                        break;
                    }
                }
            }
            Invoke("SpawnObstacles", 3);            //间隔三秒回调,就可以实现障碍物的一直滚动生成了
        }
    } 

    public void ScorllBack(float distance)
    {
        CancelInvoke("SpawnObstacles");
        foreach (var o in _ObstaclesList)
        {
            if (o.activeSelf == true)
            {
                iTween.Stop(o);
                o.SendMessage("MoveUp", distance);
            }
        }
    }

    public void ResetAll()
    {
        didInit = false;
        _btnGroup.gameObject.SetActive(false);
        _result.SetActive(false);
        Destroy(_playerInstance);
        _ScoreManager.Clear();
        foreach (var o in _ObstaclesList)
        {
            o.SetActive(false);
        }
    }
}
