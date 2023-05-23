#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>
struct Action_2_tA41183B354CFD052EC15B836E06F383401C0C277;
// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_tBA69BCB799C533EE20BCA94A366763F6051FF3C3;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_tC124D27085B30F44C9C2DDA4B28F0D24873E53CA;
// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// ExitGames.Client.Photon.EventData
struct EventData_t59C5F26D86F647D5DD8176EE3FAB95925F274D49;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t4E594E9B8AABF4918890F9377E390A320E285E50;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t3C094A553171BA8B985F3218C998900A2E6C4298;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t58EF0D7D695E5A9618AF48C0BD8C2B9A6C65BD82;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ExitGames.Client.Photon.NCommand
struct NCommand_tC4E24C0B4E469DDDFE7CDD5D4C319B0599D8D0AE;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t8C68E4022BA4A5AC41CEE24BD13C9226E5A683EC;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// PlayerList
struct PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889;
// RoomList
struct RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926;
// ExitGames.Client.Photon.WebSocket
struct WebSocket_t65F317625319943187207808B39D01620DBD1ABF;
// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A;
// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62;
// CreateRoom/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBFE3E96671202328125335F186788BF9D6966F45;
// CreateRoom/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t12FFC2CF6E74F1AF9883FCE21E9BF1B4A3A2C58F;
// CreateRoom/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t2BD8773B296DD9B8602A76ABCA095EEFB9041AC7;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48;
// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13
struct U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C const RuntimeMethod* ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m963A4FE5B939246FAD8613A5075447A95C61459F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Photon.Voice.AudioUtil/GeneratorReader`1<System.Single>
struct GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.AudioUtil/GeneratorReader`1::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.AudioUtil/GeneratorReader`1::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.String Photon.Voice.AudioUtil/GeneratorReader`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Int64 Photon.Voice.AudioUtil/GeneratorReader`1::timeSamples
	int64_t ___timeSamples_3;
	// System.Func`1<System.Double> Photon.Voice.AudioUtil/GeneratorReader`1::clockSec
	Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec_4;

public:
	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC, ___U3CChannelsU3Ek__BackingField_0)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_0() const { return ___U3CChannelsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_0() { return &___U3CChannelsU3Ek__BackingField_0; }
	inline void set_U3CChannelsU3Ek__BackingField_0(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_timeSamples_3() { return static_cast<int32_t>(offsetof(GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC, ___timeSamples_3)); }
	inline int64_t get_timeSamples_3() const { return ___timeSamples_3; }
	inline int64_t* get_address_of_timeSamples_3() { return &___timeSamples_3; }
	inline void set_timeSamples_3(int64_t value)
	{
		___timeSamples_3 = value;
	}

	inline static int32_t get_offset_of_clockSec_4() { return static_cast<int32_t>(offsetof(GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC, ___clockSec_4)); }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * get_clockSec_4() const { return ___clockSec_4; }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 ** get_address_of_clockSec_4() { return &___clockSec_4; }
	inline void set_clockSec_4(Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * value)
	{
		___clockSec_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockSec_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___customProperties_1)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___expectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ExitGames.Client.Photon.WebSocket
struct WebSocket_t65F317625319943187207808B39D01620DBD1ABF  : public RuntimeObject
{
public:
	// System.Uri ExitGames.Client.Photon.WebSocket::mUrl
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___mUrl_0;
	// System.String ExitGames.Client.Photon.WebSocket::mProxyAddress
	String_t* ___mProxyAddress_1;
	// System.String ExitGames.Client.Photon.WebSocket::protocols
	String_t* ___protocols_2;
	// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String> ExitGames.Client.Photon.WebSocket::<DebugReturn>k__BackingField
	Action_2_tA41183B354CFD052EC15B836E06F383401C0C277 * ___U3CDebugReturnU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.WebSocket::m_NativeRef
	int32_t ___m_NativeRef_4;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t65F317625319943187207808B39D01620DBD1ABF, ___mUrl_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_mProxyAddress_1() { return static_cast<int32_t>(offsetof(WebSocket_t65F317625319943187207808B39D01620DBD1ABF, ___mProxyAddress_1)); }
	inline String_t* get_mProxyAddress_1() const { return ___mProxyAddress_1; }
	inline String_t** get_address_of_mProxyAddress_1() { return &___mProxyAddress_1; }
	inline void set_mProxyAddress_1(String_t* value)
	{
		___mProxyAddress_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProxyAddress_1), (void*)value);
	}

	inline static int32_t get_offset_of_protocols_2() { return static_cast<int32_t>(offsetof(WebSocket_t65F317625319943187207808B39D01620DBD1ABF, ___protocols_2)); }
	inline String_t* get_protocols_2() const { return ___protocols_2; }
	inline String_t** get_address_of_protocols_2() { return &___protocols_2; }
	inline void set_protocols_2(String_t* value)
	{
		___protocols_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocols_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugReturnU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebSocket_t65F317625319943187207808B39D01620DBD1ABF, ___U3CDebugReturnU3Ek__BackingField_3)); }
	inline Action_2_tA41183B354CFD052EC15B836E06F383401C0C277 * get_U3CDebugReturnU3Ek__BackingField_3() const { return ___U3CDebugReturnU3Ek__BackingField_3; }
	inline Action_2_tA41183B354CFD052EC15B836E06F383401C0C277 ** get_address_of_U3CDebugReturnU3Ek__BackingField_3() { return &___U3CDebugReturnU3Ek__BackingField_3; }
	inline void set_U3CDebugReturnU3Ek__BackingField_3(Action_2_tA41183B354CFD052EC15B836E06F383401C0C277 * value)
	{
		___U3CDebugReturnU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDebugReturnU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeRef_4() { return static_cast<int32_t>(offsetof(WebSocket_t65F317625319943187207808B39D01620DBD1ABF, ___m_NativeRef_4)); }
	inline int32_t get_m_NativeRef_4() const { return ___m_NativeRef_4; }
	inline int32_t* get_address_of_m_NativeRef_4() { return &___m_NativeRef_4; }
	inline void set_m_NativeRef_4(int32_t value)
	{
		___m_NativeRef_4 = value;
	}
};


// CreateRoom/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBFE3E96671202328125335F186788BF9D6966F45  : public RuntimeObject
{
public:
	// Photon.Realtime.RoomInfo CreateRoom/<>c__DisplayClass24_0::info
	RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tBFE3E96671202328125335F186788BF9D6966F45, ___info_0)); }
	inline RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * get_info_0() const { return ___info_0; }
	inline RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 ** get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * value)
	{
		___info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_0), (void*)value);
	}
};


// CreateRoom/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t12FFC2CF6E74F1AF9883FCE21E9BF1B4A3A2C58F  : public RuntimeObject
{
public:
	// Photon.Realtime.Player CreateRoom/<>c__DisplayClass28_0::otherPlayer
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___otherPlayer_0;

public:
	inline static int32_t get_offset_of_otherPlayer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t12FFC2CF6E74F1AF9883FCE21E9BF1B4A3A2C58F, ___otherPlayer_0)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_otherPlayer_0() const { return ___otherPlayer_0; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_otherPlayer_0() { return &___otherPlayer_0; }
	inline void set_otherPlayer_0(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___otherPlayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___otherPlayer_0), (void*)value);
	}
};


// CreateRoom/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t2BD8773B296DD9B8602A76ABCA095EEFB9041AC7  : public RuntimeObject
{
public:
	// Photon.Realtime.Player CreateRoom/<>c__DisplayClass31_0::player
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player_0;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t2BD8773B296DD9B8602A76ABCA095EEFB9041AC7, ___player_0)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_player_0() const { return ___player_0; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_0), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};


// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields
{
public:
	// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9
	U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * ___U3CU3E9_0;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9__49_0
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___U3CU3E9__49_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields, ___U3CU3E9__49_0_1)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_U3CU3E9__49_0_1() const { return ___U3CU3E9__49_0_1; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_U3CU3E9__49_0_1() { return &___U3CU3E9__49_0_1; }
	inline void set_U3CU3E9__49_0_1(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___U3CU3E9__49_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13
struct U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>4__this
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A, ___U3CU3E4__this_2)); }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85  : public GeneratorReader_1_t59A277A804E04482F017CCCBC3884CDF84BF87FC
{
public:
	// System.Double Photon.Voice.AudioUtil/ToneAudioReader`1::k
	double ___k_5;

