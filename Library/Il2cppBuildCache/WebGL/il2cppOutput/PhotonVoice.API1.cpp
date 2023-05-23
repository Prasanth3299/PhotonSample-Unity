#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0;
// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32>
struct Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623;
// System.Func`2<System.Int16,System.Int16>
struct Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D;
// System.Func`2<Photon.Voice.LocalVoice,System.Boolean>
struct Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1;
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo>
struct IEnumerator_1_t24E6ABC30A0F340FA04F70A73950A148AD18934B;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,Photon.Voice.RemoteVoice>
struct KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5;
// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8;
// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664;
// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0;
// Photon.Voice.PrimitiveArrayPool`1<System.Int16>
struct PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485;
// Photon.Voice.PrimitiveArrayPool`1<System.Single>
struct PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E;
// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer>
struct Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Voice.RemoteVoice>
struct ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,Photon.Voice.RemoteVoice>[]
struct EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>[]
struct EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IDecoder
struct IDecoder_t44AC81916D0D3FA60B33E6D2D98B8B0202342302;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// Photon.Voice.IEncoder
struct IEncoder_tA42B4BA524A255A892B8E21DB5A2B7E7D4867995;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// Photon.Voice.IServiceable
struct IServiceable_t3E0661D0BF2CE8495FAA0AE754176B0B7A6759E1;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_tA55914265033EC2D2D76602F02EF7FDEA06032E4;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87;
// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Voice.SpacingProfile
struct SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68;
// System.String
struct String_t;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15;
// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7;
// Photon.Voice.VoiceClient/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_1
struct U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_2
struct U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_3
struct U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C;
// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___entries_1)); }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___keys_7)); }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___values_8)); }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___entries_1)); }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___keys_7)); }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___values_8)); }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2, ___pool_0)); }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63, ___pool_0)); }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E  : public RuntimeObject
{
public:
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// Photon.Voice.ILogger Photon.Voice.VoiceClient::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6;
	// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_8;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_9;
	// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32> Photon.Voice.VoiceClient::remoteVoiceDelayFrames
	Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * ___remoteVoiceDelayFrames_10;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMin
	uint8_t ___voiceIDMin_11;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMax
	uint8_t ___voiceIDMax_12;
	// System.Byte Photon.Voice.VoiceClient::voiceIdLast
	uint8_t ___voiceIdLast_13;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_14;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * ___localVoices_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * ___localVoicesPerChannel_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___remoteVoices_17;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rnd_18;

public:
	inline static int32_t get_offset_of_transport_0() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___transport_0)); }
	inline RuntimeObject* get_transport_0() const { return ___transport_0; }
	inline RuntimeObject** get_address_of_transport_0() { return &___transport_0; }
	inline void set_transport_0(RuntimeObject* value)
	{
		___transport_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesLostU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_2() const { return ___U3CFramesLostU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_2() { return &___U3CFramesLostU3Ek__BackingField_2; }
	inline void set_U3CFramesLostU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesReceivedU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_3() const { return ___U3CFramesReceivedU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_3() { return &___U3CFramesReceivedU3Ek__BackingField_3; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_4() const { return ___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_4() { return &___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeVarianceU3Ek__BackingField_5)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_5() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_5(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7)); }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7(RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CDebugLostPercentU3Ek__BackingField_8)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_8() const { return ___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_8() { return &___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_8(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_prevRtt_9() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___prevRtt_9)); }
	inline int32_t get_prevRtt_9() const { return ___prevRtt_9; }
	inline int32_t* get_address_of_prevRtt_9() { return &___prevRtt_9; }
	inline void set_prevRtt_9(int32_t value)
	{
		___prevRtt_9 = value;
	}

	inline static int32_t get_offset_of_remoteVoiceDelayFrames_10() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoiceDelayFrames_10)); }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * get_remoteVoiceDelayFrames_10() const { return ___remoteVoiceDelayFrames_10; }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 ** get_address_of_remoteVoiceDelayFrames_10() { return &___remoteVoiceDelayFrames_10; }
	inline void set_remoteVoiceDelayFrames_10(Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * value)
	{
		___remoteVoiceDelayFrames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceDelayFrames_10), (void*)value);
	}

	inline static int32_t get_offset_of_voiceIDMin_11() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIDMin_11)); }
	inline uint8_t get_voiceIDMin_11() const { return ___voiceIDMin_11; }
	inline uint8_t* get_address_of_voiceIDMin_11() { return &___voiceIDMin_11; }
	inline void set_voiceIDMin_11(uint8_t value)
	{
		___voiceIDMin_11 = value;
	}

	inline static int32_t get_offset_of_voiceIDMax_12() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIDMax_12)); }
	inline uint8_t get_voiceIDMax_12() const { return ___voiceIDMax_12; }
	inline uint8_t* get_address_of_voiceIDMax_12() { return &___voiceIDMax_12; }
	inline void set_voiceIDMax_12(uint8_t value)
	{
		___voiceIDMax_12 = value;
	}

	inline static int32_t get_offset_of_voiceIdLast_13() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIdLast_13)); }
	inline uint8_t get_voiceIdLast_13() const { return ___voiceIdLast_13; }
	inline uint8_t* get_address_of_voiceIdLast_13() { return &___voiceIdLast_13; }
	inline void set_voiceIdLast_13(uint8_t value)
	{
		___voiceIdLast_13 = value;
	}

	inline static int32_t get_offset_of_globalInterestGroup_14() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___globalInterestGroup_14)); }
	inline uint8_t get_globalInterestGroup_14() const { return ___globalInterestGroup_14; }
	inline uint8_t* get_address_of_globalInterestGroup_14() { return &___globalInterestGroup_14; }
	inline void set_globalInterestGroup_14(uint8_t value)
	{
		___globalInterestGroup_14 = value;
	}

	inline static int32_t get_offset_of_localVoices_15() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoices_15)); }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * get_localVoices_15() const { return ___localVoices_15; }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA ** get_address_of_localVoices_15() { return &___localVoices_15; }
	inline void set_localVoices_15(Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * value)
	{
		___localVoices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoices_15), (void*)value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_16() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoicesPerChannel_16)); }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * get_localVoicesPerChannel_16() const { return ___localVoicesPerChannel_16; }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A ** get_address_of_localVoicesPerChannel_16() { return &___localVoicesPerChannel_16; }
	inline void set_localVoicesPerChannel_16(Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * value)
	{
		___localVoicesPerChannel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoicesPerChannel_16), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoices_17() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoices_17)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_remoteVoices_17() const { return ___remoteVoices_17; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_remoteVoices_17() { return &___remoteVoices_17; }
	inline void set_remoteVoices_17(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___remoteVoices_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoices_17), (void*)value);
	}

	inline static int32_t get_offset_of_rnd_18() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___rnd_18)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rnd_18() const { return ___rnd_18; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rnd_18() { return &___rnd_18; }
	inline void set_rnd_18(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rnd_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_18), (void*)value);
	}
};


// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields
{
public:
	// Photon.Voice.SpacingProfile/<>c Photon.Voice.SpacingProfile/<>c::<>9
	U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * ___U3CU3E9_0;
	// System.Func`2<System.Int16,System.Int16> Photon.Voice.SpacingProfile/<>c::<>9__13_0
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields
{
public:
	// Photon.Voice.VoiceClient/<>c Photon.Voice.VoiceClient/<>c::<>9
	U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,System.Boolean> Photon.Voice.VoiceClient/<>c::<>9__61_0
	Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * ___U3CU3E9__61_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__61_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9__61_0_1)); }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * get_U3CU3E9__61_0_1() const { return ___U3CU3E9__61_0_1; }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 ** get_address_of_U3CU3E9__61_0_1() { return &___U3CU3E9__61_0_1; }
	inline void set_U3CU3E9__61_0_1(Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * value)
	{
		___U3CU3E9__61_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__61_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass52_0::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_1
struct U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass52_1::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_2
struct U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass52_2::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_3
struct U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass52_3::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>
struct KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___value_1)); }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * get_value_1() const { return ___value_1; }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___value_1)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// Photon.Voice.VoiceClient/CreateOptions
struct CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 
{
public:
	// System.Byte Photon.Voice.VoiceClient/CreateOptions::VoiceIDMin
	uint8_t ___VoiceIDMin_0;
	// System.Byte Photon.Voice.VoiceClient/CreateOptions::VoiceIDMax
	uint8_t ___VoiceIDMax_1;

public:
	inline static int32_t get_offset_of_VoiceIDMin_0() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2, ___VoiceIDMin_0)); }
	inline uint8_t get_VoiceIDMin_0() const { return ___VoiceIDMin_0; }
	inline uint8_t* get_address_of_VoiceIDMin_0() { return &___VoiceIDMin_0; }
	inline void set_VoiceIDMin_0(uint8_t value)
	{
		___VoiceIDMin_0 = value;
	}

	inline static int32_t get_offset_of_VoiceIDMax_1() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2, ___VoiceIDMax_1)); }
	inline uint8_t get_VoiceIDMax_1() const { return ___VoiceIDMax_1; }
	inline uint8_t* get_address_of_VoiceIDMax_1() { return &___VoiceIDMax_1; }
	inline void set_VoiceIDMax_1(uint8_t value)
	{
		___VoiceIDMax_1 = value;
	}
};

struct CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields
{
public:
	// Photon.Voice.VoiceClient/CreateOptions Photon.Voice.VoiceClient/CreateOptions::Default
	CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields, ___Default_2)); }
	inline CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  get_Default_2() const { return ___Default_2; }
	inline CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 * get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  value)
	{
		___Default_2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___dictionary_0)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___current_3)); }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>
