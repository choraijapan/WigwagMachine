using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.Codes.GameState
{
    internal class GameRunState : IGameState
    {
        private readonly GameManager _manager;
        public int _stateInt = 0;
        private int layerInt;
        private ScrollManager _scrollManager;
        private GameObject player;
        private PlayerManager _playerManager;
        public float backDistance = 0;//游戏结束后物体的回移距离
        public GameRunState(GameManager _manager)
        {
            this._manager = _manager;
            _manager._gesture.gameObject.SetActive(true);                     //显示手势指引面板
            _scrollManager = GameObject.FindObjectOfType<ScrollManager>();
            Vector3 temVector3=new Vector3(Random.Range(-.1f,1.2f),-.6f);     //障碍物出现的位置。Y上为-0.6，X随机范围内
            _manager._ObstaclesList[0].SetActive(true);                       //对克隆出的障碍物进行显示
            _manager._ObstaclesList[0].transform.position = temVector3;
            player = GameObject.Instantiate(_manager._playerPrefab, new Vector3(0, -3.64f), Quaternion.identity)
                     as GameObject;                                           //生成Player预制体
            _manager._playerInstance = player;          
            _playerManager = player.GetComponent<PlayerManager>();
            _manager._ScoreManager.Score = 0;
            layerInt = LayerMask.NameToLayer("TriggerPad");
            _instance = this;
        }
        private static  GameRunState _instance;

        public static GameRunState Instance
        {
            get { return _instance; }
        }

        public override void Update()
        {
            if (Input.GetMouseButtonDown(0)) {
                SoundManange.Instance.Play(2);
            }
            if (Input.GetMouseButtonDown(0)&&_stateInt==1)  //标志位为1的时候是在PrepareGameStart()中进行的，而Pre在提示板点击的方法中调用
            {
                Vector3 mouseVector3 = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit;
                hit = Physics2D.Raycast(Camera.main.transform.position, mouseVector3, 100, 1 << layerInt);
                if (hit.collider != null)
                {
                    _playerManager.SetFlip();       //开始游戏后鼠标左键单击事件
                }

            }
        }

        public override void SwitchNext()
        {
            _manager._CurrentState = new GameEndState(_manager);
        }
        /// <summary>
        /// 点击提示牌后开始游戏的具体设置
        /// </summary>
        public void PrepareGameStart()
        {
            _scrollManager.StartMove(); //背景滚动
            //GameObject.SendMessage 是对这个gameobject上挂在的脚本中的“---”方法进行调用
            _manager._ObstaclesList[0].SendMessage("StartMove"); //障碍物向下移动到固定位置然后隐藏(已经出屏幕)
            _manager.SpawnObstacles();                           //实现障碍物的不断生成和滚动
            _stateInt++;               //执行GameRunState的Update方法、
            
        }

        public void GameOver()
        {
            _stateInt++;                  //记得在准备开始游戏后这个值已经是1了,再++成2了..？         
            _manager._ScoreManager.SaveScore();  //存储最高分
            _scrollManager.StopMove();             //背景回滚
            _manager.ScorllBack(backDistance);    
            Debug.Log("Over");
        }

        public void AddScore()
        {
            _manager._ScoreManager.Score++;
        }
    }
}