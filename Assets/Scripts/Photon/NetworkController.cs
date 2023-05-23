using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class NetworkController : MonoBehaviourPunCallbacks
{
    #region Properties

    public GameObject waitingScreen;
    public Text waitingText;

    #endregion

    #region Build in Methods
    void Start()
    {
        waitingScreen.SetActive(true);
        waitingText.text = "Connecting......";
        PhotonNetwork.SerializationRate = 5;
        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.NickName = NetworkManager.Instance().playerName;
        PhotonNetwork.GameVersion = NetworkManager.Instance().gameVersion;
        PhotonNetwork.ConnectUsingSettings(); //Connects to Photon master servers
    }

    #endregion

    #region Photon Callbacks
    public override void OnConnectedToMaster()
    {
        print("We are now connected to the " + PhotonNetwork.CloudRegion + " server!");
        print(PhotonNetwork.LocalPlayer.NickName);
        waitingScreen.SetActive(false);
        if (!PhotonNetwork.InLobby)
          PhotonNetwork.JoinLobby();
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        print("Disconnected from the server " + cause.ToString());
    }

    public override void OnJoinedLobby()
    {
        print("joined lobby");
    }
    #endregion
}
