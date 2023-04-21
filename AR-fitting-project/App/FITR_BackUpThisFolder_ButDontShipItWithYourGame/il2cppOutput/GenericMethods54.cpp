#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Unity.Serialization.Json.PackedBinaryStreamData
struct PackedBinaryStreamData_t23F4FE48FE03F7214AAD21A50BDCE2C8FBD938CB;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Properties.ConversionRegistry/ConverterKeyComparer
struct ConverterKeyComparer_t2DDDB49E88C1FAA1A2DE0E3AD0302DC2FE8F2639;

IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;


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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m23AF31D7771A4BC975BEDACAA32C61212C6FCEF9_gshared (Il2CppChar ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CAC0805004F259A060FD143EEB2E129FD03958A_gshared (Il2CppChar ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mF2C7A0EF0FC45C578433241D65D71E55FD1D280D_gshared (Il2CppChar ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_mCA5A1806512865BA8ADB325CD76ED81AE6D5842D_gshared (Il2CppChar ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m756E1A2D1260EC7EC037BB0BF641913BDB428B08_gshared (Il2CppChar ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		Il2CppChar L_28 = ___0_source;
		Il2CppChar L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<UnityEngine.Color,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisRuntimeObject_m0D1124B7C6A4AE09439478ED402686320EE728E1_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = L_28;
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
		L_31 = ((  bool (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m5EB699CAD5DA9E518F42E35E9779F6B59EE0DAB3_gshared (double ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93B6CFC39F817BAC1645866521C9484187F1DDCC_gshared (double ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m01CF6EDA6A69810129DD9DB1C970671E33CFE8FF_gshared (double ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m65EF24417B584A6D0235067BC1780A375404CF0B_gshared (double ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB970FD6A68F3691F3299F32115F3C3EF1C50CCCF_gshared (double ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m31F7F6B3DB820408809AA6051BD4A00D0EAB91F3_gshared (double ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m25406550071D96C4BDA877D00804C8D8B226B0CC_gshared (double ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisGuid_t_m96FF9608FD72A31F349207B7596CF59605243491_gshared (double ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8A8F1A38466B8B8AA60C8D1E81BE1E0C17698125_gshared (double ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8033E9E12E07232F65845933EFFB55AF195314D1_gshared (double ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5F323DD84AC7EF3DCCECB9AE8729BF53B703DE15_gshared (double ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB7B8E4B866E4CA4FE3599DA35ED5093BDA630217_gshared (double ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisRuntimeObject_m89EC928F28F4A615C57EB00369653B36CC490D0A_gshared (double ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m00BAEC746C84B0070AD806E20A1E0DF086889756_gshared (double ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m4BDD7F79CB48ED8DD15A996D3BAF81BAC75EC7C8_gshared (double ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2B36E161985FF627615F78871B2CE80AB0329FF1_gshared (double ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m1F01BC708B8F816B5584D43FA09D8293B74A3E95_gshared (double ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m01ACE2ECC0EBC53EDCF3BB3896BF4D6E2B75F660_gshared (double ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mE1DFA1B798CFA46EB20883F665BA306DEA24CBE8_gshared (double ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2153F126FBB8BE6410DB21E60FA93CBF374418CF_gshared (double ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE8C605B725C2CC152365C5F7DF63F7896CC901D8_gshared (double ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA968A294DCDDCB3BD192AFBA3602D9AD5CC62615_gshared (double ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4585B038F61E030D8EDCF1C17DAC296F1AD37860_gshared (double ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m16DCECCEE6BCAD22F2897780B61ED6B80AF4D29A_gshared (double ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m2A6B6DF8BFB1CC885EBFF4AC465CF5CF76A313AB_gshared (double ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m5E5B9A62BB0ADA30CB046B28BFAD0B530213D4D9_gshared (double ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m6717D68D71DAA95BD5C15E4CAD62A45DA09C13B7_gshared (double ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		double L_12 = ___0_source;
		double L_13 = L_12;
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
		double L_16 = ___0_source;
		double L_17 = L_16;
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
		double L_28 = ___0_source;
		double L_29 = L_28;
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
		L_31 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m0BBF2BB218C92B8F61FC55A04D43A8CCFB59EE10_gshared (int16_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3E60924ABF80F656E3CBF129D04280A232B20C2F_gshared (int16_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4B3606EB83BE99D3B1689B7F847B54495FF0095_gshared (int16_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC81DACFED520647A948B1A5BC339B5900010212B_gshared (int16_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m58ED7293C58B178560AE06DAA1F42D50497705C3_gshared (int16_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m10FCB5CF2984F94FAEDA27B003CBA3183EE97032_gshared (int16_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m70F2C61FE3C9CB67D67837A927EDA2300C1E27D3_gshared (int16_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisGuid_t_m72E3C3E0BC1D18013F27DE4927DE89350569B70A_gshared (int16_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2589D8CDEEAA0F1A97A162481F277761608BCE2C_gshared (int16_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF70A435A78AF8C9F3F74DE16BE485930687B818_gshared (int16_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m316746E95BD2E7834B582BDEEA68D456AFCE38A0_gshared (int16_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFE23ED80DD53111AACFAB3903BA71C225EBEF0AA_gshared (int16_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisRuntimeObject_m84BECB06668C6554CA62283E91D6DE70D9FBF431_gshared (int16_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m66FBE129572EB7B427263880BFE9CFBCF0019ECB_gshared (int16_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m76CA8A44697B546426AAF44EF11B5D38553DFDAC_gshared (int16_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mABF0C918B2D1B84D3FBD1BDB4AB5D630064E728D_gshared (int16_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB463F8FCD47FA2899F22EE69B845B1F4433C6AEF_gshared (int16_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB3735BDF9BEA9FB10DBE9F789C8415827728A817_gshared (int16_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1C0952BDD5D23FC6582B0588C4CA4B7A27CF4D54_gshared (int16_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m3B7502CC03E559A8DDC8974153F11284DBDBE017_gshared (int16_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m47688D0EF6793A496EB8B966392B347BDB47477C_gshared (int16_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m673D93100B92958E517E0C83F9A99873DE8C1B3D_gshared (int16_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m918D98A440A58DAA6AC2B389C16852C2E5991536_gshared (int16_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mFB4F651E1CAD15CEA9884FDFD472923C3264A0A6_gshared (int16_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mF7E30D19C584C301DFFDA700890D970AC669F1A1_gshared (int16_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m7AE9C5EDD9737FBD7F7C4553FB3DD156FD6C1B75_gshared (int16_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int16,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m443943CAA89687FD5B94F8408F53977B2E1A2C74_gshared (int16_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		int16_t L_12 = ___0_source;
		int16_t L_13 = L_12;
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
		int16_t L_16 = ___0_source;
		int16_t L_17 = L_16;
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
		int16_t L_28 = ___0_source;
		int16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m0A15F5EE9BF7771839602417B1460BF84A3DF643_gshared (int32_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1A34F288FC5F955CB504E79D0A7FB76D4855C1F9_gshared (int32_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m101D776489127CE6DAED3B41C9CA668F446C996B_gshared (int32_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8169240B2A2E931C4E6BA8E49CA3849BFD1D2938_gshared (int32_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m15B0B230B4C74EB99505EFE230496C552D7FFA0D_gshared (int32_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m914709A233F0501A5A61AEB84BC753C61C309989_gshared (int32_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m17BA2689F393FB439998DDCAC3655D53AA8C2E8E_gshared (int32_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGuid_t_mC78C045621109ED955E51560D27C690481AE69FF_gshared (int32_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m89EEC749D11E959208AF83D3612DDC266FC7EDB0_gshared (int32_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4113979217D3095B86C85E355067459B37B2CE5_gshared (int32_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m85593A01A0350659119F11A4ADC42E283578EA9C_gshared (int32_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4FFCDD980ABD71F7F0D163F1D0FCB88276734B40_gshared (int32_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m086F136D342E7D1D8F397BC9B1AC8FF9538A4949_gshared (int32_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m38E24071F2E351335F4E781CFDA2F11AAE4F0CA1_gshared (int32_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m32967A1145342BB2145BDA5505979767D9910A28_gshared (int32_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m49F655B62459A4948B3D3EED5446A64B65A8D9CD_gshared (int32_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mAD3D32934BF5ABAC7E91BC6ED8B1000B2C3A1FEA_gshared (int32_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8818C2920CB58E57C06D9AAD28D3FBCBF7ED81F5_gshared (int32_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m96C3B2BFB93620D51620E3889DADFE6C138E8BB1_gshared (int32_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6B8B4DCE375D6D1DA6915E9EF8D1EA945DF5093A_gshared (int32_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m33E34B2D1E3E9106B2B2E686DC11F21568C4CDB3_gshared (int32_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBAD9B9CE2CB985A72532DC978F1453B095CFAA39_gshared (int32_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m923831AF263E68E6705558F9FA9D4CD30A33B561_gshared (int32_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m763E4EC9B898FB7FC046C3F8168692D833EEC7F9_gshared (int32_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m6D48652EFC82E56646B8EDBB46C678DCB3F17708_gshared (int32_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m81CBF4D15B3B13AE178FF9CD2072181CFCDC417D_gshared (int32_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m456B7626D94CB513D3F217624D00323DFD17F1A5_gshared (int32_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int32Enum,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mFBD85717A3ABC076E4EB60D4A882142CC1C646EB_gshared (int32_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		int32_t L_12 = ___0_source;
		int32_t L_13 = L_12;
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
		int32_t L_16 = ___0_source;
		int32_t L_17 = L_16;
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
		int32_t L_28 = ___0_source;
		int32_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int32_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m782F179F3ACDEE31574CB9268D6F54A08F7B13DB_gshared (int64_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D0FE2C1EFE87CD532AF287F44F9138537512583_gshared (int64_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m066F257F8B3FF81DADBBF147087DFA68DF3195B4_gshared (int64_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m41C13EC74FE7B32EB95676A38357E3F02BFA8394_gshared (int64_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFAD400B0E48D0A79609EC4ED71EDDAD5852FC2B1_gshared (int64_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m670F73461D6038676469102F693F6D8C1275584E_gshared (int64_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mD9501D3CB148DF6DD2D719C050A1A063E249E9A7_gshared (int64_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisGuid_t_m112A6176904A3A0FB06078D59F23B8ED0441F486_gshared (int64_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB8E2917CD4A99A46E7D0325195E8ACFBE9CCC6E3_gshared (int64_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m374158B326B6160BC4B2BB4D1AF785B35738C57C_gshared (int64_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m59E9B90AC7C72266CF16FF541E47EF4281052173_gshared (int64_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m05B7DB648503EE9E3A09AF391C49C48E69E4E624_gshared (int64_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisRuntimeObject_mF30B322E46784825966D27376473457A9BAF3F37_gshared (int64_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m9CFB929231435319EC07FE7260B6D7CE2B63E33D_gshared (int64_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m7BB8C051526276FFDAEB42FA2255D7A830B50852_gshared (int64_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mF64BDB3C09E0334EE696B07E0D6895C3B8D2376B_gshared (int64_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.Serialization.Json.SerializedObjectView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m5B30B3988CA0DC0BA1DE8BA71CE19AC1C6C3F469_gshared (int64_t ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_12 = ___0_source;
		int64_t L_13 = L_12;
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
		int64_t L_16 = ___0_source;
		int64_t L_17 = L_16;
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int64_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
