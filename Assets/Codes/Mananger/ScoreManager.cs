using System.Collections.Generic;
using UnityEngine;
using System.Collections;

public class ScoreManager : MonoBehaviour
{

    public GameObject ScorePrefab;
    private int score = 0;
    private List<GameObject> sList = new List<GameObject>();
    public Vector3 startpos=new Vector3(0,-.75f);
    public int Score
    {
        get { return score; }
        set
        {
            score = value;
            if (sList == null)  
            {
                sList = new List<GameObject>();
             }
            ChangeScore(score);
        }
    }
    public void ChangeScore(int score)
    {
        List<int> s=new List<int>();
        do
        {
            s.Add(score%10);            //通过do while 循环在List中保存了分数的个位，十位，百位...（假如有）
            score/=10;                  //s.Count决定了有几位数
        } while (score>0);   
        if (s.Count != sList.Count)    //位数不同的时候,第一次是在初始化的时候,第二次是分数进到两位的时候,依次类推
        {
            GameObject go = (GameObject) Instantiate(ScorePrefab, startpos, Quaternion.identity);//创建分数标识牌
            go.transform.parent = transform;  
            startpos.x -= .2f;      //控制位置
            sList.Add(go);          //第一次存一个数分牌,分数进十存两个，以此类推
        }
        for (int i = 0; i < sList.Count; i++)
        {
            sList[i].SendMessage("SetScore", s[i]); //对应ShowScore里面的选择图集中的数字
        }
    }
    /// <summary>
    /// 将最高分数存储
    /// </summary>
    public void SaveScore()
    {
        int temp = 0;
        if (PlayerPrefs.HasKey("HighScore"))
        {
            temp = PlayerPrefs.GetInt("HighScore");
        }
        if (score > temp)
        {
            PlayerPrefs.SetInt("HighScore",score); 
            PlayerPrefs.Save();
        }
    }

    public void Clear()
    {
        foreach (var o in sList)
        {
            Destroy(o);
        }
        sList.Clear();
    }
}