struct Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___dictionary_0)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___current_3)); }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___dictionary_0)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___current_3)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Photon.Voice.Codec
struct Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF 
{
public:
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// Photon.Voice.FrameFlags
struct FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56 
{
public:
	// System.Byte Photon.Voice.FrameFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Error
struct Error_t9EB59F7E84B1C044178E67535493CBFE775492FA 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t9EB59F7E84B1C044178E67535493CBFE775492FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Param
struct Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Param::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 
{
public:
	// System.Byte[] Photon.Voice.FrameBuffer::array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array_0;
	// System.Int32 Photon.Voice.FrameBuffer::offset
	int32_t ___offset_1;
	// System.Int32 Photon.Voice.FrameBuffer::count
	int32_t ___count_2;
	// System.IDisposable Photon.Voice.FrameBuffer::disposer
	RuntimeObject* ___disposer_3;
	// System.Boolean Photon.Voice.FrameBuffer::disposed
	bool ___disposed_4;
	// System.Int32 Photon.Voice.FrameBuffer::refCnt
	int32_t ___refCnt_5;
	// System.Runtime.InteropServices.GCHandle Photon.Voice.FrameBuffer::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	// System.IntPtr Photon.Voice.FrameBuffer::ptr
	intptr_t ___ptr_7;
	// System.Boolean Photon.Voice.FrameBuffer::pinned
	bool ___pinned_8;
	// Photon.Voice.FrameFlags Photon.Voice.FrameBuffer::<Flags>k__BackingField
	uint8_t ___U3CFlagsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_disposer_3() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___disposer_3)); }
	inline RuntimeObject* get_disposer_3() const { return ___disposer_3; }
	inline RuntimeObject** get_address_of_disposer_3() { return &___disposer_3; }
	inline void set_disposer_3(RuntimeObject* value)
	{
		___disposer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposer_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_refCnt_5() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___refCnt_5)); }
	inline int32_t get_refCnt_5() const { return ___refCnt_5; }
	inline int32_t* get_address_of_refCnt_5() { return &___refCnt_5; }
	inline void set_refCnt_5(int32_t value)
	{
		___refCnt_5 = value;
	}

	inline static int32_t get_offset_of_gcHandle_6() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___gcHandle_6)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_6() const { return ___gcHandle_6; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_6() { return &___gcHandle_6; }
	inline void set_gcHandle_6(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_6 = value;
	}

	inline static int32_t get_offset_of_ptr_7() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___ptr_7)); }
	inline intptr_t get_ptr_7() const { return ___ptr_7; }
	inline intptr_t* get_address_of_ptr_7() { return &___ptr_7; }
	inline void set_ptr_7(intptr_t value)
	{
		___ptr_7 = value;
	}

	inline static int32_t get_offset_of_pinned_8() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___pinned_8)); }
	inline bool get_pinned_8() const { return ___pinned_8; }
	inline bool* get_address_of_pinned_8() { return &___pinned_8; }
	inline void set_pinned_8(bool value)
	{
		___pinned_8 = value;
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___U3CFlagsU3Ek__BackingField_13)); }
	inline uint8_t get_U3CFlagsU3Ek__BackingField_13() const { return ___U3CFlagsU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CFlagsU3Ek__BackingField_13() { return &___U3CFlagsU3Ek__BackingField_13; }
	inline void set_U3CFlagsU3Ek__BackingField_13(uint8_t value)
	{
		___U3CFlagsU3Ek__BackingField_13 = value;
	}
};

struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields
{
public:
	// System.Int32 Photon.Voice.FrameBuffer::statDisposerCreated
	int32_t ___statDisposerCreated_9;
	// System.Int32 Photon.Voice.FrameBuffer::statDisposerDisposed
	int32_t ___statDisposerDisposed_10;
	// System.Int32 Photon.Voice.FrameBuffer::statPinned
	int32_t ___statPinned_11;
	// System.Int32 Photon.Voice.FrameBuffer::statUnpinned
	int32_t ___statUnpinned_12;

public:
	inline static int32_t get_offset_of_statDisposerCreated_9() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statDisposerCreated_9)); }
	inline int32_t get_statDisposerCreated_9() const { return ___statDisposerCreated_9; }
	inline int32_t* get_address_of_statDisposerCreated_9() { return &___statDisposerCreated_9; }
	inline void set_statDisposerCreated_9(int32_t value)
	{
		___statDisposerCreated_9 = value;
	}

	inline static int32_t get_offset_of_statDisposerDisposed_10() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statDisposerDisposed_10)); }
	inline int32_t get_statDisposerDisposed_10() const { return ___statDisposerDisposed_10; }
	inline int32_t* get_address_of_statDisposerDisposed_10() { return &___statDisposerDisposed_10; }
	inline void set_statDisposerDisposed_10(int32_t value)
	{
		___statDisposerDisposed_10 = value;
	}

	inline static int32_t get_offset_of_statPinned_11() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statPinned_11)); }
	inline int32_t get_statPinned_11() const { return ___statPinned_11; }
	inline int32_t* get_address_of_statPinned_11() { return &___statPinned_11; }
	inline void set_statPinned_11(int32_t value)
	{
		___statPinned_11 = value;
	}

	inline static int32_t get_offset_of_statUnpinned_12() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statUnpinned_12)); }
	inline int32_t get_statUnpinned_12() const { return ___statUnpinned_12; }
	inline int32_t* get_address_of_statUnpinned_12() { return &___statUnpinned_12; }
	inline void set_statUnpinned_12(int32_t value)
	{
		___statUnpinned_12 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	RuntimeObject* ___disposer_3;
	int32_t ___disposed_4;
	int32_t ___refCnt_5;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	intptr_t ___ptr_7;
	int32_t ___pinned_8;
	uint8_t ___U3CFlagsU3Ek__BackingField_13;
};
// Native definition for COM marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	RuntimeObject* ___disposer_3;
	int32_t ___disposed_4;
	int32_t ___refCnt_5;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	intptr_t ___ptr_7;
	int32_t ___pinned_8;
	uint8_t ___U3CFlagsU3Ek__BackingField_13;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 
{
public:
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CChannelsU3Ek__BackingField_2)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_2() const { return ___U3CChannelsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_2() { return &___U3CChannelsU3Ek__BackingField_2; }
	inline void set_U3CChannelsU3Ek__BackingField_2(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFrameDurationUsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_3() const { return ___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_3() { return &___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CBitrateU3Ek__BackingField_4)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_4() const { return ___U3CBitrateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_4() { return &___U3CBitrateU3Ek__BackingField_4; }
	inline void set_U3CBitrateU3Ek__BackingField_4(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CWidthU3Ek__BackingField_5)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CHeightU3Ek__BackingField_6)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFPSU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFPSU3Ek__BackingField_7)); }
	inline int32_t get_U3CFPSU3Ek__BackingField_7() const { return ___U3CFPSU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFPSU3Ek__BackingField_7() { return &___U3CFPSU3Ek__BackingField_7; }
	inline void set_U3CFPSU3Ek__BackingField_7(int32_t value)
	{
		___U3CFPSU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CKeyFrameIntU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CKeyFrameIntU3Ek__BackingField_8)); }
	inline int32_t get_U3CKeyFrameIntU3Ek__BackingField_8() const { return ___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CKeyFrameIntU3Ek__BackingField_8() { return &___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline void set_U3CKeyFrameIntU3Ek__BackingField_8(int32_t value)
	{
		___U3CKeyFrameIntU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CUserDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_9() const { return ___U3CUserDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_9() { return &___U3CUserDataU3Ek__BackingField_9; }
	inline void set_U3CUserDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserDataU3Ek__BackingField_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};

// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>2__current
	RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * ___U3CU3E2__current_1;
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap1
	Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<playerVoices>5__3
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___U3CplayerVoicesU3E5__3_5;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap3
	Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  ___U3CU3E7__wrap3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E2__current_1)); }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E4__this_3)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CplayerVoicesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CplayerVoicesU3E5__3_5)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_U3CplayerVoicesU3E5__3_5() const { return ___U3CplayerVoicesU3E5__3_5; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_U3CplayerVoicesU3E5__3_5() { return &___U3CplayerVoicesU3E5__3_5; }
	inline void set_U3CplayerVoicesU3E5__3_5(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___U3CplayerVoicesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CplayerVoicesU3E5__3_5))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_6() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap3_6)); }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  get_U3CU3E7__wrap3_6() const { return ___U3CU3E7__wrap3_6; }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * get_address_of_U3CU3E7__wrap3_6() { return &___U3CU3E7__wrap3_6; }
	inline void set_U3CU3E7__wrap3_6(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  value)
	{
		___U3CU3E7__wrap3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_6))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9  : public RuntimeObject
{
public:
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_6;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_7;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_8;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info_9;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_10;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_11;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_12;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_13;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_14;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___configFrame_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_16;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject * ___disposeLock_17;
	// System.Int32 Photon.Voice.LocalVoice::lastTransmitTime
	int32_t ___lastTransmitTime_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * ___eventTimestamps_20;
	// Photon.Voice.SpacingProfile Photon.Voice.LocalVoice::sendSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___sendSpacingProfile_21;

public:
	inline static int32_t get_offset_of_U3CInterestGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CInterestGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CInterestGroupU3Ek__BackingField_1() const { return ___U3CInterestGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CInterestGroupU3Ek__BackingField_1() { return &___U3CInterestGroupU3Ek__BackingField_1; }
	inline void set_U3CInterestGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CInterestGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_2() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___transmitEnabled_2)); }
	inline bool get_transmitEnabled_2() const { return ___transmitEnabled_2; }
	inline bool* get_address_of_transmitEnabled_2() { return &___transmitEnabled_2; }
	inline void set_transmitEnabled_2(bool value)
	{
		___transmitEnabled_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_3() const { return ___U3CFramesSentU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_3() { return &___U3CFramesSentU3Ek__BackingField_3; }
	inline void set_U3CFramesSentU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_4() const { return ___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_4() { return &___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CReliableU3Ek__BackingField_5)); }
	inline bool get_U3CReliableU3Ek__BackingField_5() const { return ___U3CReliableU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_5() { return &___U3CReliableU3Ek__BackingField_5; }
	inline void set_U3CReliableU3Ek__BackingField_5(bool value)
	{
		___U3CReliableU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEncryptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CEncryptU3Ek__BackingField_6)); }
	inline bool get_U3CEncryptU3Ek__BackingField_6() const { return ___U3CEncryptU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEncryptU3Ek__BackingField_6() { return &___U3CEncryptU3Ek__BackingField_6; }
	inline void set_U3CEncryptU3Ek__BackingField_6(bool value)
	{
		___U3CEncryptU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CLocalUserServiceableU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CLocalUserServiceableU3Ek__BackingField_7() const { return ___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return &___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline void set_U3CLocalUserServiceableU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CLocalUserServiceableU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalUserServiceableU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_debugEchoMode_8() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___debugEchoMode_8)); }
	inline bool get_debugEchoMode_8() const { return ___debugEchoMode_8; }
	inline bool* get_address_of_debugEchoMode_8() { return &___debugEchoMode_8; }
	inline void set_debugEchoMode_8(bool value)
	{
		___debugEchoMode_8 = value;
	}

	inline static int32_t get_offset_of_info_9() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___info_9)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_info_9() const { return ___info_9; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_info_9() { return &___info_9; }
	inline void set_info_9(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___info_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_9))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_encoder_10() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___encoder_10)); }
	inline RuntimeObject* get_encoder_10() const { return ___encoder_10; }
	inline RuntimeObject** get_address_of_encoder_10() { return &___encoder_10; }
	inline void set_encoder_10(RuntimeObject* value)
	{
		___encoder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_10), (void*)value);
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___id_11)); }
	inline uint8_t get_id_11() const { return ___id_11; }
	inline uint8_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(uint8_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_channelId_12() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___channelId_12)); }
	inline int32_t get_channelId_12() const { return ___channelId_12; }
	inline int32_t* get_address_of_channelId_12() { return &___channelId_12; }
	inline void set_channelId_12(int32_t value)
	{
		___channelId_12 = value;
	}

	inline static int32_t get_offset_of_evNumber_13() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___evNumber_13)); }
	inline uint8_t get_evNumber_13() const { return ___evNumber_13; }
	inline uint8_t* get_address_of_evNumber_13() { return &___evNumber_13; }
	inline void set_evNumber_13(uint8_t value)
	{
		___evNumber_13 = value;
	}

	inline static int32_t get_offset_of_voiceClient_14() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___voiceClient_14)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_14() const { return ___voiceClient_14; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_14() { return &___voiceClient_14; }
	inline void set_voiceClient_14(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_configFrame_15() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___configFrame_15)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_configFrame_15() const { return ___configFrame_15; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_configFrame_15() { return &___configFrame_15; }
	inline void set_configFrame_15(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___configFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configFrame_15))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_disposed_16() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposed_16)); }
	inline bool get_disposed_16() const { return ___disposed_16; }
	inline bool* get_address_of_disposed_16() { return &___disposed_16; }
	inline void set_disposed_16(bool value)
	{
		___disposed_16 = value;
	}

	inline static int32_t get_offset_of_disposeLock_17() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposeLock_17)); }
	inline RuntimeObject * get_disposeLock_17() const { return ___disposeLock_17; }
	inline RuntimeObject ** get_address_of_disposeLock_17() { return &___disposeLock_17; }
	inline void set_disposeLock_17(RuntimeObject * value)
	{
		___disposeLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastTransmitTime_19() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___lastTransmitTime_19)); }
	inline int32_t get_lastTransmitTime_19() const { return ___lastTransmitTime_19; }
	inline int32_t* get_address_of_lastTransmitTime_19() { return &___lastTransmitTime_19; }
	inline void set_lastTransmitTime_19(int32_t value)
	{
		___lastTransmitTime_19 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_20() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___eventTimestamps_20)); }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * get_eventTimestamps_20() const { return ___eventTimestamps_20; }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 ** get_address_of_eventTimestamps_20() { return &___eventTimestamps_20; }
	inline void set_eventTimestamps_20(Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * value)
	{
		___eventTimestamps_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTimestamps_20), (void*)value);
	}

	inline static int32_t get_offset_of_sendSpacingProfile_21() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___sendSpacingProfile_21)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_sendSpacingProfile_21() const { return ___sendSpacingProfile_21; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_sendSpacingProfile_21() { return &___sendSpacingProfile_21; }
	inline void set_sendSpacingProfile_21(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___sendSpacingProfile_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendSpacingProfile_21), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE 
{
public:
	// System.Action Photon.Voice.RemoteVoiceOptions::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	// Photon.Voice.IDecoder Photon.Voice.RemoteVoiceOptions::<Decoder>k__BackingField
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	// Photon.Voice.ILogger Photon.Voice.RemoteVoiceOptions::logger
	RuntimeObject* ___logger_2;
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceOptions::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_3;
	// System.String Photon.Voice.RemoteVoiceOptions::<logPrefix>k__BackingField
	String_t* ___U3ClogPrefixU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDecoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3CDecoderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CDecoderU3Ek__BackingField_1() const { return ___U3CDecoderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CDecoderU3Ek__BackingField_1() { return &___U3CDecoderU3Ek__BackingField_1; }
	inline void set_U3CDecoderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CDecoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDecoderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_2), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_3() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___voiceInfo_3)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_3() const { return ___voiceInfo_3; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_3() { return &___voiceInfo_3; }
	inline void set_voiceInfo_3(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_3))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3ClogPrefixU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3ClogPrefixU3Ek__BackingField_4)); }
	inline String_t* get_U3ClogPrefixU3Ek__BackingField_4() const { return ___U3ClogPrefixU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3ClogPrefixU3Ek__BackingField_4() { return &___U3ClogPrefixU3Ek__BackingField_4; }
	inline void set_U3ClogPrefixU3Ek__BackingField_4(String_t* value)
	{
		___U3ClogPrefixU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClogPrefixU3Ek__BackingField_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	RuntimeObject* ___logger_2;
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_pinvoke ___voiceInfo_3;
	char* ___U3ClogPrefixU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_com
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	RuntimeObject* ___logger_2;
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_com ___voiceInfo_3;
	Il2CppChar* ___U3ClogPrefixU3Ek__BackingField_4;
};

// Photon.Voice.VoiceClient/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass49_0::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass49_0::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass49_0::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___U3CU3E4__this_0)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___encoder_1)); }
	inline RuntimeObject* get_encoder_1() const { return ___encoder_1; }
	inline RuntimeObject** get_address_of_encoder_1() { return &___encoder_1; }
	inline void set_encoder_1(RuntimeObject* value)
	{
		___encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___voiceInfo_2)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_2() const { return ___voiceInfo_2; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_2() { return &___voiceInfo_2; }
	inline void set_voiceInfo_2(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}
};


// Photon.Voice.LocalVoiceFramedBase
struct LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471  : public LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9
{
public:
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CFrameSizeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471, ___U3CFrameSizeU3Ek__BackingField_22)); }
	inline int32_t get_U3CFrameSizeU3Ek__BackingField_22() const { return ___U3CFrameSizeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CFrameSizeU3Ek__BackingField_22() { return &___U3CFrameSizeU3Ek__BackingField_22; }
	inline void set_U3CFrameSizeU3Ek__BackingField_22(int32_t value)
	{
		___U3CFrameSizeU3Ek__BackingField_22 = value;
	}
};


// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// Photon.Voice.RemoteVoiceOptions Photon.Voice.RemoteVoice::options
	RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  ___options_1;
	// System.Int32 Photon.Voice.RemoteVoice::channelId
	int32_t ___channelId_2;
	// System.Int32 Photon.Voice.RemoteVoice::<DelayFrames>k__BackingField
	int32_t ___U3CDelayFramesU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.RemoteVoice::playerId
	int32_t ___playerId_4;
	// System.Byte Photon.Voice.RemoteVoice::voiceId
	uint8_t ___voiceId_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.RemoteVoice::disposed
	bool ___disposed_6;
	// System.Object Photon.Voice.RemoteVoice::disposeLock
	RuntimeObject * ___disposeLock_7;
	// System.String Photon.Voice.RemoteVoice::<LogPrefix>k__BackingField
	String_t* ___U3CLogPrefixU3Ek__BackingField_8;
	// Photon.Voice.SpacingProfile Photon.Voice.RemoteVoice::receiveSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___receiveSpacingProfile_9;
	// System.Byte Photon.Voice.RemoteVoice::lastEvNumber
	uint8_t ___lastEvNumber_10;
	// Photon.Voice.VoiceClient Photon.Voice.RemoteVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_11;
	// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer> Photon.Voice.RemoteVoice::frameQueue
	Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * ___frameQueue_12;
	// System.Threading.AutoResetEvent Photon.Voice.RemoteVoice::frameQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___frameQueueReady_13;
	// System.Int32 Photon.Voice.RemoteVoice::flushingFramePosInQueue
	int32_t ___flushingFramePosInQueue_14;
	// Photon.Voice.FrameBuffer Photon.Voice.RemoteVoice::nullFrame
	FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  ___nullFrame_15;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___options_1)); }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  get_options_1() const { return ___options_1; }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CDecoderU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___logger_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___options_1))->___voiceInfo_3))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3ClogPrefixU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_channelId_2() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___channelId_2)); }
	inline int32_t get_channelId_2() const { return ___channelId_2; }
	inline int32_t* get_address_of_channelId_2() { return &___channelId_2; }
	inline void set_channelId_2(int32_t value)
	{
		___channelId_2 = value;
	}

	inline static int32_t get_offset_of_U3CDelayFramesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CDelayFramesU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayFramesU3Ek__BackingField_3() const { return ___U3CDelayFramesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayFramesU3Ek__BackingField_3() { return &___U3CDelayFramesU3Ek__BackingField_3; }
	inline void set_U3CDelayFramesU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayFramesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___playerId_4)); }
	inline int32_t get_playerId_4() const { return ___playerId_4; }
	inline int32_t* get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(int32_t value)
	{
		___playerId_4 = value;
	}

	inline static int32_t get_offset_of_voiceId_5() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceId_5)); }
	inline uint8_t get_voiceId_5() const { return ___voiceId_5; }
	inline uint8_t* get_address_of_voiceId_5() { return &___voiceId_5; }
	inline void set_voiceId_5(uint8_t value)
	{
		___voiceId_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_disposeLock_7() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposeLock_7)); }
	inline RuntimeObject * get_disposeLock_7() const { return ___disposeLock_7; }
	inline RuntimeObject ** get_address_of_disposeLock_7() { return &___disposeLock_7; }
	inline void set_disposeLock_7(RuntimeObject * value)
	{
		___disposeLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogPrefixU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CLogPrefixU3Ek__BackingField_8)); }
	inline String_t* get_U3CLogPrefixU3Ek__BackingField_8() const { return ___U3CLogPrefixU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CLogPrefixU3Ek__BackingField_8() { return &___U3CLogPrefixU3Ek__BackingField_8; }
	inline void set_U3CLogPrefixU3Ek__BackingField_8(String_t* value)
	{
		___U3CLogPrefixU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogPrefixU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_receiveSpacingProfile_9() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___receiveSpacingProfile_9)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_receiveSpacingProfile_9() const { return ___receiveSpacingProfile_9; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_receiveSpacingProfile_9() { return &___receiveSpacingProfile_9; }
	inline void set_receiveSpacingProfile_9(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___receiveSpacingProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveSpacingProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_lastEvNumber_10() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___lastEvNumber_10)); }
	inline uint8_t get_lastEvNumber_10() const { return ___lastEvNumber_10; }
	inline uint8_t* get_address_of_lastEvNumber_10() { return &___lastEvNumber_10; }
	inline void set_lastEvNumber_10(uint8_t value)
	{
		___lastEvNumber_10 = value;
	}

	inline static int32_t get_offset_of_voiceClient_11() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceClient_11)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_11() const { return ___voiceClient_11; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_11() { return &___voiceClient_11; }
	inline void set_voiceClient_11(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_11), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueue_12() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueue_12)); }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * get_frameQueue_12() const { return ___frameQueue_12; }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 ** get_address_of_frameQueue_12() { return &___frameQueue_12; }
	inline void set_frameQueue_12(Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * value)
	{
		___frameQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueueReady_13() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueueReady_13)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_frameQueueReady_13() const { return ___frameQueueReady_13; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_frameQueueReady_13() { return &___frameQueueReady_13; }
	inline void set_frameQueueReady_13(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___frameQueueReady_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueueReady_13), (void*)value);
	}

	inline static int32_t get_offset_of_flushingFramePosInQueue_14() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___flushingFramePosInQueue_14)); }
	inline int32_t get_flushingFramePosInQueue_14() const { return ___flushingFramePosInQueue_14; }
	inline int32_t* get_address_of_flushingFramePosInQueue_14() { return &___flushingFramePosInQueue_14; }
	inline void set_flushingFramePosInQueue_14(int32_t value)
	{
		___flushingFramePosInQueue_14 = value;
	}

	inline static int32_t get_offset_of_nullFrame_15() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___nullFrame_15)); }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  get_nullFrame_15() const { return ___nullFrame_15; }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * get_address_of_nullFrame_15() { return &___nullFrame_15; }
	inline void set_nullFrame_15(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  value)
	{
		___nullFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_15))->___array_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_15))->___disposer_3), (void*)NULL);
		#endif
	}
};


// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framer_23)); }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processors_25)); }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * get_processors_25() const { return ___processors_25; }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueue_27)); }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framer_23)); }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processors_25)); }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * get_processors_25() const { return ___processors_25; }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueue_27)); }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8  : public LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetector_34)); }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___levelMeter_36)); }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238  : public LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetector_34)); }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___levelMeter_36)); }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
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


// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6  Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);

// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int16 System.Math::Abs(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9 (int16_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.LocalVoice::get_DebugEchoMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318 (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient0, RuntimeObject* ___encoder1, uint8_t ___id2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, int32_t ___channelId4, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142 (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*) (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Single[],System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___src0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1 (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared)(__this, ___buf0, method);
}
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82 (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared)(__this, ___buf0, method);
}
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Int16[],System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___src0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::GetEnumerator()
inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  (*) (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Current()
inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Value()
inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>::GetEnumerator()
inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  (*) (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::get_Current()
inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Value()
inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline)(__this, method);
}
// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.RemoteVoiceInfo::.ctor(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6 (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::MoveNext()
inline bool Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::MoveNext()
inline bool Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::Dispose()
inline void Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5 (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::Dispose()
inline void Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1 (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.SpacingProfile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m98371BFC9ACB2782E02C5203B38EE046EF23257F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * L_0 = (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 *)il2cpp_codegen_object_new(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int16 Photon.Voice.SpacingProfile/<>c::<get_Max>b__13_0(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t U3CU3Ec_U3Cget_MaxU3Eb__13_0_m1A6AFC5E78F5FE26A46012DA1D338920914468D9 (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, int16_t ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Max { get { return buf.Select(v => Math.Abs(v)).Max(); } }
		int16_t L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Photon.Voice.VoiceClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m604EA90DC53CF07AB36625569C2248CC90BA3D7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * L_0 = (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 *)il2cpp_codegen_object_new(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<>c::<sendVoicesInfoAndConfigFrame>b__61_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__61_0_m914E6B373324E5CFFCC8530A0B0A781B49AD9779 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___x0, const RuntimeMethod* method)
{
	{
		// var debugEchoVoices = localVoices.Values.Where(x => x.DebugEchoMode);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = ___x0;
		bool L_1;
		L_1 = LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m3FCE14228E31EF498BE59BFBB424E81B0F4029EB (U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.LocalVoice Photon.Voice.VoiceClient/<>c__DisplayClass49_0::<CreateLocalVoice>b__0(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * U3CU3Ec__DisplayClass49_0_U3CCreateLocalVoiceU3Eb__0_m605074336D88D9E09608DA541B825332D7E99D7D (U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD * __this, uint8_t ___vId0, int32_t ___chId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (LocalVoice)createLocalVoice(channelId, (vId, chId) => new LocalVoice(this, encoder, vId, voiceInfo, chId));
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_encoder_1();
		uint8_t L_2 = ___vId0;
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_3 = __this->get_voiceInfo_2();
		int32_t L_4 = ___chId1;
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_5 = (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 *)il2cpp_codegen_object_new(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m0A1C1F3B0EAB2D60EBE9C2C43F7BBB0C5E0874A1 (U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_0::<CreateLocalVoiceAudioFromSource>b__0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_m2CA55BBFC17758C3CC86DE36F45DBE8F2599DE00 (U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	{
		// var shortBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___buf0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, shortBuf, buf.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___buf0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___buf0;
		AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(shortBuf);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_7 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_0;
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_1__ctor_mB368AC7076E235A1C3ABB3340F28BDEB0D5EDBCD (U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_1::<CreateLocalVoiceAudioFromSource>b__1(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_m4233C2A64B414FA651ED6151D78E78873F70EAFA (U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<float>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_2__ctor_m203AE52464CF920E0BCEC094D093E8CEE6723B1D (U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_2::<CreateLocalVoiceAudioFromSource>b__2(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_mAA79676F20BB0169086284CB07585A17EA0C82AB (U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var floatBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ___buf0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, floatBuf, buf.Length);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___buf0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___buf0;
		AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(floatBuf);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_7 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_3__ctor_m79A1F59D648F42246AFEC22407455CC14C8AD31F (U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_3::<CreateLocalVoiceAudioFromSource>b__3(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m600D8E95013B8040EAD14AE7B2802950A1E6B9C8 (U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<short>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_mB89B99E073789C2DB39ACAC3B6E81EF766FF342E (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * V_2 = NULL;
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c1;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_0121;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var playerVoices in this.remoteVoices)
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_4 = V_2;
			Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * L_5 = L_4->get_remoteVoices_17();
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  L_6;
			L_6 = Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00f4;
		}

IL_0044:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  L_8;
			L_8 = Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_7, /*hidden argument*/Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
			__this->set_U3CplayerVoicesU3E5__3_5(L_8);
			// foreach (var voice in playerVoices.Value)
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_9 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * L_10;
			L_10 = KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_9, /*hidden argument*/KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  L_11;
			L_11 = Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_6(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00c9;
		}

IL_0075:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_12 = __this->get_address_of_U3CU3E7__wrap3_6();
			KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  L_13;
			L_13 = Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_12, /*hidden argument*/Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
			V_3 = L_13;
			// yield return new RemoteVoiceInfo(voice.Value.channelId, playerVoices.Key, voice.Key, voice.Value.Info);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_14;
			L_14 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			int32_t L_15 = L_14->get_channelId_2();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_16 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			int32_t L_17;
			L_17 = KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_16, /*hidden argument*/KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
			uint8_t L_18;
			L_18 = KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_19;
			L_19 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_20;
			L_20 = RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline(L_19, /*hidden argument*/NULL);
			RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_21 = (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A *)il2cpp_codegen_object_new(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
			RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6(L_21, L_15, L_17, L_18, L_20, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_21);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0121;
		}

IL_00c1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c9:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_22 = __this->get_address_of_U3CU3E7__wrap3_6();
			bool L_23;
			L_23 = Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_22, /*hidden argument*/Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0075;
			}
		}

IL_00d6:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_24 = __this->get_address_of_U3CU3E7__wrap3_6();
			il2cpp_codegen_initobj(L_24, sizeof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E ));
			// }
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_25 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			il2cpp_codegen_initobj(L_25, sizeof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 ));
		}

IL_00f4:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_26 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_27;
			L_27 = Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_26, /*hidden argument*/Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0044;
			}
		}

IL_0104:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_28 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_28, sizeof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B ));
			// }
			V_0 = (bool)0;
			goto IL_0121;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_011a;
	}

FAULT_011a:
	{ // begin fault (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(282)
	} // end fault
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0121:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_0, /*hidden argument*/Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_0 = __this->get_address_of_U3CU3E7__wrap3_6();
		Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_0, /*hidden argument*/Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		return;
	}
}
// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumeratorU3CPhoton_Voice_RemoteVoiceInfoU3E_get_Current_mEE4ABEBFBC7FB787BB1212459E149E1FC371EB0A (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var)));
	}
}
// System.Object Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_get_Current_m08F0709F7FFD4D90DBF1B145754BBB6A323D2712 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_3 = (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B *)il2cpp_codegen_object_new(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_4 = V_0;
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_5 = __this->get_U3CU3E4__this_3();
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerable_GetEnumerator_mCF8CC2A6FBA4352A000535A9D6683A1BA96667D0 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.VoiceClient/CreateOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOptions__cctor_mB7328F7D302B022C4DC5B61616B62BA98F641659 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static public CreateOptions Default = new CreateOptions()
		// {
		//     VoiceIDMin = 1, // 0 means invalid id
		//     VoiceIDMax = 15 // preserve ids for other clients creating voices for the same player (server plugin)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 ));
		(&V_0)->set_VoiceIDMin_0((uint8_t)1);
		(&V_0)->set_VoiceIDMax_1((uint8_t)((int32_t)15));
		CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  L_0 = V_0;
		((CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields*)il2cpp_codegen_static_fields_for(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate__ctor_mBBDE3F00B740CD64A1798232FDED7705CAC10747 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_Invoke_m4CB7FAF007FE7CDDD8BB3EAFEB061780C0711DB8 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
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
						GenericInterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						GenericVirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						VirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoteVoiceInfoDelegate_BeginInvoke_mCF94EB1A8A0306D6FF7679198428E4977D14D5E1 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___channelId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___playerId1);
	__d_args[2] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___voiceId2);
	__d_args[3] = Box(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var, &___voiceInfo3);
	__d_args[4] = Box(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var, &*___options4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::EndInvoke(Photon.Voice.RemoteVoiceOptions&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_EndInvoke_mD3A322865BB2CDB4C3AC7AAF234EE2F4C78E1DDB (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___options0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// get { return debugEchoMode; }
		bool L_0 = __this->get_debugEchoMode_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method)
{
	{
		// internal VoiceInfo Info { get; private set; }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_U3CInfoU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_0 = (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_0 = (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_0 = (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )__this->get_current_3();
		return (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return (uint8_t)L_0;
	}
}
