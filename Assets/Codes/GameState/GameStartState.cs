using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using  UnityEngine;
using System.Collections;
namespace Assets.Codes.GameState
{
    class GameStartState:IGameState
    {
        private readonly GameManager _manager;
        public IGameState _CurrentState;
        public Transform _btnGroup;
        public Transform _board;
        public Transform _Obstacles_Group;
        private int layerInt;
        public GameStartState(GameManager _manager)
        {
           this._manager = _manager;
            this._btnGroup = _manager._btnGroup;
            this._Obstacles_Group = _manager._Obstacles_Group;
            this._board = _manager._board;
            //显示出两个按钮，一个障碍物组,一个标题面板
            _btnGroup.gameObject.SetActive(true);
            _Obstacles_Group.gameObject.SetActive(true);
            _board.gameObject.SetActive(true);
            //layerInt纪录UI层索引
            layerInt = LayerMask.NameToLayer("UI");    
        }

        public override void Update()//在GameManager的Update函数中被一直调用
        {   
            if (Input.GetMouseButtonDown(0))        //判断按下鼠标左键
            {
                Vector3 mouseVector3 = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit;
                //起点，方向，距离，layerMask
                hit = Physics2D.Raycast(Camera.main.transform.position, mouseVector3, 100, 1 << layerInt);
                if (hit.collider != null)
                {
                    switch (hit.collider.name)
                    {
                        case "btnStart":
                            SwitchNext();       //开始游戏
                            break;
                        case  "btnRank":        //查看排行
                            Debug.Log("Show Rank");
                            break;
                    }
                }

            }
         
        }

        public override void SwitchNext()
        {
            //隐藏无关面板
            _btnGroup.gameObject.SetActive(false);
            _Obstacles_Group.gameObject.SetActive(false);
            _board.gameObject.SetActive(false);
            //状态转换为Run，GameRunState的构造函数
            _manager._CurrentState=new GameRunState(_manager);
        }
    }
}
