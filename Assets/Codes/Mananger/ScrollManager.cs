using Assets.Codes.GameState;
using UnityEngine;
using System.Collections;

public class ScrollManager : MonoBehaviour
{

    private BackgroundMananger[] _backgroundManangers;
    private Transform _landGround;
    private Vector3 _startpos;


	// Use this for initialization
    void Awake()
    {
        _backgroundManangers = FindObjectsOfType<BackgroundMananger>();
        _landGround = transform.GetChild(1);//得到Downground.Transform
        _startpos = _landGround.position;
    }

    public void StartMove()
    {
        //对Downground进行渐渐移动,固定在Y上-7.5f的位置
        iTween.MoveTo(_landGround.gameObject,iTween.Hash("y",-7.5f,"easeType",iTween.EaseType.linear,"speed",1));
        for (int i = 0; i < _backgroundManangers.Length; i++)
        {
            _backgroundManangers[i].SendMessage("StartMove"); //background中的每个元素都调用StartMove方法,即开始向下滚动
        }
    }
    /// <summary>
    /// 停止背景滚动
    /// </summary>
    public void StopMove()
    {
        iTween.Stop(_landGround.gameObject);           //先停止当前iTween移动  (背景建筑)
        GameRunState.Instance.backDistance = _startpos.y - _landGround.transform.position.y;//得到移动距离
        //移动到原来位置
        iTween.MoveBy(_landGround.gameObject, iTween.Hash("y", GameRunState.Instance.backDistance, "easeType", iTween.EaseType.linear, "time", 1));
     
        for (int i = 0; i < _backgroundManangers.Length; i++)  //下同上(背景图和云彩)
        {
           iTween.Stop(_backgroundManangers[i].gameObject);   
        }
        for (int i = 0; i < _backgroundManangers.Length; i++)
        {
            _backgroundManangers[i].SendMessage("MoveUp",GameRunState.Instance.backDistance);
        }
    }
}
