using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class RoomList : MonoBehaviour
{
    [SerializeField]
    private Text roomNameText;

    public RoomInfo RoomInfo { get; private set; }
    public void SetRoomInfo(RoomInfo roomInfo)
    {
        RoomInfo = roomInfo;
        roomNameText.text = roomInfo.Name;
    }

    public void OnClickJoin()
    {
        PhotonNetwork.JoinRoom(RoomInfo.Name);
    }
}
