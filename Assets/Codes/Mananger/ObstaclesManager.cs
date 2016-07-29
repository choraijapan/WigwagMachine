using UnityEngine;
using System.Collections;

public class ObstaclesManager : MonoBehaviour
{

    private static float lastX = 0;
    void StartMove()
    {
        iTween.MoveTo(gameObject,iTween.Hash("y",-6.5f,"speed",1,"easeType",iTween.EaseType.linear,"onComplete","Setoff"));
    }

    void Setoff()
    {
        gameObject.SetActive(false);
    }
    /// <summary>
    /// 初始化障碍物生成的位置,
    /// </summary>
    void SetInit()
    {
        Vector3 tempVector3=new Vector3();
        do
        {
            tempVector3.x = Random.Range(-.1f, 1.2f);
        } while (Mathf.Abs(lastX-tempVector3.x)<.2f);
        tempVector3.y =1.6f;
        transform.position=tempVector3;
    }

    void MoveUp(float distance)
    {
        iTween.MoveBy(gameObject, iTween.Hash("y", distance, "time", 1, "easeType", iTween.EaseType.linear));
    }
}
