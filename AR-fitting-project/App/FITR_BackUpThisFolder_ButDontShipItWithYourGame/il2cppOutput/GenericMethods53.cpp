#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<Unity.Properties.ConversionRegistry/ConverterKey,System.Delegate>
struct Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PlaneEvent>
struct List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PointCloudEvent>
struct List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PoseEvent>
struct List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Serialization.Json.PackedBinaryStreamData
struct PackedBinaryStreamData_t23F4FE48FE03F7214AAD21A50BDCE2C8FBD938CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Properties.ConversionRegistry/ConverterKeyComparer
struct ConverterKeyComparer_t2DDDB49E88C1FAA1A2DE0E3AD0302DC2FE8F2639;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054 
{
	// System.Collections.Generic.Dictionary`2<Unity.Properties.ConversionRegistry/ConverterKey,System.Delegate> Unity.Properties.ConversionRegistry::m_Converters
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};
// Native definition for P/Invoke marshalling of Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_marshaled_pinvoke
{
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};
// Native definition for COM marshalling of Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_marshaled_com
{
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// Unity.Serialization.Json.Handle
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	// System.Int32 Unity.Serialization.Json.Handle::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Serialization.Json.Handle::Version
	int32_t ___Version_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Unity.Serialization.Json.PackedBinaryStream
struct PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 
{
	// Unity.Collections.Allocator Unity.Serialization.Json.PackedBinaryStream::m_Label
	int32_t ___m_Label_4;
	// Unity.Serialization.Json.PackedBinaryStreamData* Unity.Serialization.Json.PackedBinaryStream::m_Data
	PackedBinaryStreamData_t23F4FE48FE03F7214AAD21A50BDCE2C8FBD938CB* ___m_Data_5;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PoseEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording::events
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_marshaled_pinvoke
{
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_marshaled_com
{
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PlaneEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording::events
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_marshaled_pinvoke
{
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_marshaled_com
{
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PointCloudEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording::events
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_marshaled_pinvoke
{
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_marshaled_com
{
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Serialization.Json.SerializedArrayView
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedArrayView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedArrayView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Serialization.Json.SerializedObjectView
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedObjectView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedObjectView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Serialization.Json.SerializedValueView
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedValueView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedValueView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Properties.TypeConversion
struct TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17  : public RuntimeObject
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>
struct TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>
struct TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>
struct TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>
struct TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>
struct TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>
struct TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>
struct TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>
struct TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_StaticFields
{
	// Unity.Properties.ConversionRegistry/ConverterKeyComparer Unity.Properties.ConversionRegistry::Comparer
	ConverterKeyComparer_t2DDDB49E88C1FAA1A2DE0E3AD0302DC2FE8F2639* ___Comparer_0;
};

// Unity.Properties.ConversionRegistry

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// Unity.Serialization.Json.Handle

// Unity.Serialization.Json.Handle

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Unity.Serialization.Json.PackedBinaryStream

// Unity.Serialization.Json.PackedBinaryStream

// System.SByte

// System.SByte

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector3Int

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedObjectView

// Unity.Serialization.Json.SerializedObjectView

// Unity.Serialization.Json.SerializedValueView

// Unity.Serialization.Json.SerializedValueView

// Unity.Properties.TypeConversion
struct TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields
{
	// Unity.Properties.ConversionRegistry Unity.Properties.TypeConversion::s_GlobalConverters
	ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054 ___s_GlobalConverters_0;
};

// Unity.Properties.TypeConversion

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>

// System.ArgumentException

// System.ArgumentException
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.ConversionRegistry::TryGetConverter(System.Type,System.Type,System.Delegate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929 (ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.TypeConversion::IsNumericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m3D6410ACBD8D11BC80FC8D9CCD0F4E791BFE9A70_gshared (uint64_t* ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_9;
		L_9 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 (*) (TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_6)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_21;
		L_21 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_22 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_19)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_49 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_49)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		uint64_t L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_59 = ___1_destination;
		uint64_t* L_60 = ___0_source;
		uint64_t L_61 = (*(uint64_t*)L_60);
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_59 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_59)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		uint64_t* L_74 = ___0_source;
		uint64_t L_75 = (*(uint64_t*)L_74);
		uint64_t L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_80 = ___1_destination;
		uint64_t* L_81 = ___0_source;
		uint64_t L_82 = (*(uint64_t*)L_81);
		uint64_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_80 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_80)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_87 = ___0_source;
		uint64_t L_88 = (*(uint64_t*)L_87);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (uint64_t, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		uint64_t* L_103 = ___0_source;
		uint64_t L_104 = (*(uint64_t*)L_103);
		uint64_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_100 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_100)->___events_0), (void*)NULL);
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_115;
		L_115 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_116 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_115);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_113)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		uint64_t* L_117 = ___0_source;
		uint64_t L_118 = (*(uint64_t*)L_117);
		V_20 = L_118;
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_122 = V_20;
		uint64_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_126 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_127 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_126)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_134 = ___1_destination;
		uint64_t* L_135 = ___0_source;
		uint64_t L_136 = (*(uint64_t*)L_135);
		uint64_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_134 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_134)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_mBB5FDF344E86A083E560EA564390DD910B812169_gshared (uint64_t* ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_9;
		L_9 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 (*) (TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_6)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_21;
		L_21 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_22 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_19)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_49 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_49)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		uint64_t L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_59 = ___1_destination;
		uint64_t* L_60 = ___0_source;
		uint64_t L_61 = (*(uint64_t*)L_60);
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_59 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_59)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		uint64_t* L_74 = ___0_source;
		uint64_t L_75 = (*(uint64_t*)L_74);
		uint64_t L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_80 = ___1_destination;
		uint64_t* L_81 = ___0_source;
		uint64_t L_82 = (*(uint64_t*)L_81);
		uint64_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_80 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_80)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_87 = ___0_source;
		uint64_t L_88 = (*(uint64_t*)L_87);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (uint64_t, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		uint64_t* L_103 = ___0_source;
		uint64_t L_104 = (*(uint64_t*)L_103);
		uint64_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_100 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_100)->___events_0), (void*)NULL);
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_115;
		L_115 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_116 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_115);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_113)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		uint64_t* L_117 = ___0_source;
		uint64_t L_118 = (*(uint64_t*)L_117);
		V_20 = L_118;
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_122 = V_20;
		uint64_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_126 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_127 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_126)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_134 = ___1_destination;
		uint64_t* L_135 = ___0_source;
		uint64_t L_136 = (*(uint64_t*)L_135);
		uint64_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_134 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_134)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m55AEBBC1C83922D11D6131BE5E330DD247B8E7D8_gshared (uint64_t* ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_9;
		L_9 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 (*) (TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_6)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_21;
		L_21 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_22 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_19)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_49 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_49)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		uint64_t L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_59 = ___1_destination;
		uint64_t* L_60 = ___0_source;
		uint64_t L_61 = (*(uint64_t*)L_60);
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_59 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_59)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		uint64_t* L_74 = ___0_source;
		uint64_t L_75 = (*(uint64_t*)L_74);
		uint64_t L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_80 = ___1_destination;
		uint64_t* L_81 = ___0_source;
		uint64_t L_82 = (*(uint64_t*)L_81);
		uint64_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_80 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_80)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_87 = ___0_source;
		uint64_t L_88 = (*(uint64_t*)L_87);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (uint64_t, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		uint64_t* L_103 = ___0_source;
		uint64_t L_104 = (*(uint64_t*)L_103);
		uint64_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_100 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_100)->___events_0), (void*)NULL);
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_115;
		L_115 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_116 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_115);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_113)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		uint64_t* L_117 = ___0_source;
		uint64_t L_118 = (*(uint64_t*)L_117);
		V_20 = L_118;
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_122 = V_20;
		uint64_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_126 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_127 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_126)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_134 = ___1_destination;
		uint64_t* L_135 = ___0_source;
		uint64_t L_136 = (*(uint64_t*)L_135);
		uint64_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_134 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_134)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.Vector3,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_m25A1F4F6D1758B85090522002232ABA9A4374A17_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_9);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_19 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_22 = (*(RuntimeObject**)L_21);
		*(RuntimeObject**)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)L_22);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(RuntimeObject**)L_49 = ((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_59 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_80 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_100 = ((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10))));
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_113 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_116 = (*(RuntimeObject**)L_115);
		*(RuntimeObject**)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_116);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_117 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_117);
		V_20 = L_118;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		RuntimeObject** L_126 = ___1_destination;
		RuntimeObject* L_127 = V_1;
		*(RuntimeObject**)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)L_127);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_134 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_135 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(RuntimeObject**)L_134 = ((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_134, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		RuntimeObject** L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.Vector3Int,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_TisRuntimeObject_m80B2579359FEBB5DCC04C3F73014664FBE39FC88_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_9);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_19 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_22 = (*(RuntimeObject**)L_21);
		*(RuntimeObject**)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)L_22);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_43 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_44 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_43);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(RuntimeObject**)L_49 = ((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_53 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_54 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_53);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_59 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_60 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_61 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_60);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_74 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_75 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_74);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_80 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_81 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_82 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_81);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_87 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_88 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_103 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_104 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_103);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_100 = ((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10))));
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_113 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_116 = (*(RuntimeObject**)L_115);
		*(RuntimeObject**)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_116);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_117 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_118 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_117);
		V_20 = L_118;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_119 = V_20;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_122 = V_20;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		RuntimeObject** L_126 = ___1_destination;
		RuntimeObject* L_127 = V_1;
		*(RuntimeObject**)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)L_127);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_134 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_135 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_136 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_135);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(RuntimeObject**)L_134 = ((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_134, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		RuntimeObject** L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_TisRuntimeObject_m3EF73D2AA5FB9C2405EE9D11EC9ED885DE084E01_gshared (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_9);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_19 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_22 = (*(RuntimeObject**)L_21);
		*(RuntimeObject**)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)L_22);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_43 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_44 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_43);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(RuntimeObject**)L_49 = ((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_53 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_54 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_53);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_59 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_60 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_61 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_60);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_74 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_75 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_74);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_80 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_81 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_82 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_81);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_87 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_88 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_103 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_104 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_103);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_100 = ((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10))));
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_113 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_116 = (*(RuntimeObject**)L_115);
		*(RuntimeObject**)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_116);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_117 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_118 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_117);
		V_20 = L_118;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_119 = V_20;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_122 = V_20;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		RuntimeObject** L_126 = ___1_destination;
		RuntimeObject* L_127 = V_1;
		*(RuntimeObject**)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)L_127);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_134 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_135 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_136 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_135);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(RuntimeObject**)L_134 = ((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_134, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		RuntimeObject** L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_TisRuntimeObject_mB99D3DDE1E3827794D3DEF1FA56F612F3A5D3E60_gshared (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_9);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_19 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_22 = (*(RuntimeObject**)L_21);
		*(RuntimeObject**)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)L_22);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_43 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_44 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_43);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(RuntimeObject**)L_49 = ((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_53 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_54 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_53);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_59 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_60 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_61 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_60);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_74 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_75 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_74);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_80 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_81 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_82 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_81);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_87 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_88 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_103 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_104 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_103);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_100 = ((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10))));
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_113 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_116 = (*(RuntimeObject**)L_115);
		*(RuntimeObject**)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_116);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_117 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_118 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_117);
		V_20 = L_118;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_119 = V_20;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_122 = V_20;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		RuntimeObject** L_126 = ___1_destination;
		RuntimeObject* L_127 = V_1;
		*(RuntimeObject**)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)L_127);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_134 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_135 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_136 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_135);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(RuntimeObject**)L_134 = ((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_134, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		RuntimeObject** L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_TisRuntimeObject_m7DEA726CCD2DD8E637C05C91EB02169070B48675_gshared (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_9);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_19 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_22 = (*(RuntimeObject**)L_21);
		*(RuntimeObject**)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)L_22);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		// if (underlyingType.IsEnum)
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_43 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_44 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_43);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(RuntimeObject**)L_49 = ((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_53 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_54 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_53);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_55);
		V_11 = (bool)((((RuntimeObject*)(RuntimeObject*)L_56) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0156;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_59 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_60 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_61 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_60);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_66;
		L_66 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		Type_t* L_71;
		L_71 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_71, NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_01e9;
		}
	}
	{
		// if (null == source)
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_74 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_75 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_74);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_76);
		V_13 = (bool)((((RuntimeObject*)(RuntimeObject*)L_77) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_01cc;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_80 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_81 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_82 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_81);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_85;
		L_85 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		V_14 = L_85;
		bool L_86 = V_14;
		if (!L_86)
		{
			goto IL_0210;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_87 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_88 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_020f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_92;
		L_92 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_16 = L_92;
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_02b3;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		V_17 = L_98;
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_103 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_104 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_103);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_100 = ((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_107, il2cpp_rgctx_data(method->rgctx_data, 10))));
		goto IL_027d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0336;
	}// end catch (depth: 1)

