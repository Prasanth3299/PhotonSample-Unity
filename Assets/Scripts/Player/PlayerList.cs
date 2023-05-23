using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;

public class PlayerList : MonoBehaviour
{
    [SerializeField]
    private Text playerNameText;

    public bool ready = false;

    public Player Player { get; private set; }
    public void SetPlayerInfo(Player player)
    {
        Player = player;
        playerNameText.text = player.NickName;
    }
}
