using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Chat;
using Photon.Pun;
using ExitGames.Client.Photon;

public class ChatManager : MonoBehaviour,IChatClientListener
{
    #region Variables

    ChatClient chatClient;
    string userID;
    [SerializeField]
    string userName;
    bool isConnected;
    string privateReceiver = "";
    string currentChat;
    [SerializeField] InputField chatField;
    [SerializeField] Text chatDisplay;

    #endregion

    #region Build in Methods

    void Start()
    {
        isConnected = true;
        chatClient = new ChatClient(this);
        chatClient.Connect(PhotonNetwork.PhotonServerSettings.AppSettings.AppIdChat, PhotonNetwork.AppVersion, new AuthenticationValues(PhotonNetwork.LocalPlayer.NickName));
        Debug.Log("Connenting");
    }

    // Update is called once per frame
    void Update()
    {
        chatClient.Service();
    }

    #endregion

    #region Button Click

    public void TypeChatOnValueChange(string valueIn) // Input field of message
    {
        currentChat = valueIn;
    }

    public void TypeSenderOnValueChange(string value)
    {
        privateReceiver = value;
    }

    public void SubmitPublicChatOnClick() // send to message public 
    {
        if (privateReceiver == "")
        {
            chatClient.PublishMessage("RegionChannel", currentChat);
            chatField.text = "";
            currentChat = "";
        }
    }

    public void SubmitPrivateChatOnClick() // send to message private 
    {
        if (privateReceiver != "")
        {
            chatClient.SendPrivateMessage(privateReceiver, currentChat);
            chatField.text = "";
            currentChat = "";
        }
    }

    #endregion

    #region Caht Callbacks

    public void DebugReturn(DebugLevel level, string message)
    {
        //throw new System.NotImplementedException();
    }

    public void OnChatStateChange(ChatState state)
    {
        if (state == ChatState.Uninitialized)
        {
            isConnected = false;
        }
    }

    public void OnConnected()
    {
        Debug.Log("chat coonnected" );
        chatClient.Subscribe(new string[] { "RegionChannel" });
        //throw new System.NotImplementedException();
    }

    public void OnDisconnected()
    {
        //throw new System.NotImplementedException();
        isConnected = false;
    }

    public void OnGetMessages(string channelName, string[] senders, object[] messages)
    {
        //throw new System.NotImplementedException();
        string msgs = "";
        for (int i = 0; i<senders.Length; i++)
        {
            msgs = string.Format("{0}: {1}", senders[i], messages[i]);
            chatDisplay.text += "\n" + msgs;
            Debug.Log(msgs);
        }
    }

    public void OnPrivateMessage(string sender, object message, string channelName)
    {
        //throw new System.NotImplementedException();
        string msgs = "";
        msgs = string.Format("(Private) {0}: {1}", sender, message);
        chatDisplay.text += "\n " + msgs;
        Debug.Log(msgs);
    }

    public void OnStatusUpdate(string user, int status, bool gotMessage, object message)
    {
        throw new System.NotImplementedException();
    }

    public void OnSubscribed(string[] channels, bool[] results)
    {
        //throw new System.NotImplementedException();
    }

    public void OnUnsubscribed(string[] channels)
    {
        throw new System.NotImplementedException();
    }

    public void OnUserSubscribed(string channel, string user)
    {
        throw new System.NotImplementedException();
    }

    public void OnUserUnsubscribed(string channel, string user)
    {
        throw new System.NotImplementedException();
    }

    #endregion


}