public:
	inline static int32_t get_offset_of_k_5() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___k_5)); }
	inline double get_k_5() const { return ___k_5; }
	inline double* get_address_of_k_5() { return &___k_5; }
	inline void set_k_5(double value)
	{
		___k_5 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tBBCFE2F2E35974A18DD956A07DB3ADD03EFB7566 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tBBCFE2F2E35974A18DD956A07DB3ADD03EFB7566, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct ConnectionStateValue_t4CFE64A517348A78F075A6E191166E70C8823328 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t4CFE64A517348A78F075A6E191166E70C8823328, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tAE852E1BF0C5981EB7C422C2C5B0F102F125EA6F 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tAE852E1BF0C5981EB7C422C2C5B0F102F125EA6F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ExitGames.Client.Photon.PhotonSocketState
struct PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct StatusCode_tA3C4EB0FA7A765E8DADC0442D140B6B1366158B4 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tA3C4EB0FA7A765E8DADC0442D140B6B1366158B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/SpawnSequence
struct SpawnSequence_t7B0ED53F2219EACCE8EDC1AD5372A50445179C8E 
{
public:
	// System.Int32 ExitGames.Demos.DemoPunVoice.CharacterInstantiation/SpawnSequence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpawnSequence_t7B0ED53F2219EACCE8EDC1AD5372A50445179C8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___peerBase_0)); }
	inline PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___ConnectAddress_4)); }
	inline String_t* get_ConnectAddress_4() const { return ___ConnectAddress_4; }
	inline String_t** get_address_of_ConnectAddress_4() { return &___ConnectAddress_4; }
	inline void set_ConnectAddress_4(String_t* value)
	{
		___ConnectAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CServerPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_8() const { return ___U3CServerPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_8() { return &___U3CServerPortU3Ek__BackingField_8; }
	inline void set_U3CServerPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CUrlProtocolU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_10() const { return ___U3CUrlProtocolU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_10() { return &___U3CUrlProtocolU3Ek__BackingField_10; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1, ___U3CUrlPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_11() const { return ___U3CUrlPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_11() { return &___U3CUrlPathU3Ek__BackingField_11; }
	inline void set_U3CUrlPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_11), (void*)value);
	}
};

struct IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_7() const { return ___U3CServerIpAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_7() { return &___U3CServerIpAddressU3Ek__BackingField_7; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t58EF0D7D695E5A9618AF48C0BD8C2B9A6C65BD82 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_tC4E24C0B4E469DDDFE7CDD5D4C319B0599D8D0AE * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_tC124D27085B30F44C9C2DDA4B28F0D24873E53CA * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject * ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t59C5F26D86F647D5DD8176EE3FAB95925F274D49 * ___reusableEventData_28;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::watch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___watch_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t8C68E4022BA4A5AC41CEE24BD13C9226E5A683EC * ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___photonPeer_0)); }
	inline PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___SerializationProtocol_1)); }
	inline IProtocol_t58EF0D7D695E5A9618AF48C0BD8C2B9A6C65BD82 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_t58EF0D7D695E5A9618AF48C0BD8C2B9A6C65BD82 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_t58EF0D7D695E5A9618AF48C0BD8C2B9A6C65BD82 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___PhotonSocket_3)); }
	inline IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___CommandInCurrentDispatch_9)); }
	inline NCommand_tC4E24C0B4E469DDDFE7CDD5D4C319B0599D8D0AE * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_tC4E24C0B4E469DDDFE7CDD5D4C319B0599D8D0AE ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_tC4E24C0B4E469DDDFE7CDD5D4C319B0599D8D0AE * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___ActionQueue_12)); }
	inline Queue_1_tC124D27085B30F44C9C2DDA4B28F0D24873E53CA * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_tC124D27085B30F44C9C2DDA4B28F0D24873E53CA ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_tC124D27085B30F44C9C2DDA4B28F0D24873E53CA * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_PhotonToken_25() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___PhotonToken_25)); }
	inline RuntimeObject * get_PhotonToken_25() const { return ___PhotonToken_25; }
	inline RuntimeObject ** get_address_of_PhotonToken_25() { return &___PhotonToken_25; }
	inline void set_PhotonToken_25(RuntimeObject * value)
	{
		___PhotonToken_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonToken_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___reusableEventData_28)); }
	inline EventData_t59C5F26D86F647D5DD8176EE3FAB95925F274D49 * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_t59C5F26D86F647D5DD8176EE3FAB95925F274D49 ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_t59C5F26D86F647D5DD8176EE3FAB95925F274D49 * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_watch_29() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___watch_29)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_watch_29() const { return ___watch_29; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_watch_29() { return &___watch_29; }
	inline void set_watch_29(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___watch_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watch_29), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_messageHeader_39() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___messageHeader_39)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_39() const { return ___messageHeader_39; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_39() { return &___messageHeader_39; }
	inline void set_messageHeader_39(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_39), (void*)value);
	}

	inline static int32_t get_offset_of_CryptoProvider_40() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___CryptoProvider_40)); }
	inline RuntimeObject* get_CryptoProvider_40() const { return ___CryptoProvider_40; }
	inline RuntimeObject** get_address_of_CryptoProvider_40() { return &___CryptoProvider_40; }
	inline void set_CryptoProvider_40(RuntimeObject* value)
	{
		___CryptoProvider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_40), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_41() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___lagRandomizer_41)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_41() const { return ___lagRandomizer_41; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_41() { return &___lagRandomizer_41; }
	inline void set_lagRandomizer_41(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_42() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___NetSimListOutgoing_42)); }
	inline LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * get_NetSimListOutgoing_42() const { return ___NetSimListOutgoing_42; }
	inline LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 ** get_address_of_NetSimListOutgoing_42() { return &___NetSimListOutgoing_42; }
	inline void set_NetSimListOutgoing_42(LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * value)
	{
		___NetSimListOutgoing_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_43() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___NetSimListIncoming_43)); }
	inline LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * get_NetSimListIncoming_43() const { return ___NetSimListIncoming_43; }
	inline LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 ** get_address_of_NetSimListIncoming_43() { return &___NetSimListIncoming_43; }
	inline void set_NetSimListIncoming_43(LinkedList_1_tF46A4EC8E1C81FC05B859682958E4D83C7F11467 * value)
	{
		___NetSimListIncoming_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_43), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_44() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___networkSimulationSettings_44)); }
	inline NetworkSimulationSet_t8C68E4022BA4A5AC41CEE24BD13C9226E5A683EC * get_networkSimulationSettings_44() const { return ___networkSimulationSettings_44; }
	inline NetworkSimulationSet_t8C68E4022BA4A5AC41CEE24BD13C9226E5A683EC ** get_address_of_networkSimulationSettings_44() { return &___networkSimulationSettings_44; }
	inline void set_networkSimulationSettings_44(NetworkSimulationSet_t8C68E4022BA4A5AC41CEE24BD13C9226E5A683EC * value)
	{
		___networkSimulationSettings_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_44), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_45() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84, ___TrafficPackageHeaderSize_45)); }
	inline int32_t get_TrafficPackageHeaderSize_45() const { return ___TrafficPackageHeaderSize_45; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_45() { return &___TrafficPackageHeaderSize_45; }
	inline void set_TrafficPackageHeaderSize_45(int32_t value)
	{
		___TrafficPackageHeaderSize_45 = value;
	}
};

