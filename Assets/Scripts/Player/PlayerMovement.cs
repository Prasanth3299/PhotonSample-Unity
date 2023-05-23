using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun.Demo.PunBasics;
using Photon.Pun;
using Photon.Chat;

public class PlayerMovement : MonoBehaviourPunCallbacks 
{
    public GameObject masterPlayer;
    public GameObject clientPlayer;
    public Transform masterPlayerPosition;
    public Transform clientPlayerPosition;
    public Text playerNameText, opponentNameText;
    public float moveSpeed;

    private Transform playerObject;
    private Rigidbody rigidbody;
    private float moveInput;

    // Start is called before the first frame update
    void Start()
    {
        playerNameText.text = PhotonNetwork.LocalPlayer.NickName;
        
        if (PlayerManager.LocalPlayerInstance == null)
        {
            Player[] photonPlayers = PhotonNetwork.PlayerList;
            if (photonView.IsMine)
            {
                if (photonPlayers[0] == PhotonNetwork.MasterClient && photonPlayers[0] == photonView.Owner)
                {
                    GameObject obj = PhotonNetwork.Instantiate(masterPlayer.name, masterPlayerPosition.position, Quaternion.identity, 0);
                    playerObject = obj.transform;
                    rigidbody = playerObject.GetComponent<Rigidbody>();
                }
                else
                {
                    GameObject obj = PhotonNetwork.Instantiate(clientPlayer.name, clientPlayerPosition.position, Quaternion.identity, 0);
                    playerObject = obj.transform;
                    rigidbody = playerObject.GetComponent<Rigidbody>();
                }
            }
            else
            {
                GameObject obj = PhotonNetwork.Instantiate(clientPlayer.name, clientPlayerPosition.position, Quaternion.identity, 0);
                playerObject = obj.transform;
                rigidbody = playerObject.GetComponent<Rigidbody>();
            }

            foreach (Player player in photonPlayers)
            {
                if(!player.IsLocal)
                {
                    opponentNameText.text = player.NickName;
                }
            }
        }
    }

    private void Update()
    {
        if (playerObject != null && rigidbody != null)
            PlayerMoveWithKeyboard();
    }

    public void PlayerMoveWithKeyboard()
    {
        if (Input.GetButton("Horizontal"))
        {
            moveInput = Input.GetAxis("Horizontal");

            if (moveInput > 0)
            {
                Vector3 direction = rigidbody.transform.right * moveInput;
                rigidbody.transform.position = Vector3.MoveTowards(rigidbody.transform.position, rigidbody.transform.position + direction, moveSpeed * Time.deltaTime);
            }
            else if (moveInput < 0)
            {
                Vector3 direction = -(rigidbody.transform.right * moveInput);
                rigidbody.transform.position = Vector3.MoveTowards(rigidbody.transform.position, rigidbody.transform.position - direction, moveSpeed * Time.deltaTime);
            }
        }

        if (Input.GetButton("Vertical"))
        {
            moveInput = Input.GetAxis("Vertical");

            if (moveInput > 0)
            {
                Vector3 direction = rigidbody.transform.forward * moveInput;
                rigidbody.transform.position = Vector3.MoveTowards(rigidbody.transform.position, rigidbody.transform.position + direction, moveSpeed * Time.deltaTime);
            }
            else if (moveInput < 0)
            {
                Vector3 direction = -(rigidbody.transform.forward * moveInput);
                rigidbody.transform.position = Vector3.MoveTowards(rigidbody.transform.position, rigidbody.transform.position - direction, moveSpeed * Time.deltaTime);
            }
        }
    }

   
}
