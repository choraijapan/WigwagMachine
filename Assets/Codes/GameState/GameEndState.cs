using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Codes.GameState
{
    internal class GameEndState : IGameState
    {
        private readonly GameManager _manager;
        private int layerInt;

        public GameEndState(GameManager _manager)
        {
            this._manager = _manager;
            _manager._result.SetActive(true);
            _manager._btnGroup.gameObject.SetActive(true);
            layerInt = LayerMask.NameToLayer("UI");
            var rArray = _manager._result.GetComponents<ScoreManager>();
            rArray[0].Score = _manager._ScoreManager.Score;
            rArray[1].Score = PlayerPrefs.GetInt("HighScore");
        }

        public override void Update()
        {
            if (Input.GetMouseButtonDown(0))
            {
                Vector3 mouseVector3 = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit;
                hit = Physics2D.Raycast(Camera.main.transform.position, mouseVector3, 100, 1 << layerInt);
                if (hit.collider != null)
                {
                    switch (hit.collider.name)
                    {
                        case "btnStart":
                            SwitchNext();
                            break;
                        case "btnRank":
                            Debug.Log("R");
                            break;
                    }
                }

            }
        }

        public override void SwitchNext()
        {
            _manager.ResetAll();
            _manager._CurrentState=new GameStartState(_manager);
        }
    }
}