struct PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_tBA69BCB799C533EE20BCA94A366763F6051FF3C3 * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_tBA69BCB799C533EE20BCA94A366763F6051FF3C3 * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_tBA69BCB799C533EE20BCA94A366763F6051FF3C3 ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_tBA69BCB799C533EE20BCA94A366763F6051FF3C3 * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1  : public IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1
{
public:
	// ExitGames.Client.Photon.WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t65F317625319943187207808B39D01620DBD1ABF * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject * ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___websocketConnectionObject_14;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___sock_12)); }
	inline WebSocket_t65F317625319943187207808B39D01620DBD1ABF * get_sock_12() const { return ___sock_12; }
	inline WebSocket_t65F317625319943187207808B39D01620DBD1ABF ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(WebSocket_t65F317625319943187207808B39D01620DBD1ABF * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_14() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___websocketConnectionObject_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_websocketConnectionObject_14() const { return ___websocketConnectionObject_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_websocketConnectionObject_14() { return &___websocketConnectionObject_14; }
	inline void set_websocketConnectionObject_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___websocketConnectionObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___websocketConnectionObject_14), (void*)value);
	}
};


// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// PlayerList
struct PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text PlayerList::playerNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___playerNameText_4;
	// System.Boolean PlayerList::ready
	bool ___ready_5;
	// Photon.Realtime.Player PlayerList::<Player>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CPlayerU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_playerNameText_4() { return static_cast<int32_t>(offsetof(PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A, ___playerNameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_playerNameText_4() const { return ___playerNameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_playerNameText_4() { return &___playerNameText_4; }
	inline void set_playerNameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___playerNameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerNameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_ready_5() { return static_cast<int32_t>(offsetof(PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A, ___ready_5)); }
	inline bool get_ready_5() const { return ___ready_5; }
	inline bool* get_address_of_ready_5() { return &___ready_5; }
	inline void set_ready_5(bool value)
	{
		___ready_5 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A, ___U3CPlayerU3Ek__BackingField_6)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CPlayerU3Ek__BackingField_6() const { return ___U3CPlayerU3Ek__BackingField_6; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CPlayerU3Ek__BackingField_6() { return &___U3CPlayerU3Ek__BackingField_6; }
	inline void set_U3CPlayerU3Ek__BackingField_6(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CPlayerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerU3Ek__BackingField_6), (void*)value);
	}
};


