using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkManager : MonoBehaviour
{
    #region Properties

    public string playerName = "Prasanth";
    public string gameVersion = "0.1";
    private static NetworkManager instance = null;

    #endregion

    #region Build in Methods
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

        DontDestroyOnLoad(this);
    }

    #endregion

    #region Instance
    public static NetworkManager Instance()
    {
        return instance;
    }
    #endregion
}
