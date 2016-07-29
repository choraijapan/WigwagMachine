using Assets.Codes.GameState;
using UnityEngine;
using System.Collections;

public class PlayerManager : MonoBehaviour
{
    private Animator _bodyAnimator;
    private Animator _wheelAnimator;
    private int _faceRight = 1;

    private void Awake()
    {
        _bodyAnimator = transform.GetChild(0).GetComponentInChildren<Animator>();
        _wheelAnimator = transform.GetChild(1).GetComponentInChildren<Animator>();
    }

    // Use this for initialization
    public void StartPlayer()
    {
        _bodyAnimator.SetTrigger("_blink");
        _wheelAnimator.SetInteger("StateInt", 1);
        AnimatorStateInfo s = _wheelAnimator.GetCurrentAnimatorStateInfo(0);
        Invoke("SpeedUpWheels", 1);
    }


    void SpeedUpWheels()
    {
        _wheelAnimator.speed = 5;
    }

void OnTriggerEnter2D(Collider2D other)
{
    if (other.tag == "Score")
    {
        //得分+音效
        GameRunState.Instance.AddScore();
        SoundManange.Instance.Play(0);
        SoundManange.Instance.Play(3);
        }
        else if (other.tag!="TriggerPad")
    {
        GameOver();
        //音效
        SoundManange.Instance.Play(1);
    }
}

    private void GameOver()
    {
        GetComponent<CircleCollider2D>().enabled = false;
        GetComponent<Rigidbody2D>().velocity = Vector2.zero;
        GetComponent<Rigidbody2D>().Sleep();
        //向下旋转
        iTween.RotateTo(gameObject,iTween.Hash("z",-180,"time",1,"easeType",iTween.EaseType.linear,"loopType",iTween.LoopType.none));
        GameRunState.Instance.GameOver();
        Invoke("GameSwitch",1); //跳转到GameEndState
    }

    public void SetFlip()
    {
        transform.localScale=new Vector3(_faceRight,1);   //设置Player面向右边（1,1）
        GetComponent<Rigidbody2D>().velocity=new Vector2(_faceRight*2,0); //设置Player的速度为X轴上为2
        _faceRight = -_faceRight;// 方向反转      
    }

    void GameSwitch()
    {
        GameRunState.Instance.SwitchNext();
    }
}

