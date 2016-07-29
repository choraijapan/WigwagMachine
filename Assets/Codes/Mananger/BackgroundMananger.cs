using UnityEngine;
using System.Collections;
/// <summary>
/// 背景的滚动
/// </summary>
public class BackgroundMananger : MonoBehaviour
{
   
    public float _OffsetY = 15;
    void StartMove()
    {
        Invoke("MoveDown",0);
    }

    void MoveDown()
    {
     
        iTween.MoveTo(gameObject,iTween.Hash("y",-10,"easeType",iTween.EaseType.linear,"speed",1,"onComplete","ResetPosition"));
            
    }

    void ResetPosition()
    {
       
        transform.localPosition=new Vector3(transform.position.x,transform.position.y+_OffsetY);
        Invoke("MoveDown",0);
    }
    /// <summary>
    /// 背景回滚
    /// </summary>
    /// <param name="distance"></param>
    void MoveUp(float distance)
    {
        iTween.MoveBy(gameObject, iTween.Hash("y", distance, "easeType", iTween.EaseType.linear, "time",1));
    }
}
