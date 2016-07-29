using UnityEngine;
using System.Collections;

public class ShowScore : MonoBehaviour
{

    private Sprite[] numSprites;
    public string name = "PreSprites";

    void Awake()
    {
        numSprites = Resources.LoadAll<Sprite>(name);
    }

    public void SetScore(int num)
    {
        GetComponent<SpriteRenderer>().sprite = numSprites[num+1];
    }

}
