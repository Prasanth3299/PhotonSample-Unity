using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class CreateRoom : MonoBehaviourPunCallbacks
{
    #region Variables

    public Text roomName;
    public Text readyText;
    public Transform roomContentParent;
    public RoomList roomListing;
    public Transform playerContentParent;
    public PlayerList playerList;
    public GameObject createRoomScreen;
    public GameObject leaveRoomScreen;
    public GameObject loginScreen;
    public GameObject waitingScreen;
    public GameObject networkController;
    public Text playerNamText;
    public Text waitingText;

    private List<RoomInfo> roomInfos = new List<RoomInfo>();

    private List<RoomList> listings = new List<RoomList>();
    private List<PlayerList> playerListings = new List<PlayerList>();
    private bool ready = false;

    #endregion

    #region Build in Methods

    public override void OnEnable()
    {
        base.OnEnable();
        Screen.fullScreen = false;
        SetReadyUp(false);
    }

    #endregion

    #region Button Action

    public void OnLoginButtonClicked() // login button click
    {
        if (playerNamText.text != "")
        {
            NetworkManager.Instance().playerName = playerNamText.text;
            loginScreen.SetActive(false);
            createRoomScreen.SetActive(true);
            networkController.SetActive(true);
        }
    }

    public void OnClickCreateRoom() //Create room button click
    {
        if (!PhotonNetwork.IsConnected)
            return;

        RoomOptions roomOptions = new RoomOptions()
        {
            IsVisible = true,
            IsOpen = true,
            MaxPlayers = 4,
        };

        PhotonNetwork.JoinOrCreateRoom(roomName.text, roomOptions, TypedLobby.Default);
    }

    public void OnStartGamesButtonClicked() // start game master
    {
        if (PhotonNetwork.IsMasterClient)
        {
            for (int i = 0; i < playerListings.Count; i++)
            {
                if (playerListings[i].Player != PhotonNetwork.LocalPlayer)
                {
                    if (!playerListings[i].ready)
                        return;
                }
            }
            PhotonNetwork.LoadLevel(1);

        }
    }

    public void OnReadyUpButtonClicked()
    {
        if (!PhotonNetwork.IsMasterClient) // client ready to start game
        {
            SetReadyUp(!ready);
            base.photonView.RPC("RPC_ChangeReadyState", RpcTarget.MasterClient, PhotonNetwork.LocalPlayer, ready);
            waitingText.text = "Waiting for opponent...";
            waitingScreen.SetActive(true);
        }
    }

    #endregion


    #region Photon Callbacks

    public override void OnCreatedRoom()
    {
        print("Room created successfully");
        createRoomScreen.SetActive(false);
        leaveRoomScreen.SetActive(true);
        //GetCurrentRoomPlayers();
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        print("Room creation failed");
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList) 
    {
       
        foreach(RoomInfo info in roomList)
        {
            if (info.RemovedFromList)
            {
                int index = listings.FindIndex(x => x.RoomInfo.Name == info.Name);
                if(index != -1)
                {
                    Destroy(listings[index].gameObject);
                    listings.RemoveAt(index);
                }
            }
            else
            {
                RoomList listing = Instantiate(roomListing, roomContentParent);
                listing.SetRoomInfo(info);
                listings.Add(listing);

            }
            
        }
       
    }

    public void GetCurrentRoomPlayers()
    {
        foreach (KeyValuePair<int, Player> playerInfo in PhotonNetwork.CurrentRoom.Players)
        {
            PlayerList listing = Instantiate(playerList, playerContentParent);
            listing.SetPlayerInfo(playerInfo.Value);
            playerListings.Add(listing);
        }
    }

    public void OnRoomJoinButtonClicked(int index)
    {
        PhotonNetwork.JoinRoom(roomInfos[index].Name);
        createRoomScreen.SetActive(false);
        leaveRoomScreen.SetActive(true);
    }
 
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        PlayerList listing = Instantiate(playerList, playerContentParent);
        listing.SetPlayerInfo(newPlayer);
        playerListings.Add(listing);
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        int index = playerListings.FindIndex(x => x.Player == otherPlayer);
        if (index != -1)
        {
            Destroy(playerListings[index].gameObject);
            playerListings.RemoveAt(index);
        }
    }

    public override void OnJoinedRoom()
    {
        //listings.Clear();
        GetCurrentRoomPlayers();
        createRoomScreen.SetActive(false);
        leaveRoomScreen.SetActive(true);
    }

  
    public void SetReadyUp(bool state)
    {
        ready = state;
        if (ready)
            readyText.text = "Ready";
        else
            readyText.text = "Not Ready";
    }

    #endregion

    [PunRPC]
    private void RPC_ChangeReadyState(Player player, bool ready)
    {
        print(ready);
        SetReadyUp(ready);
        int index = playerListings.FindIndex(x => x.Player == player);
        if (index != -1)
        {
            playerListings[index].ready = ready;
        }
    }

}
