using System.Collections.Generic;
using UnityEngine;
using System.Collections;

public class SoundManange : MonoBehaviour
{


    public List<AudioClip> _SoundClips;
    private static SoundManange instance;

    void Awake()
    {
        instance = this;
    }

    public static SoundManange Instance
    {
        get { return instance; }
    }

    public void Play(int n)
    {
        AudioSource.PlayClipAtPoint(_SoundClips[n],Vector2.zero);
    }
}