// RoomList
struct RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text RoomList::roomNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___roomNameText_4;
	// Photon.Realtime.RoomInfo RoomList::<RoomInfo>k__BackingField
	RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * ___U3CRoomInfoU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_roomNameText_4() { return static_cast<int32_t>(offsetof(RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23, ___roomNameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_roomNameText_4() const { return ___roomNameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_roomNameText_4() { return &___roomNameText_4; }
	inline void set_roomNameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___roomNameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomNameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRoomInfoU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23, ___U3CRoomInfoU3Ek__BackingField_5)); }
	inline RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * get_U3CRoomInfoU3Ek__BackingField_5() const { return ___U3CRoomInfoU3Ek__BackingField_5; }
	inline RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 ** get_address_of_U3CRoomInfoU3Ek__BackingField_5() { return &___U3CRoomInfoU3Ek__BackingField_5; }
	inline void set_U3CRoomInfoU3Ek__BackingField_5(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * value)
	{
		___U3CRoomInfoU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomInfoU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_gshared (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * __this, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec0, double ___frequency1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Photon.Realtime.RoomInfo RoomList::get_RoomInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * RoomList_get_RoomInfo_m8EBC212015F928C944D99EE5A5DF8FFEDFCC420D_inline (RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Photon.Realtime.Player PlayerList::get_Player()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PlayerList_get_Player_m9655A2A1D655B0001C3468CEDD5D978A644E05EC_inline (PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741 (String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
inline void ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * __this, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec0, double ___frequency1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method)
{
	((  void (*) (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 *, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *, double, int32_t, int32_t, const RuntimeMethod*))ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_gshared)(__this, ___clockSec0, ___frequency1, ___samplingRate2, ___channels3, method);
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m85B98EF74D8A3DC7B6B7450D6DE4B62D4972219B (WebSocket_t65F317625319943187207808B39D01620DBD1ABF * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15 (WebSocket_t65F317625319943187207808B39D01620DBD1ABF * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_m45EFAED0F38FB26CBCBD5E2A057381C8A324394A (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m1821DD2CA718A50C9C0011AB7A7B233B1CB2041B_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m11C19CD7CED5CEC103968E3710F4953FE1797C62 (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_mEBDF977FD48DB7F4C959E45DDB0C63E81BBE638C (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m6D9A8CD80CE17944474929B0A43AA99408686407_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_m832D37383EC105FCE284B18134BF41E7E3F30240 (WebSocket_t65F317625319943187207808B39D01620DBD1ABF * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_mB82AD8D5D86AD5CC992ADA8ED2DCF0CF3BF71884 (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m9A5F4F36601BEBF92415B619B394D3D3339D776F (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle__ctor_m7909BC3D6DAC950DD95529FEF4D930C328358BBF (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::Invoke(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_Invoke_m6B54DC66A79F9307887FC2249966E1D1FB83DCC6 (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___toggle0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___toggle0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___toggle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___toggle0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___toggle0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(targetMethod, targetThis, ___toggle0);
					else
						GenericVirtActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(targetMethod, targetThis, ___toggle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___toggle0);
					else
						VirtActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___toggle0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___toggle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::BeginInvoke(UnityEngine.UI.Toggle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnToggle_BeginInvoke_mF574F1031F0083F1670BA262B1EE5B1C3B5E646E (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___toggle0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_EndInvoke_mFE0E2BEDA06ECEFD9BBB286CE209E394D44BE234 (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged__ctor_mA59D0B679F18AB486880E7C054DA3E807456588A (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::Invoke(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_Invoke_m98105403A008E6D02E41850769DCDF920B29936D (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newCamera0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newCamera0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___newCamera0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___newCamera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___newCamera0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___newCamera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___newCamera0);
					else
						GenericVirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___newCamera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newCamera0);
					else
						VirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newCamera0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newCamera0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraChanged_BeginInvoke_mFB43CC081B00526E2A5FBDF5024B501B98813C21 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newCamera0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___newCamera0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_EndInvoke_m17382849996A7F73CF6E7C42BE714B92CF387F54 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated__ctor_m9CFC16725506B0EB456824BBE5A69A3A183DDB31 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_Invoke_m7C6F10334DABFBE4672960B13B92292E30D8FE07 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___character0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___character0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___character0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___character0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___character0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___character0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___character0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___character0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___character0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___character0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCharacterInstantiated_BeginInvoke_m4520B3BB2E89C25D865654C84623C6BDDCE3DA42 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___character0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_EndInvoke_m9DC94021A06541AF31D32793768614FC13E4F4B6 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CreateRoom/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m13F8A89D93A946C972AE23D00185C2E5EE1F55CE (U3CU3Ec__DisplayClass24_0_tBFE3E96671202328125335F186788BF9D6966F45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CreateRoom/<>c__DisplayClass24_0::<OnRoomListUpdate>b__0(RoomList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3COnRoomListUpdateU3Eb__0_mBE8482D5AD65E3A7339FA9737C895878B456C886 (U3CU3Ec__DisplayClass24_0_tBFE3E96671202328125335F186788BF9D6966F45 * __this, RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23 * ___x0, const RuntimeMethod* method)
{
	{
		// int index = listings.FindIndex(x => x.RoomInfo.Name == info.Name);
		RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23 * L_0 = ___x0;
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_1;
		L_1 = RoomList_get_RoomInfo_m8EBC212015F928C944D99EE5A5DF8FFEDFCC420D_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline(L_1, /*hidden argument*/NULL);
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_3 = __this->get_info_0();
		String_t* L_4;
		L_4 = RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CreateRoom/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mE27A85E25F3CDAB5406C693628FA240DA9BE5324 (U3CU3Ec__DisplayClass28_0_t12FFC2CF6E74F1AF9883FCE21E9BF1B4A3A2C58F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CreateRoom/<>c__DisplayClass28_0::<OnPlayerLeftRoom>b__0(PlayerList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass28_0_U3COnPlayerLeftRoomU3Eb__0_m0B2979B4659F7AF7BBA9B633180DB0B1D23ECB03 (U3CU3Ec__DisplayClass28_0_t12FFC2CF6E74F1AF9883FCE21E9BF1B4A3A2C58F * __this, PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * ___x0, const RuntimeMethod* method)
{
	{
		// int index = playerListings.FindIndex(x => x.Player == otherPlayer);
		PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * L_0 = ___x0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1;
		L_1 = PlayerList_get_Player_m9655A2A1D655B0001C3468CEDD5D978A644E05EC_inline(L_0, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2 = __this->get_otherPlayer_0();
		return (bool)((((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_1) == ((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CreateRoom/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m2165546D2B7733F18AF386A81C0502746D22E0A8 (U3CU3Ec__DisplayClass31_0_t2BD8773B296DD9B8602A76ABCA095EEFB9041AC7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CreateRoom/<>c__DisplayClass31_0::<RPC_ChangeReadyState>b__0(PlayerList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CRPC_ChangeReadyStateU3Eb__0_mF3E1BB418718B24423F892D6974BF168F853AB79 (U3CU3Ec__DisplayClass31_0_t2BD8773B296DD9B8602A76ABCA095EEFB9041AC7 * __this, PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * ___x0, const RuntimeMethod* method)
{
	{
		// int index = playerListings.FindIndex(x => x.Player == player);
		PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * L_0 = ___x0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1;
		L_1 = PlayerList_get_Player_m9655A2A1D655B0001C3468CEDD5D978A644E05EC_inline(L_0, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2 = __this->get_player_0();
		return (bool)((((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_1) == ((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mDCDC78FB43C16D8F65B9BE8799F0053DBB64007E (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m71595BAF216317FBF79F564F306D3A87F430EDE4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// private int m_LastPressedFrame = -5;
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		// private int m_ReleasedFrame = -5;
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mAAC725DA03D80EC7275B0F0B82528E3C21670ADE (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Pressed)
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->set_m_Pressed_4((bool)1);
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mD4D0FD8E203575FE98152A62BF6B16071E383F5C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// m_Pressed = false;
		__this->set_m_Pressed_4((bool)0);
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m040109DCD13EF3704399353ED4BC4AAB35539DF6 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m71333B46D90B2EF56A8EEFE38757A585E6E2F7D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * L_0 = (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 *)il2cpp_codegen_object_new(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.IAudioDesc Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<Awake>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__49_0_mF16C0D20DCE0130B0D078D3416E8D1F0D4738509 (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.voiceConnection.PrimaryRecorder.InputFactory = () => new AudioUtil.ToneAudioReader<float>();
		ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * L_0 = (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 *)il2cpp_codegen_object_new(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var);
		ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A(L_0, (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *)NULL, (440.0), ((int32_t)48000), 1, /*hidden argument*/ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13__ctor_mCDCF340A15757B92764F2D5B92D61109DA7D53F2 (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13_System_IDisposable_Dispose_mA2A91E841E6E9C44E451EA6CD329444B9F1D8A87 (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__13_MoveNext_m7C10AD5BD6C177DACBCBC0AB3660E590864C2AEA (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_3 = NULL;
	int32_t G_B29_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B29_5 = NULL;
	Exception_t * G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_3 = NULL;
	int32_t G_B28_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B28_5 = NULL;
	String_t* G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_3 = NULL;
	int32_t G_B30_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B30_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0196;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_3 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_4 = L_3->get_sock_12();
		if (!L_4)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0056;
	}

IL_0036:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_5 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0056:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_6 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_7 = L_6->get_sock_12();
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_8 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_9 = L_8->get_sock_12();
		bool L_10;
		L_10 = WebSocket_get_Connected_m85B98EF74D8A3DC7B6B7450D6DE4B62D4972219B(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_11 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_12 = L_11->get_sock_12();
		String_t* L_13;
		L_13 = WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0036;
		}
	}

IL_0078:
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_14 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_15 = L_14->get_sock_12();
		if (!L_15)
		{
			goto IL_0249;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_16 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_17 = L_16->get_sock_12();
		String_t* L_18;
		L_18 = WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = IPhotonSocket_get_Listener_m45EFAED0F38FB26CBCBD5E2A057381C8A324394A(L_19, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_21 = V_1;
		String_t* L_22;
		L_22 = IPhotonSocket_get_ServerAddress_m1821DD2CA718A50C9C0011AB7A7B233B1CB2041B_inline(L_21, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_23 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_24 = L_23->get_sock_12();
		String_t* L_25;
		L_25 = WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23, L_22, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A, L_25, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F_il2cpp_TypeInfo_var, L_20, 1, L_26);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_27 = V_1;
		IPhotonSocket_HandleException_m11C19CD7CED5CEC103968E3710F4953FE1797C62(L_27, ((int32_t)1023), /*hidden argument*/NULL);
		// }
		goto IL_0249;
	}

IL_00cc:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_28 = V_1;
		bool L_29;
		L_29 = IPhotonSocket_ReportDebugOfLevel_mEBDF977FD48DB7F4C959E45DDB0C63E81BBE638C(L_28, 5, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00ff;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_30 = V_1;
		RuntimeObject* L_31;
		L_31 = IPhotonSocket_get_Listener_m45EFAED0F38FB26CBCBD5E2A057381C8A324394A(L_30, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_32 = V_1;
		int32_t L_33;
		L_33 = IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline(L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		RuntimeObject * L_34 = Box(PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		V_2 = *(int32_t*)UnBox(L_34);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_35, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F_il2cpp_TypeInfo_var, L_31, 5, L_36);
	}

IL_00ff:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_37 = V_1;
		IPhotonSocket_set_State_m6D9A8CD80CE17944474929B0A43AA99408686407_inline(L_37, 2, /*hidden argument*/NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_38 = V_1;
		PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * L_39 = ((IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 *)L_38)->get_peerBase_0();
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_39);
		goto IL_023d;
	}

IL_0116:
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_40 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_41 = L_40->get_sock_12();
		if (!L_41)
		{
			goto IL_023d;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_42 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_43 = L_42->get_sock_12();
		String_t* L_44;
		L_44 = WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_016a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_45 = V_1;
		RuntimeObject* L_46;
		L_46 = IPhotonSocket_get_Listener_m45EFAED0F38FB26CBCBD5E2A057381C8A324394A(L_45, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_47 = V_1;
		String_t* L_48;
		L_48 = IPhotonSocket_get_ServerAddress_m1821DD2CA718A50C9C0011AB7A7B233B1CB2041B_inline(L_47, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_49 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_50 = L_49->get_sock_12();
		String_t* L_51;
		L_51 = WebSocket_get_Error_m84716075C633D3238F2630BC1CEAB1FE6F392B15(L_50, /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155, L_48, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A, L_51, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F_il2cpp_TypeInfo_var, L_46, 1, L_52);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_53 = V_1;
		IPhotonSocket_HandleException_m11C19CD7CED5CEC103968E3710F4953FE1797C62(L_53, ((int32_t)1039), /*hidden argument*/NULL);
		// break;
		goto IL_0249;
	}

IL_016a:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_54 = V_1;
		WebSocket_t65F317625319943187207808B39D01620DBD1ABF * L_55 = L_54->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56;
		L_56 = WebSocket_Recv_m832D37383EC105FCE284B18134BF41E7E3F30240(L_55, /*hidden argument*/NULL);
		V_3 = L_56;
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = V_3;
		if (!L_57)
		{
			goto IL_017d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_3;
		if ((((RuntimeArray*)L_58)->max_length))
		{
			goto IL_01a2;
		}
	}

IL_017d:
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_59 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_59, (0.0199999996f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_59);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0196:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_023d;
	}

IL_01a2:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = V_3;
		if (!(((RuntimeArray*)L_60)->max_length))
		{
			goto IL_023d;
		}
	}

IL_01a9:
	try
	{ // begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_61 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_3;
		IPhotonSocket_HandleReceivedDatagram_mB82AD8D5D86AD5CC992ADA8ED2DCF0CF3BF71884(L_61, L_62, ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length))), (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_023d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b9;
		}
		throw e;
	}

CATCH_01b9:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_64 = V_1;
			int32_t L_65;
			L_65 = IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline(L_64, /*hidden argument*/NULL);
			if ((((int32_t)L_65) == ((int32_t)3)))
			{
				goto IL_023b;
			}
		}

IL_01c4:
		{
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_66 = V_1;
			int32_t L_67;
			L_67 = IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline(L_66, /*hidden argument*/NULL);
			if (!L_67)
			{
				goto IL_023b;
			}
		}

IL_01cc:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_68 = V_1;
			bool L_69;
			L_69 = IPhotonSocket_ReportDebugOfLevel_mEBDF977FD48DB7F4C959E45DDB0C63E81BBE638C(L_68, 1, /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_0230;
			}
		}

IL_01d5:
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_70 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_71;
			ArrayElementTypeCheck (L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_74 = V_1;
			int32_t L_75;
			L_75 = IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline(L_74, /*hidden argument*/NULL);
			V_2 = L_75;
			RuntimeObject * L_76 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_tAFF39A4F08A00652A764B41B5736B5AC6B5E1F09_il2cpp_TypeInfo_var)), (&V_2));
			String_t* L_77;
			L_77 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_76);
			V_2 = *(int32_t*)UnBox(L_76);
			ArrayElementTypeCheck (L_73, L_77);
			(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_77);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_73;
			ArrayElementTypeCheck (L_78, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = L_78;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_80 = V_1;
			String_t* L_81;
			L_81 = IPhotonSocket_get_ServerAddress_m1821DD2CA718A50C9C0011AB7A7B233B1CB2041B_inline(L_80, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_79, L_81);
			(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_81);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = L_79;
			ArrayElementTypeCheck (L_82, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_82;
			Exception_t * L_84 = V_4;
			Exception_t * L_85 = L_84;
			G_B28_0 = L_85;
			G_B28_1 = 5;
			G_B28_2 = L_83;
			G_B28_3 = L_83;
			G_B28_4 = 1;
			G_B28_5 = L_70;
			if (L_85)
			{
				G_B29_0 = L_85;
				G_B29_1 = 5;
				G_B29_2 = L_83;
				G_B29_3 = L_83;
				G_B29_4 = 1;
				G_B29_5 = L_70;
				goto IL_0220;
			}
		}

IL_021c:
		{
			G_B30_0 = ((String_t*)(NULL));
			G_B30_1 = G_B28_1;
			G_B30_2 = G_B28_2;
			G_B30_3 = G_B28_3;
			G_B30_4 = G_B28_4;
			G_B30_5 = G_B28_5;
			goto IL_0225;
		}

IL_0220:
		{
			String_t* L_86;
			L_86 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B29_0);
			G_B30_0 = L_86;
			G_B30_1 = G_B29_1;
			G_B30_2 = G_B29_2;
			G_B30_3 = G_B29_3;
			G_B30_4 = G_B29_4;
			G_B30_5 = G_B29_5;
		}

IL_0225:
		{
			ArrayElementTypeCheck (G_B30_2, G_B30_0);
			(G_B30_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B30_1), (String_t*)G_B30_0);
			String_t* L_87;
			L_87 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B30_3, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m9A5F4F36601BEBF92415B619B394D3D3339D776F(G_B30_5, G_B30_4, L_87, /*hidden argument*/NULL);
		}

IL_0230:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_88 = V_1;
			IPhotonSocket_HandleException_m11C19CD7CED5CEC103968E3710F4953FE1797C62(L_88, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_023b:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_023d;
		}
	} // end catch (depth: 1)

IL_023d:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_89 = V_1;
		int32_t L_90;
		L_90 = IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline(L_89, /*hidden argument*/NULL);
		if ((((int32_t)L_90) == ((int32_t)2)))
		{
			goto IL_0116;
		}
	}

IL_0249:
	{
		// this.Disconnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_91 = V_1;
		bool L_92;
		L_92 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_91);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2BEC599CA0BB96847FB4B63F8BDC064C9EB10660 (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m963A4FE5B939246FAD8613A5075447A95C61459F (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m963A4FE5B939246FAD8613A5075447A95C61459F_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_get_Current_mDC9710DB0C8BC7A59212D9117410111F2B853B76 (U3CReceiveLoopU3Ed__13_t9BC19F7FE5E3E4DDA198BAD08285DE0A8B85482A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_mCBC834820BA80499919028FDFFB3DB2F8A71223A (MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___debugMode0));

}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle__ctor_m22F5C2DD0D1FA082384960207ADA4EC840022430 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_m441C48528BBCA159F08298CD43CE4C5EFFB54333 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___debugMode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___debugMode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___debugMode0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___debugMode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___debugMode0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___debugMode0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___debugMode0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDebugToggle_BeginInvoke_mBA7E12E271CCE8195B50FA7E5B9688C3BDCFFC64 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___debugMode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_EndInvoke_mBB499C9740BE1A26FA9D7DF02821830D3B51B16D (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * RoomList_get_RoomInfo_m8EBC212015F928C944D99EE5A5DF8FFEDFCC420D_inline (RoomList_tA62AC9BD74B61ECD0058938577542AFE572DDC23 * __this, const RuntimeMethod* method)
{
	{
		// public RoomInfo RoomInfo { get; private set; }
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_0 = __this->get_U3CRoomInfoU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PlayerList_get_Player_m9655A2A1D655B0001C3468CEDD5D978A644E05EC_inline (PlayerList_t4343B071C0DF2ADE43C9B79F0B087223E4B2BC9A * __this, const RuntimeMethod* method)
{
	{
		// public Player Player { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3CPlayerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m1821DD2CA718A50C9C0011AB7A7B233B1CB2041B_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m4AA2801DA69886C55EC2B1379305F6113D719E16_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m6D9A8CD80CE17944474929B0A43AA99408686407_inline (IPhotonSocket_tA881FC586C85DBD3A886B5A7268129EF4D1729D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}
