using Assets.Codes.GameState;
using UnityEngine;
using System.Collections;

public class GestureHandle : MonoBehaviour {


    private void OnMouseDown()
    {
        gameObject.SetActive(false);

        //执行游戏开始
        //调用ScrollManager里开始的方法
        GameRunState.Instance.PrepareGameStart();

    }

}
