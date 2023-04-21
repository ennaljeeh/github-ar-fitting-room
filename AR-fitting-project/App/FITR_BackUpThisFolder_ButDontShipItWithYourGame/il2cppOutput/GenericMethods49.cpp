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
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
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

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>
struct TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>
struct TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>
struct TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>
struct TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>
struct TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>
struct TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>
struct TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>
struct TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>
struct TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>
struct TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>
struct TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>
struct TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>
struct TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>
struct TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>
struct TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>
struct TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>
struct TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>
struct TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>
struct TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>
struct TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>
struct TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>
struct TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>
struct TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Char>
struct TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>
struct TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>
struct TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Double>
struct TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>
struct TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>
struct TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>
struct TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>
struct TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE  : public MulticastDelegate_t
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

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedArrayView

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

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>

// Unity.Properties.TypeConverter`2<System.Single,System.Char>

// Unity.Properties.TypeConverter`2<System.Single,System.Char>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>

// Unity.Properties.TypeConverter`2<System.Single,System.Double>

// Unity.Properties.TypeConverter`2<System.Single,System.Double>

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>

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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA310EEED7903ED7892A10D49BE43F83A8A210094_gshared (int8_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		int32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_9;
		L_9 = ((  int32_t (*) (TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_9;
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
		int32_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		int32_t* L_21;
		L_21 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_22 = (*(int32_t*)L_21);
		*(int32_t*)L_19 = L_22;
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
		int32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int32_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int32_t*)L_49 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int32_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int32_t*)L_59 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int32_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int32_t*)L_80 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		int32_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_100 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int32_t));
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
		int32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int32_t* L_115;
		L_115 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_116 = (*(int32_t*)L_115);
		*(int32_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_126 = ___1_destination;
		int32_t L_127 = V_1;
		*(int32_t*)L_126 = L_127;
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
		int32_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int32_t*)L_134 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int32_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int32Enum>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2BC14B7F78C1B9F4895B1ED0DB71978ABE44930D_gshared (int8_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		int32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_9;
		L_9 = ((  int32_t (*) (TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_9;
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
		int32_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		int32_t* L_21;
		L_21 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_22 = (*(int32_t*)L_21);
		*(int32_t*)L_19 = L_22;
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
		int32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int32_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int32_t*)L_49 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int32_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int32_t*)L_59 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int32_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int32_t*)L_80 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		int32_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_100 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int32_t));
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
		int32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int32_t* L_115;
		L_115 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_116 = (*(int32_t*)L_115);
		*(int32_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_126 = ___1_destination;
		int32_t L_127 = V_1;
		*(int32_t*)L_126 = L_127;
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
		int32_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int32_t*)L_134 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int32_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int64>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mADC4301D0B943403C43D1BF1DACC1517D942A5CC_gshared (int8_t* ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
	int64_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		int64_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int64_t L_9;
		L_9 = ((  int64_t (*) (TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int64_t*)L_6 = L_9;
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
		int64_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		int64_t* L_21;
		L_21 = ((  int64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_22 = (*(int64_t*)L_21);
		*(int64_t*)L_19 = L_22;
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
		int64_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int64_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int64_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int64_t*)L_49 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int64_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int64_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int64_t*)L_59 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int64_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int64_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int64_t*)L_80 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		int64_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int64_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int64_t*)L_100 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int64_t));
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
		int64_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int64_t* L_115;
		L_115 = ((  int64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_116 = (*(int64_t*)L_115);
		*(int64_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_126 = ___1_destination;
		int64_t L_127 = V_1;
		*(int64_t*)L_126 = L_127;
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
		int64_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int64_t*)L_134 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int64_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int64_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisRuntimeObject_m3C90F85B68D6A7ED832305DC8450B2F2DDD069F8_gshared (int8_t* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_20 = 0x0;
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
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
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
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
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
		int8_t* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
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
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.SByte>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m89D08AC60E76F21A3EC330CBBC21A1B4963D95A3_gshared (int8_t* ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_1 = 0x0;
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
	int8_t V_20 = 0x0;
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
		int8_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int8_t L_9;
		L_9 = ((  int8_t (*) (TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int8_t*)L_6 = L_9;
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
		int8_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		int8_t* L_21;
		L_21 = ((  int8_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_22 = (*(int8_t*)L_21);
		*(int8_t*)L_19 = L_22;
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
		int8_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int8_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int8_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int8_t*)L_49 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int8_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int8_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int8_t*)L_59 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int8_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int8_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int8_t*)L_80 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		int8_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int8_t*)L_100 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int8_t));
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
		int8_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t* L_115;
		L_115 = ((  int8_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_116 = (*(int8_t*)L_115);
		*(int8_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_126 = ___1_destination;
		int8_t L_127 = V_1;
		*(int8_t*)L_126 = L_127;
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
		int8_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int8_t*)L_134 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int8_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int8_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.SceneManagement.Scene>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mFD20ED9E45AAC32BF59864541C78C1055E37B174_gshared (int8_t* ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
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
	int8_t V_20 = 0x0;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9;
		L_9 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356 (*) (TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_6 = L_9;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_21;
		L_21 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_22 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_21);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_19 = L_22;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_49 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_59 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_80 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_100 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_115;
		L_115 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_116 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_115);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_126 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_127 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_126 = L_127;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_134 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.Serialization.Json.SerializedArrayView>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m3B67753061C040502CA5523A9C3BE7178CBC8A95_gshared (int8_t* ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
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
	int8_t V_20 = 0x0;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_9;
		L_9 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_6 = L_9;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_21;
		L_21 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_22 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_21);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_19 = L_22;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_49 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_59 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_80 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_100 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_115;
		L_115 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_116 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_115);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_126 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_127 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_126 = L_127;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_134 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.Serialization.Json.SerializedValueView>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mC44DA0FD6C2857805A0D43AB8B90F30FDD8F51A6_gshared (int8_t* ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
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
	int8_t V_20 = 0x0;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_9;
		L_9 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC (*) (TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_6 = L_9;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_21;
		L_21 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_22 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_21);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_19 = L_22;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_49 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_59 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_80 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_100 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_115;
		L_115 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_116 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_115);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_126 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_127 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_126 = L_127;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_134 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Single>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9D1E118B5071E97590AE888988B518019F8A0BAD_gshared (int8_t* ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
	float V_1 = 0.0f;
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
	int8_t V_20 = 0x0;
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
		float* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		float L_9;
		L_9 = ((  float (*) (TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(float*)L_6 = L_9;
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
		float* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		float* L_21;
		L_21 = ((  float* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_22 = (*(float*)L_21);
		*(float*)L_19 = L_22;
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
		float* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(float));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		float* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(float*)L_49 = ((*(float*)((float*)(float*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		float* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(float));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		float* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(float*)L_59 = ((*(float*)((float*)(float*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		float* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		float* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(float*)L_80 = ((*(float*)((float*)(float*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		float* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		float* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(float*)L_100 = ((*(float*)((float*)(float*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(float));
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
		float* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		float* L_115;
		L_115 = ((  float* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_116 = (*(float*)L_115);
		*(float*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_126 = ___1_destination;
		float L_127 = V_1;
		*(float*)L_126 = L_127;
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
		float* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(float*)L_134 = ((*(float*)((float*)(float*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		float* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(float));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.TimeSpan>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m4A2759C120CE17199695CF8678DBF861907E9624_gshared (int8_t* ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
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
	int8_t V_20 = 0x0;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_6 = L_9;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21;
		L_21 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_22 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_19 = L_22;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_49 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_59 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_80 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_100 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_115;
		L_115 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_116 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_115);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_126 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_127 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_126 = L_127;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_134 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt16>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D9E733AAD4F0F717FCF295B2DF8B87EF9BCC11F_gshared (int8_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
	uint16_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		uint16_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint16_t L_9;
		L_9 = ((  uint16_t (*) (TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint16_t*)L_6 = L_9;
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
		uint16_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		uint16_t* L_21;
		L_21 = ((  uint16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint16_t L_22 = (*(uint16_t*)L_21);
		*(uint16_t*)L_19 = L_22;
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
		uint16_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint16_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint16_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint16_t*)L_49 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		uint16_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(uint16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint16_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(uint16_t*)L_59 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		uint16_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		uint16_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(uint16_t*)L_80 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		uint16_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, uint16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint16_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint16_t*)L_100 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint16_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(uint16_t));
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
		uint16_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		uint16_t* L_115;
		L_115 = ((  uint16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint16_t L_116 = (*(uint16_t*)L_115);
		*(uint16_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint16_t* L_126 = ___1_destination;
		uint16_t L_127 = V_1;
		*(uint16_t*)L_126 = L_127;
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
		uint16_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(uint16_t*)L_134 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		uint16_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(uint16_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m437450D8F581EE5752965565977F09559ED7BB94_gshared (int8_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
	uint32_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		uint32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint32_t L_9;
		L_9 = ((  uint32_t (*) (TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint32_t*)L_6 = L_9;
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
		uint32_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		uint32_t* L_21;
		L_21 = ((  uint32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_22 = (*(uint32_t*)L_21);
		*(uint32_t*)L_19 = L_22;
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
		uint32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint32_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint32_t*)L_49 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		uint32_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(uint32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint32_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(uint32_t*)L_59 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		uint32_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		uint32_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(uint32_t*)L_80 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		uint32_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, uint32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint32_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint32_t*)L_100 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint32_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(uint32_t));
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
		uint32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		uint32_t* L_115;
		L_115 = ((  uint32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_116 = (*(uint32_t*)L_115);
		*(uint32_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint32_t* L_126 = ___1_destination;
		uint32_t L_127 = V_1;
		*(uint32_t*)L_126 = L_127;
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
		uint32_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(uint32_t*)L_134 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		uint32_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(uint32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt64>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m02B7B7D71F15EF315E5C3E8A66E6B24C2A3740F0_gshared (int8_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
	uint64_t V_1 = 0;
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
	int8_t V_20 = 0x0;
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
		uint64_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint64_t L_9;
		L_9 = ((  uint64_t (*) (TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint64_t*)L_6 = L_9;
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
		uint64_t* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		uint64_t* L_21;
		L_21 = ((  uint64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint64_t L_22 = (*(uint64_t*)L_21);
		*(uint64_t*)L_19 = L_22;
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
		uint64_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint64_t));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint64_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint64_t*)L_49 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		uint64_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(uint64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint64_t* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(uint64_t*)L_59 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		uint64_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		uint64_t* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(uint64_t*)L_80 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		uint64_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint64_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint64_t*)L_100 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint64_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(uint64_t));
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
		uint64_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		uint64_t* L_115;
		L_115 = ((  uint64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint64_t L_116 = (*(uint64_t*)L_115);
		*(uint64_t*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint64_t* L_126 = ___1_destination;
		uint64_t L_127 = V_1;
		*(uint64_t*)L_126 = L_127;
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
		uint64_t* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(uint64_t*)L_134 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		uint64_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(uint64_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.Vector3>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA1881ED461E25A60CCC080F7825A8E3EB1D96A47_gshared (int8_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
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
	int8_t V_20 = 0x0;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_9;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21;
		L_21 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19 = L_22;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_49 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_59 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_80 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_100 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_115;
		L_115 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_115);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_126 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_126 = L_127;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_134 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.Vector3Int>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8B810F9E122624C8CB853D63C5B456ACBE694242_gshared (int8_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
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
	int8_t V_20 = 0x0;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		L_9 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_6 = L_9;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_19 = ___1_destination;
		int8_t* L_20 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21;
		L_21 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_19 = L_22;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_49 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_59 = ___1_destination;
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_59 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_80 = ___1_destination;
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_80 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_100 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_115;
		L_115 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_116 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_115);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_113 = L_116;
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_126 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_127 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_126 = L_127;
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
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_134 = ___1_destination;
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_134 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mD9FB4C1F8EF016DD793B1BC3102D3D12FA16D3F9_gshared (int8_t* ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_20 = 0x0;
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
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_9;
		L_9 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 (*) (TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_20 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_21;
		L_21 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
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
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
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
		int8_t* L_114 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_115;
		L_115 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
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
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m69D1088539D8EABEADECA698744CA8DFBDC857BB_gshared (int8_t* ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_20 = 0x0;
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
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_9;
		L_9 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 (*) (TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_20 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_21;
		L_21 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
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
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
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
		int8_t* L_114 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_115;
		L_115 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
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
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_mD4752BDF3D2BFDFC4FF24A96C11BAD7E51322767_gshared (int8_t* ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_20 = 0x0;
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
		int8_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_9;
		L_9 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 (*) (TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_20 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_21;
		L_21 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_43 = ___0_source;
		int8_t L_44 = (*(int8_t*)L_43);
		int8_t L_45 = L_44;
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
		int8_t* L_53 = ___0_source;
		int8_t L_54 = (*(int8_t*)L_53);
		int8_t L_55 = L_54;
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
		int8_t* L_60 = ___0_source;
		int8_t L_61 = (*(int8_t*)L_60);
		int8_t L_62 = L_61;
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
		int8_t* L_74 = ___0_source;
		int8_t L_75 = (*(int8_t*)L_74);
		int8_t L_76 = L_75;
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
		int8_t* L_81 = ___0_source;
		int8_t L_82 = (*(int8_t*)L_81);
		int8_t L_83 = L_82;
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
		int8_t* L_87 = ___0_source;
		int8_t L_88 = (*(int8_t*)L_87);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (int8_t, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_103 = ___0_source;
		int8_t L_104 = (*(int8_t*)L_103);
		int8_t L_105 = L_104;
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
		int8_t* L_114 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_115;
		L_115 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_117 = ___0_source;
		int8_t L_118 = (*(int8_t*)L_117);
		V_20 = L_118;
		int8_t L_119 = V_20;
		int8_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		int8_t L_122 = V_20;
		int8_t L_123 = L_122;
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
		int8_t* L_135 = ___0_source;
		int8_t L_136 = (*(int8_t*)L_135);
		int8_t L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.SceneManagement.Scene,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisRuntimeObject_mA1819B7381576BBEE04CF6268862AD5F318A4DD2_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_20;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*, Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_43 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_44 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_43);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_45 = L_44;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_53 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_54 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_53);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_55 = L_54;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_60 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_61 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_60);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_62 = L_61;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_74 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_75 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_74);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_76 = L_75;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_81 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_82 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_81);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_83 = L_82;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_87 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_88 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_103 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_104 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_103);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_105 = L_104;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_117 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_118 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_117);
		V_20 = L_118;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_119 = V_20;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_122 = V_20;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_123 = L_122;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_135 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_136 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_135);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.Serialization.Json.SerializedArrayView,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_TisRuntimeObject_mEF34EC4E80EC50573DC382ED8A5DE78351C72690_gshared (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_20;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_43 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_44 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_43);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_45 = L_44;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_53 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_54 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_53);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_55 = L_54;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_60 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_61 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_60);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_62 = L_61;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_74 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_75 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_74);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_76 = L_75;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_81 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_82 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_81);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_83 = L_82;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_87 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_88 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_103 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_104 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_103);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_105 = L_104;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_117 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_118 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_117);
		V_20 = L_118;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_119 = V_20;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_122 = V_20;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_123 = L_122;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_135 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_136 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_135);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.Serialization.Json.SerializedValueView,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_TisRuntimeObject_m5EEDCEF74B55CD31C1F2AF92682C29FF35E51186_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_20;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_20 = ___0_source;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_43 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_44 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_43);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_45 = L_44;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_53 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_54 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_53);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_55 = L_54;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_60 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_61 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_60);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_62 = L_61;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_74 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_75 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_74);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_76 = L_75;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_81 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_82 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_81);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_83 = L_82;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_87 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_88 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_87);
		RuntimeObject** L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_103 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_104 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_103);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_105 = L_104;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_114 = ___0_source;
		RuntimeObject** L_115;
		L_115 = ((  RuntimeObject** (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_117 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_118 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_117);
		V_20 = L_118;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_119 = V_20;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_122 = V_20;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_123 = L_122;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_135 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_136 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_135);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_137 = L_136;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3855371B42DEB80A3FF89B60F036BF6BAF76BAD3_gshared (float* ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
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
	float V_20 = 0.0f;
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9;
		L_9 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_6)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_6)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_21;
		L_21 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_22 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_19)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_19)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_49 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_49)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_49)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_59 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_59)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_59)->___value_1), (void*)NULL);
		#endif
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_80 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_80)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_80)->___value_1), (void*)NULL);
		#endif
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_100 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_100)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_100)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_115;
		L_115 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_116 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_115);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113 = L_116;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___value_1), (void*)NULL);
		#endif
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_126 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_127 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_126 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_126)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_126)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_134 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_134)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_134)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Boolean>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC03F81BC816AD32A5B4AA4FC1D55FE9F20464476_gshared (float* ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
	bool V_1 = false;
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
	float V_20 = 0.0f;
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
		bool* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_9;
		L_9 = ((  bool (*) (TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(bool*)L_6 = L_9;
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
		bool* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		bool* L_21;
		L_21 = ((  bool* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_22 = (*(bool*)L_21);
		*(bool*)L_19 = L_22;
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
		bool* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(bool));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		bool* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(bool*)L_49 = ((*(bool*)((bool*)(bool*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		bool* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(bool));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		bool* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(bool*)L_59 = ((*(bool*)((bool*)(bool*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		bool* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		bool* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(bool*)L_80 = ((*(bool*)((bool*)(bool*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		bool* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, bool*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		bool* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(bool*)L_100 = ((*(bool*)((bool*)(bool*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		bool* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(bool));
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
		bool* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		bool* L_115;
		L_115 = ((  bool* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_116 = (*(bool*)L_115);
		*(bool*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		bool* L_126 = ___1_destination;
		bool L_127 = V_1;
		*(bool*)L_126 = L_127;
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
		bool* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(bool*)L_134 = ((*(bool*)((bool*)(bool*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		bool* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(bool));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Byte>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA17C42D97B4088ADDD4E39F556C5DFD91B47162E_gshared (float* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
	uint8_t V_1 = 0x0;
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
	float V_20 = 0.0f;
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
		uint8_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint8_t L_9;
		L_9 = ((  uint8_t (*) (TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint8_t*)L_6 = L_9;
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
		uint8_t* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		uint8_t* L_21;
		L_21 = ((  uint8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_22 = (*(uint8_t*)L_21);
		*(uint8_t*)L_19 = L_22;
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
		uint8_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint8_t));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint8_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint8_t*)L_49 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		uint8_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(uint8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint8_t* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(uint8_t*)L_59 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		uint8_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		uint8_t* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(uint8_t*)L_80 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		uint8_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint8_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint8_t*)L_100 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint8_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(uint8_t));
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
		uint8_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		uint8_t* L_115;
		L_115 = ((  uint8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_116 = (*(uint8_t*)L_115);
		*(uint8_t*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint8_t* L_126 = ___1_destination;
		uint8_t L_127 = V_1;
		*(uint8_t*)L_126 = L_127;
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
		uint8_t* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(uint8_t*)L_134 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		uint8_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(uint8_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Char>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB7F89001CA0BBBE8C0DD5E37C1397C204741DAA_gshared (float* ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
	Il2CppChar V_1 = 0x0;
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
	float V_20 = 0.0f;
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
		Il2CppChar* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppChar L_9;
		L_9 = ((  Il2CppChar (*) (TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppChar*)L_6 = L_9;
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
		Il2CppChar* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		Il2CppChar* L_21;
		L_21 = ((  Il2CppChar* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppChar L_22 = (*(Il2CppChar*)L_21);
		*(Il2CppChar*)L_19 = L_22;
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
		Il2CppChar* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Il2CppChar));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Il2CppChar* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Il2CppChar*)L_49 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		Il2CppChar* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Il2CppChar));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Il2CppChar* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Il2CppChar*)L_59 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		Il2CppChar* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Il2CppChar* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Il2CppChar*)L_80 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		Il2CppChar* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Il2CppChar* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Il2CppChar*)L_100 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Il2CppChar* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Il2CppChar));
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
		Il2CppChar* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		Il2CppChar* L_115;
		L_115 = ((  Il2CppChar* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppChar L_116 = (*(Il2CppChar*)L_115);
		*(Il2CppChar*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Il2CppChar* L_126 = ___1_destination;
		Il2CppChar L_127 = V_1;
		*(Il2CppChar*)L_126 = L_127;
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
		Il2CppChar* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Il2CppChar*)L_134 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Il2CppChar* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Il2CppChar));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,UnityEngine.Color>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m320BFFA57697AA4476D1BCAFDBD45006E5367EA0_gshared (float* ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
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
	float V_20 = 0.0f;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_6 = L_9;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21;
		L_21 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_19 = L_22;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_49 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_59 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_80 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_100 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_115;
		L_115 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_116 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_115);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_126 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_127 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_126 = L_127;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_134 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.DateTime>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m395BB14873A000F6FB0374132025AFDCADFC6BB0_gshared (float* ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
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
	float V_20 = 0.0f;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_6 = L_9;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21;
		L_21 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_21);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_19 = L_22;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_49 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_59 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_80 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_100 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_115;
		L_115 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_116 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_115);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_126 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_127 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_126 = L_127;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_134 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Double>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m587F4BD9ED49D19D1DDF91FA04CA8DE87F616AD6_gshared (float* ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
	double V_1 = 0.0;
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
	float V_20 = 0.0f;
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
		double* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		double L_9;
		L_9 = ((  double (*) (TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(double*)L_6 = L_9;
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
		double* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		double* L_21;
		L_21 = ((  double* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_22 = (*(double*)L_21);
		*(double*)L_19 = L_22;
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
		double* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(double));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		double* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(double*)L_49 = ((*(double*)((double*)(double*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		double* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(double));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		double* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(double*)L_59 = ((*(double*)((double*)(double*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		double* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		double* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(double*)L_80 = ((*(double*)((double*)(double*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		double* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, double*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		double* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(double*)L_100 = ((*(double*)((double*)(double*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(double));
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
		double* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		double* L_115;
		L_115 = ((  double* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_116 = (*(double*)L_115);
		*(double*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_126 = ___1_destination;
		double L_127 = V_1;
		*(double*)L_126 = L_127;
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
		double* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(double*)L_134 = ((*(double*)((double*)(double*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		double* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(double));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Guid>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisGuid_t_mB44FFB1B9190C04FC2AC563266C789AE0FB3F74F_gshared (float* ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
	Guid_t V_1;
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
	float V_20 = 0.0f;
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
		Guid_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Guid_t L_9;
		L_9 = ((  Guid_t (*) (TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Guid_t*)L_6 = L_9;
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
		Guid_t* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		Guid_t* L_21;
		L_21 = ((  Guid_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_22 = (*(Guid_t*)L_21);
		*(Guid_t*)L_19 = L_22;
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
		Guid_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Guid_t));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Guid_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Guid_t*)L_49 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		Guid_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(Guid_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Guid_t* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(Guid_t*)L_59 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		Guid_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		Guid_t* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(Guid_t*)L_80 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		Guid_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, Guid_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Guid_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Guid_t*)L_100 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(Guid_t));
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
		Guid_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		Guid_t* L_115;
		L_115 = ((  Guid_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_116 = (*(Guid_t*)L_115);
		*(Guid_t*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_126 = ___1_destination;
		Guid_t L_127 = V_1;
		*(Guid_t*)L_126 = L_127;
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
		Guid_t* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(Guid_t*)L_134 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		Guid_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(Guid_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int16>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCE432F82FF3DBA3DE5F3D7C97302421B15963F89_gshared (float* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
	int16_t V_1 = 0;
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
	float V_20 = 0.0f;
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
		int16_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int16_t L_9;
		L_9 = ((  int16_t (*) (TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int16_t*)L_6 = L_9;
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
		int16_t* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		int16_t* L_21;
		L_21 = ((  int16_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_22 = (*(int16_t*)L_21);
		*(int16_t*)L_19 = L_22;
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
		int16_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int16_t));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int16_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int16_t*)L_49 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		int16_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int16_t* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int16_t*)L_59 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		int16_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int16_t* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int16_t*)L_80 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		int16_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, int16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int16_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int16_t*)L_100 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int16_t));
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
		int16_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		int16_t* L_115;
		L_115 = ((  int16_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_116 = (*(int16_t*)L_115);
		*(int16_t*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_126 = ___1_destination;
		int16_t L_127 = V_1;
		*(int16_t*)L_126 = L_127;
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
		int16_t* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int16_t*)L_134 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int16_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int16_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m73AF1A01A00FB14D4FE0A37DFD9CA74DC5FD605A_gshared (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
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
	float V_20 = 0.0f;
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
		int32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_9;
		L_9 = ((  int32_t (*) (TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_9;
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
		int32_t* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		int32_t* L_21;
		L_21 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_22 = (*(int32_t*)L_21);
		*(int32_t*)L_19 = L_22;
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
		int32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int32_t));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int32_t*)L_49 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		int32_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int32_t*)L_59 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		int32_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int32_t*)L_80 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		int32_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_100 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int32_t));
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
		int32_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		int32_t* L_115;
		L_115 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_116 = (*(int32_t*)L_115);
		*(int32_t*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_126 = ___1_destination;
		int32_t L_127 = V_1;
		*(int32_t*)L_126 = L_127;
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
		int32_t* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int32_t*)L_134 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int32_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int32Enum>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mDEF2315EFEB00F558CB4F15C2D73643CA70B09E6_gshared (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
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
	float V_20 = 0.0f;
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
		int32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		float* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_9;
		L_9 = ((  int32_t (*) (TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))), L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_9;
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
		int32_t* L_19 = ___1_destination;
		float* L_20 = ___0_source;
		int32_t* L_21;
		L_21 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_22 = (*(int32_t*)L_21);
		*(int32_t*)L_19 = L_22;
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
		int32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(int32_t));
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
		float* L_43 = ___0_source;
		float L_44 = (*(float*)L_43);
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(int32_t*)L_49 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		// if (source == null)
		float* L_53 = ___0_source;
		float L_54 = (*(float*)L_53);
		float L_55 = L_54;
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
		int32_t* L_58 = ___1_destination;
		il2cpp_codegen_initobj(L_58, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_59 = ___1_destination;
		float* L_60 = ___0_source;
		float L_61 = (*(float*)L_60);
		float L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		*(int32_t*)L_59 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_74 = ___0_source;
		float L_75 = (*(float*)L_74);
		float L_76 = L_75;
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
		int32_t* L_79 = ___1_destination;
		il2cpp_codegen_initobj(L_79, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_80 = ___1_destination;
		float* L_81 = ___0_source;
		float L_82 = (*(float*)L_81);
		float L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_83);
		*(int32_t*)L_80 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_87 = ___0_source;
		float L_88 = (*(float*)L_87);
		int32_t* L_89 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = ((  bool (*) (float, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		float* L_103 = ___0_source;
		float L_104 = (*(float*)L_103);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_105);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_107;
		L_107 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_106, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_100 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_107, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_108 = ___1_destination;
		il2cpp_codegen_initobj(L_108, sizeof(int32_t));
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
		int32_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		int32_t* L_115;
		L_115 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_114, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_116 = (*(int32_t*)L_115);
		*(int32_t*)L_113 = L_116;
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
		float* L_117 = ___0_source;
		float L_118 = (*(float*)L_117);
		V_20 = L_118;
		float L_119 = V_20;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_02de;
		}
	}
	{
		float L_122 = V_20;
		float L_123 = L_122;
		RuntimeObject* L_124 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_123);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_124, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_126 = ___1_destination;
		int32_t L_127 = V_1;
		*(int32_t*)L_126 = L_127;
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
		int32_t* L_134 = ___1_destination;
		float* L_135 = ___0_source;
		float L_136 = (*(float*)L_135);
		float L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_137);
		*(int32_t*)L_134 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_138, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		// destination = default;
		int32_t* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, sizeof(int32_t));
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