IL_027d:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_110, NULL);
		V_18 = L_111;
		bool L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b2;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_113 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_116 = (*(RuntimeObject**)L_115);
		*(RuntimeObject**)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_116);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		// if (source is TDestination assignable)
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_117 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_118 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_117);
		V_20 = L_118;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_119 = V_20;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_122 = V_20;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02f1;
		}
	}
	{
		// destination = assignable;
		RuntimeObject** L_126 = ___1_destination;
		RuntimeObject* L_127 = V_1;
		*(RuntimeObject**)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)L_127);
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_129, L_131);
		V_21 = L_132;
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_032b;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_134 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_135 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_136 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_135);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(RuntimeObject**)L_134 = ((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_134, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_138, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		RuntimeObject** L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		// }
		bool L_140 = V_3;
		return L_140;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m75255D7A743703F5F7CBC03255E3FE913BF7BB7B_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_16 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_27 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_28 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(RuntimeObject**)L_27 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		RuntimeObject** L_35 = ___1_destination;
		RuntimeObject* L_36 = V_1;
		*(RuntimeObject**)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)L_36);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		RuntimeObject** L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m818155C4DDCDB6851E286ACA47312F9038495686_gshared (bool ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_35 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_36 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m404A34DC02697B1482EC6808F1C3BAA856FFE504_gshared (bool ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		bool* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(bool));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(bool*)L_27 = ((*(bool*)((bool*)(bool*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		bool* L_35 = ___1_destination;
		bool L_36 = V_1;
		*(bool*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		bool* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A144DD048A41C605364A346CD8013912C8A167F_gshared (bool ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint8_t*)L_27 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint8_t* L_35 = ___1_destination;
		uint8_t L_36 = V_1;
		*(uint8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mFF7FD831902185D7780FEB9B68743118D3C6940B_gshared (bool ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Il2CppChar));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Il2CppChar*)L_27 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Il2CppChar* L_35 = ___1_destination;
		Il2CppChar L_36 = V_1;
		*(Il2CppChar*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Il2CppChar* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5F1EDA90779EBE7E70EDA128ACFD873DC53E2E30_gshared (bool ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_27 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mE77798E41001B4290F0E7E980CFBD37C36071C45_gshared (bool ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_27 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m76F2DD68F0ED30A0D24AA4EEF9E5D70595CAB8CD_gshared (bool ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		double* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(double));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(double*)L_27 = ((*(double*)((double*)(double*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		double* L_35 = ___1_destination;
		double L_36 = V_1;
		*(double*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		double* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisGuid_t_m58F02AFB1258A10669AF80D50D8059D105ACAD45_gshared (bool ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Guid_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Guid_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Guid_t*)L_27 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Guid_t* L_35 = ___1_destination;
		Guid_t L_36 = V_1;
		*(Guid_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Guid_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mBB94CADFAFDD18C8FE1A482D9E79B76E549D1441_gshared (bool ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int16_t*)L_27 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int16_t* L_35 = ___1_destination;
		int16_t L_36 = V_1;
		*(int16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8EF9E3D8A34F648F280C6394F958FEB765A92CE3_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m75FB557A652DCB3AAE17102422E418C8891C11A5_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44175C9190682536003B43EC1B4768461DF1701B_gshared (bool ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int64_t*)L_27 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int64_t* L_35 = ___1_destination;
		int64_t L_36 = V_1;
		*(int64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_m6F9CDB63247C732B32ACA5064E223F0507DEB7DE_gshared (bool ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(RuntimeObject**)L_27 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		RuntimeObject** L_35 = ___1_destination;
		RuntimeObject* L_36 = V_1;
		*(RuntimeObject**)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)L_36);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		RuntimeObject** L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DE7DADA78EF426A166A521D0EAA6E355A11B317_gshared (bool ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int8_t*)L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int8_t* L_35 = ___1_destination;
		int8_t L_36 = V_1;
		*(int8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mE17D9146DFED3C6D881E903723CC7BCCC5998EF4_gshared (bool ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_27 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_35 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_36 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m002360E8EAC7DD63D51FBFA0D04EA93419613BFF_gshared (bool ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_27 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_35 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_36 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedObjectView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mA57A9F2B20273680383AD0111C4A06E63D23D7FF_gshared (bool ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_27 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_35 = ___1_destination;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_36 = V_1;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m2B588113CE68260E143C8B321A51DDCAA03D9A54_gshared (bool ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_27 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_35 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_36 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m13752CB4022D52E797CF996D1B55AABED813AAAC_gshared (bool ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		float* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(float));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(float*)L_27 = ((*(float*)((float*)(float*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		float* L_35 = ___1_destination;
		float L_36 = V_1;
		*(float*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		float* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m896849BEC7134C426D05DD716C441D07E28491CF_gshared (bool ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_27 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_35 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_36 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8042469D358DDDBBED4CC924DC254D5980BE31B1_gshared (bool ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint16_t*)L_27 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint16_t* L_35 = ___1_destination;
		uint16_t L_36 = V_1;
		*(uint16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m061BD873CDF280DE259BEDA134C357B458CBDCFC_gshared (bool ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint32_t*)L_27 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint32_t* L_35 = ___1_destination;
		uint32_t L_36 = V_1;
		*(uint32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m9E5F751BDC629FFED56DF9B0E3EC34FC66686C32_gshared (bool ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint64_t*)L_27 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint64_t* L_35 = ___1_destination;
		uint64_t L_36 = V_1;
		*(uint64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m59C9E1B80DBD6B5DFBCF512C02C0D669F7CF5437_gshared (bool ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mFF0E61DF69DA3A49F27203D5DC2F94019E69567E_gshared (bool ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_27 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_35 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_36 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mE03C7BA0EB8D3DBA0FF285B8F0147D79C6D42703_gshared (bool ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_27 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_35 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_36 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m23F1F10B866AF39ACD3AF234A51A8F314590A292_gshared (bool ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_27 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_35 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_36 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_mE11699C9F32B3CF5C03B209FD47D04518D70AFAF_gshared (bool ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		bool L_16 = ___0_source;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_27 = ___1_destination;
		bool L_28 = ___0_source;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_27 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_35 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_36 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m6AB2D1D24D4BE0F41E1A79330069AA4CDCAF628D_gshared (uint8_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_35 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_36 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8A088EC6116EF784E1FBA76461A0C28FA6E2E6C4_gshared (uint8_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		bool* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(bool));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(bool*)L_27 = ((*(bool*)((bool*)(bool*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		bool* L_35 = ___1_destination;
		bool L_36 = V_1;
		*(bool*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		bool* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD5F3623BA07020116EC9EFCFEFCFA2E1FEB4F9DD_gshared (uint8_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint8_t*)L_27 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint8_t* L_35 = ___1_destination;
		uint8_t L_36 = V_1;
		*(uint8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC3FB503E685FCDDC6454860061490758096C88DF_gshared (uint8_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Il2CppChar));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Il2CppChar*)L_27 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Il2CppChar* L_35 = ___1_destination;
		Il2CppChar L_36 = V_1;
		*(Il2CppChar*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Il2CppChar* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74B99D0B9164971BB5D4F8E5865968377DCAC7A1_gshared (uint8_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_27 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m3C45CF7DB8746D5DF7A43F171974E6D7836A0CC0_gshared (uint8_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_27 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m22FAFC97FC246207B9BB33D91361D1A7336740E2_gshared (uint8_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		double* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(double));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(double*)L_27 = ((*(double*)((double*)(double*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		double* L_35 = ___1_destination;
		double L_36 = V_1;
		*(double*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		double* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGuid_t_mF195A8D2006341251080B484B873F77FD03E234A_gshared (uint8_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Guid_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Guid_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Guid_t*)L_27 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Guid_t* L_35 = ___1_destination;
		Guid_t L_36 = V_1;
		*(Guid_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Guid_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE25F0BEF153AA7AB384FCDBD37764FE55F1C1BEB_gshared (uint8_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int16_t*)L_27 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int16_t* L_35 = ___1_destination;
		int16_t L_36 = V_1;
		*(int16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB161722E755193565ECC29591E08177844AE81FB_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m903D9E76FCE7E763B8E1CD8314195D98E09E706F_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m1582D2234A8C8A02688F2352D44B536331F2BBE0_gshared (uint8_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int64_t*)L_27 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int64_t* L_35 = ___1_destination;
		int64_t L_36 = V_1;
		*(int64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m08EFB2517D3B877A2E93072C5144A4579133A261_gshared (uint8_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(RuntimeObject**)L_27 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		RuntimeObject** L_35 = ___1_destination;
		RuntimeObject* L_36 = V_1;
		*(RuntimeObject**)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)L_36);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		RuntimeObject** L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mF2464EB7E77FAC5BE41B5BDCDBB679D62621AF17_gshared (uint8_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int8_t*)L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int8_t* L_35 = ___1_destination;
		int8_t L_36 = V_1;
		*(int8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mE9BFEC1331A3FA4B23E1B6D4C4DEA127EDDB53AB_gshared (uint8_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_27 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_35 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_36 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m72A9786AB0F28CD189E3DD6EA768EBFB1B66E2C7_gshared (uint8_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_27 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_35 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_36 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m59E3FD0833F0B1A24A29C036E5F2A9464FC6D3B4_gshared (uint8_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_27 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_35 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_36 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB1D05A688C354553A6F6CFCABBCC42EAEBB54C4E_gshared (uint8_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		float* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(float));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(float*)L_27 = ((*(float*)((float*)(float*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		float* L_35 = ___1_destination;
		float L_36 = V_1;
		*(float*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		float* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m72BFD2DFD029BB0177086053A295573A067ABBE3_gshared (uint8_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_27 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_35 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_36 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2257AA83B72CC37357D0268182F7D63118935098_gshared (uint8_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint16_t*)L_27 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint16_t* L_35 = ___1_destination;
		uint16_t L_36 = V_1;
		*(uint16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1077081ADB99A0A21768CFFEA86A3B00417CC3CB_gshared (uint8_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint32_t*)L_27 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint32_t* L_35 = ___1_destination;
		uint32_t L_36 = V_1;
		*(uint32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m39327BC18446D5F028C9CF5B2F1BBB0767F5A088_gshared (uint8_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint64_t*)L_27 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint64_t* L_35 = ___1_destination;
		uint64_t L_36 = V_1;
		*(uint64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE201D9FE0BCC9F30F621A07A0789078584E718E9_gshared (uint8_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA04BFE7336069BD22DF1E3809A14DEF17694E84A_gshared (uint8_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_27 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_35 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_36 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m5EB0A080C71E9017A192D82F3148D8808DC1784B_gshared (uint8_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_27 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_35 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_36 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m0EA9E58CC104DB548A7B0F8CF2E89156E8D8A966_gshared (uint8_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_27 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_35 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_36 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m78E1744EEAA46C4EE9562A3DCD49F63548D4ED27_gshared (uint8_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		uint8_t L_16 = ___0_source;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_27 = ___1_destination;
		uint8_t L_28 = ___0_source;
		uint8_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_27 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_27)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_35 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_36 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_35)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC1F07F09DE21732B581B7A9D42A2C48F309C649F_gshared (Il2CppChar ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_27)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_35 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_36 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_35)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m324FD22CE249CE4A4FA3749DB75A73DC5F39680D_gshared (Il2CppChar ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		bool* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(bool));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(bool*)L_27 = ((*(bool*)((bool*)(bool*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		bool* L_35 = ___1_destination;
		bool L_36 = V_1;
		*(bool*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		bool* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5E53C35CE04E8427B14C7121EF205D08886EE9B3_gshared (Il2CppChar ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint8_t*)L_27 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint8_t* L_35 = ___1_destination;
		uint8_t L_36 = V_1;
		*(uint8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3333BF0DBB888B019A470FB5D51A0684F31FD848_gshared (Il2CppChar ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Il2CppChar));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Il2CppChar*)L_27 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Il2CppChar* L_35 = ___1_destination;
		Il2CppChar L_36 = V_1;
		*(Il2CppChar*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Il2CppChar* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8219000C2C2116FE850ABFE5AF2B09CFAF7C076B_gshared (Il2CppChar ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_27 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m91003FB3601FBA7476C641A31CB737E4E6F2593B_gshared (Il2CppChar ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_27 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB17D18F6F4A736C48FC472ACE41B27A65BE31C8_gshared (Il2CppChar ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		double* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(double));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(double*)L_27 = ((*(double*)((double*)(double*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		double* L_35 = ___1_destination;
		double L_36 = V_1;
		*(double*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		double* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisGuid_t_m78A73097BEF603629199E0BB3FBB42DD2C68393F_gshared (Il2CppChar ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Guid_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Guid_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Guid_t*)L_27 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Guid_t* L_35 = ___1_destination;
		Guid_t L_36 = V_1;
		*(Guid_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Guid_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6E5C2E1D9DABA5667E423240795271CDD2827521_gshared (Il2CppChar ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int16_t*)L_27 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int16_t* L_35 = ___1_destination;
		int16_t L_36 = V_1;
		*(int16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9F6B1A89EE8FA8D350A116C065AB6705636D5A23_gshared (Il2CppChar ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5921B11A071939C2956763266A6562816F6CD7BE_gshared (Il2CppChar ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int32_t*)L_27 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_35 = ___1_destination;
		int32_t L_36 = V_1;
		*(int32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m68DFF6DBCB0F940FF9437EDE92E8E62210E427DF_gshared (Il2CppChar ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int64_t*)L_27 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int64_t* L_35 = ___1_destination;
		int64_t L_36 = V_1;
		*(int64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_mA54AD7F2C077FC072EC7BDD4F3E4124D8F90F5A4_gshared (Il2CppChar ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(RuntimeObject**)L_27 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		RuntimeObject** L_35 = ___1_destination;
		RuntimeObject* L_36 = V_1;
		*(RuntimeObject**)L_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)L_36);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		RuntimeObject** L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m6DAE18EFE69F797F1B855B3F835D46C074EE7FFA_gshared (Il2CppChar ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int8_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(int8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(int8_t*)L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int8_t* L_35 = ___1_destination;
		int8_t L_36 = V_1;
		*(int8_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int8_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3DA2C033309E5337E5685060866C43519F965D83_gshared (Il2CppChar ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_27 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_35 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_36 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m927B43D9C8A9C105DF34CD5EF6CF504F1E2AB4DF_gshared (Il2CppChar ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_27 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_35 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_36 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m87D15371C6BDE1FFD3F01A3AAD8C879236823D96_gshared (Il2CppChar ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_27 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_35 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_36 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m48172575E70C6133E613D045C5A96D3851DE5CCC_gshared (Il2CppChar ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		float* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(float));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(float*)L_27 = ((*(float*)((float*)(float*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		float* L_35 = ___1_destination;
		float L_36 = V_1;
		*(float*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		float* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m7A85F76A9539DC3933DB9A51BC65A2D7E5961337_gshared (Il2CppChar ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_27 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_35 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_36 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7FB7346A9E5F91396409236175727C3BD8289488_gshared (Il2CppChar ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint16_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint16_t*)L_27 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint16_t* L_35 = ___1_destination;
		uint16_t L_36 = V_1;
		*(uint16_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint16_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA80CC42E52FD4EC6E605BDBFAE5B2EAB2F147011_gshared (Il2CppChar ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint32_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint32_t*)L_27 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint32_t* L_35 = ___1_destination;
		uint32_t L_36 = V_1;
		*(uint32_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint32_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mDD6AD81FF723699A80C1BB7B9C464FD7E36E1B7F_gshared (Il2CppChar ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// destination = default;
		uint64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_0030:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_12 = ___0_source;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		Il2CppChar L_16 = ___0_source;
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_17);
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint64_t* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, sizeof(uint64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_27 = ___1_destination;
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_29);
		*(uint64_t*)L_27 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_30, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		G_B15_0 = 1;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B15_0 = 0;
	}

IL_00d7:
	{
		G_B17_0 = G_B15_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B17_0 = 0;
	}

IL_00da:
	{
		V_7 = (bool)G_B17_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint64_t* L_35 = ___1_destination;
		uint64_t L_36 = V_1;
		*(uint64_t*)L_35 = L_36;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint64_t* L_37 = ___1_destination;
		il2cpp_codegen_initobj(L_37, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_38 = V_3;
		return L_38;
	}
}
