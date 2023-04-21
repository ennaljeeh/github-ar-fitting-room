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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m30DFCBDA7549E72B6DF34CA24063C29C1256E643_gshared (int64_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6CF1239269540C1AA65A5DBC681E456BEDEACB44_gshared (int64_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m2BEC2EEDD78B5B7843CAEA531FAE54B30D4EA039_gshared (int64_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mABFD4389372C2841D6F45B7CBCF3CD0C65BDA048_gshared (int64_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAAFBC32C6170D19216AC8D39F23EE06D814F0CAF_gshared (int64_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m011B17914F032C14971DBCC468733A8A37C35E6C_gshared (int64_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5B5ACEE7272ED90ADDA032708B1465FD8FF8E936_gshared (int64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mEF4945A759E86CE0E8E54F647BB34E4772E9807D_gshared (int64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mA4D822B7F56E7D22CD6A7DEED287798C9B9286EB_gshared (int64_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m66ADA0F33AA194D9417AE49AFC77AA5DD15B7457_gshared (int64_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Int64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m57E1B95571F7ADFC18771D446782CEF4E8E3CAA1_gshared (int64_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		int64_t L_28 = ___0_source;
		int64_t L_29 = L_28;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m10A5683C3826D503037D5F1273A411F1F9B1E4D0_gshared (RuntimeObject* ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_23 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_23)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_23)->___value_1), (void*)NULL);
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_29 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_30 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_29)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_29)->___value_1), (void*)NULL);
		#endif
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3079F67C9420D2710508458F8EF903362BFB5B99_gshared (RuntimeObject* ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		bool* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(bool));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(bool*)L_23 = ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		bool* L_29 = ___1_destination;
		bool L_30 = V_1;
		*(bool*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		bool* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(bool));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CACFBD07714D7E39B61DCA6B6D5C8D18FFF7C09_gshared (RuntimeObject* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint8_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(uint8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(uint8_t*)L_23 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint8_t* L_29 = ___1_destination;
		uint8_t L_30 = V_1;
		*(uint8_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint8_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(uint8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9A59BCB02D46F488E28F33927B5A4F0E5469DCC5_gshared (RuntimeObject* ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Il2CppChar));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Il2CppChar*)L_23 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Il2CppChar* L_29 = ___1_destination;
		Il2CppChar L_30 = V_1;
		*(Il2CppChar*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Il2CppChar* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Il2CppChar));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m82C3B03259FCAF255F754958D4267E3F66275F72_gshared (RuntimeObject* ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mCF959EFC914D978461F03CAA525BBBE336598CF4_gshared (RuntimeObject* ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_23 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_29 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mD0D67C4C45CEE23E12C694D33141EA1E64EED08C_gshared (RuntimeObject* ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		double* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(double));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(double*)L_23 = ((*(double*)((double*)(double*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		double* L_29 = ___1_destination;
		double L_30 = V_1;
		*(double*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		double* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(double));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisGuid_t_m6108911DE24CCCD9FB9351C1E9B5C1F284373A6D_gshared (RuntimeObject* ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Guid_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Guid_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Guid_t*)L_23 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Guid_t* L_29 = ___1_destination;
		Guid_t L_30 = V_1;
		*(Guid_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Guid_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Guid_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m35BC2BCF89079194E2CD6F9B4EE74B21C743BBB1_gshared (RuntimeObject* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int16_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(int16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(int16_t*)L_23 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int16_t* L_29 = ___1_destination;
		int16_t L_30 = V_1;
		*(int16_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int16_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(int16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m38BC7EC243B75629AA2EDF91EC63E78EDCFC747B_gshared (RuntimeObject* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(int32_t*)L_23 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_29 = ___1_destination;
		int32_t L_30 = V_1;
		*(int32_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8D5E5ABB6C943CD8F2214D36091851BD4A3AD9F9_gshared (RuntimeObject* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int32_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(int32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(int32_t*)L_23 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int32_t* L_29 = ___1_destination;
		int32_t L_30 = V_1;
		*(int32_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int32_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(int32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF4764AF42D9DA36BB1EDA2FE01B3B1BA9FFB88A7_gshared (RuntimeObject* ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int64_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(int64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(int64_t*)L_23 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int64_t* L_29 = ___1_destination;
		int64_t L_30 = V_1;
		*(int64_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int64_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(int64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisRuntimeObject_m2CFF4622D062BAEE56874C5C31DD41D709915E49_gshared (RuntimeObject* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(RuntimeObject*));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(RuntimeObject**)L_23 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		RuntimeObject** L_29 = ___1_destination;
		RuntimeObject* L_30 = V_1;
		*(RuntimeObject**)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_29, (void*)L_30);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		RuntimeObject** L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(RuntimeObject*));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2372178F7FE253A581F22142779DEDF475A0DB75_gshared (RuntimeObject* ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		int8_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(int8_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(int8_t*)L_23 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		int8_t* L_29 = ___1_destination;
		int8_t L_30 = V_1;
		*(int8_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		int8_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(int8_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m0893C1C77EA9220B1CE704ACF23C24141C48EFEF_gshared (RuntimeObject* ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_23 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_29 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_30 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m8AC30B7A50EF469A8C2DD5FCED1309D7122E7275_gshared (RuntimeObject* ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_23 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_29 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_30 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.Serialization.Json.SerializedObjectView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m17D0A233CF764E4CED49715A48C4A4368E60CC76_gshared (RuntimeObject* ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_23 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_29 = ___1_destination;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_30 = V_1;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m119A246B7F66EDF3FA40783735872E861F02C78D_gshared (RuntimeObject* ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_23 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_29 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_30 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m263F46469858829D6761E378C9C1C641D27D0F98_gshared (RuntimeObject* ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		float* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(float));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(float*)L_23 = ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		float* L_29 = ___1_destination;
		float L_30 = V_1;
		*(float*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		float* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(float));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m34255E8757CA37EBB23852D5F049FA80300874BE_gshared (RuntimeObject* ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_23 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_29 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_30 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m9915A3C9D234C1844C90D9EB17D723C7FABC845D_gshared (RuntimeObject* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint16_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(uint16_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(uint16_t*)L_23 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint16_t* L_29 = ___1_destination;
		uint16_t L_30 = V_1;
		*(uint16_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint16_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(uint16_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC44451650BB8FE981055205EA46260C92373EFE6_gshared (RuntimeObject* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint32_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(uint32_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(uint32_t*)L_23 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint32_t* L_29 = ___1_destination;
		uint32_t L_30 = V_1;
		*(uint32_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint32_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(uint32_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m923524BC66226BF6D4BF1DFF7E8F34192590DF07_gshared (RuntimeObject* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		uint64_t* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(uint64_t));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(uint64_t*)L_23 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		uint64_t* L_29 = ___1_destination;
		uint64_t L_30 = V_1;
		*(uint64_t*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		uint64_t* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(uint64_t));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E17118EF518CD5276EA34CE92440C9D09C834A4_gshared (RuntimeObject* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m548C6F495A4EFCAA4C6EEAB6746F8C6FA8E964EC_gshared (RuntimeObject* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_23 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_29 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_30 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_29 = L_30;
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mE92E34BFEC8A02DA9DCC7F7AB033525E92A62C98_gshared (RuntimeObject* ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_23 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_23)->___events_0), (void*)NULL);
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_29 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_30 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_29)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m67FEB4805E136AD775A4908298920496AEDCAB94_gshared (RuntimeObject* ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_23 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_23)->___events_0), (void*)NULL);
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_29 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_30 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_29)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Object,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisRuntimeObject_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m47B10D0E498357467B38C3B354D2A55D3EAEBFEA_gshared (RuntimeObject* ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		RuntimeObject* L_12 = ___0_source;
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_12, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// if (null == source)
		RuntimeObject* L_14 = ___0_source;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_16 = ___1_destination;
		il2cpp_codegen_initobj(L_16, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_007e:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_23 = ___1_destination;
		RuntimeObject* L_24 = ___0_source;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_23 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_23)->___events_0), (void*)NULL);
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
		bool L_25;
		L_25 = ((  bool (*) (RuntimeObject**, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00d6;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
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
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_29 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_30 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_29)->___events_0), (void*)NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00ec:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_31 = ___1_destination;
		il2cpp_codegen_initobj(L_31, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_3 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3498A0136A493221B191D8D07DE0D44DC677FBC7_gshared (int8_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD6C0B82EBCC054C9023D1C3264CB51A2226D7E0F_gshared (int8_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5E63674B2E2902FCE230C5E416E597F4FD736BAB_gshared (int8_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB034B657ED27A0D8B30591251362DC29DA0884E5_gshared (int8_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA5F317611D07C043895ADCECA669D4442FF0B933_gshared (int8_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m525646FFE086B9668C47947D0F6FE8718A2A1C46_gshared (int8_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m22B9A02056DDE83FD003D5FE9499FCC53E235A99_gshared (int8_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisGuid_t_m86B9EE1ECA1D48994D06587DB5D61626D4B984A0_gshared (int8_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD8A6E64429B6485DB80D249B088AF2E791CF9557_gshared (int8_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC485315C2027BB14ABAB1EEFC0BFD3C77B5B80E0_gshared (int8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m93A710F12AF3F12350C945F490E982D00819429C_gshared (int8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB23DDD09C6CD26A22F88B27E694D59CCA0E5EF5C_gshared (int8_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisRuntimeObject_m5B667C86E23845D615848FDAC0AAE045C3CAAC41_gshared (int8_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m65C23A817EE77FB2F2D2D6E6B7BADAF54394C429_gshared (int8_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mCA3CBC73520BF37105A5B628796C8E8FFA1325CB_gshared (int8_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m9D81167580C62C18C7E62A99C3034980AD86BD96_gshared (int8_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m1A37ED5CFE363A538ADB357BD4A9EE16E3EF8B5A_gshared (int8_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m233441D8231CED879CB6207CF071B33DFC9087ED_gshared (int8_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m36996CA6A2C120DC8A619FE1F6F287EDBB6A83C1_gshared (int8_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m506E9684C75BCA3BA795376DCB64EDE75E72F204_gshared (int8_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFE39E76FB2D5BE2FEB5276CE685C21A0361C4EA2_gshared (int8_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF69AF0DA4C951C11C88583CC169C6E0025815441_gshared (int8_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4646CF5C2CC629281D6EA10468C20BC9C60A5F0D_gshared (int8_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2CB32CD52C08BA0EEE2DDAC1CB7B69C4825886E8_gshared (int8_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m956B7AA2478E852C1BC16FBB4A8DE30DE3AB65A6_gshared (int8_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m2F67A202C4DCCFDAAF9A0C85DA6F9FB4781E27E1_gshared (int8_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_mC3B577BA9D5F9737D1DF03D73FA9A559DAE96C02_gshared (int8_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		int8_t L_12 = ___0_source;
		int8_t L_13 = L_12;
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
		int8_t L_16 = ___0_source;
		int8_t L_17 = L_16;
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
		int8_t L_28 = ___0_source;
		int8_t L_29 = L_28;
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
		L_31 = ((  bool (*) (int8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<UnityEngine.SceneManagement.Scene,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisRuntimeObject_mA6D92C174FC635720F2EA9235D23B8242A83BCF5_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_13 = L_12;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_16 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_17 = L_16;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_28 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29 = L_28;
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
		L_31 = ((  bool (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<Unity.Serialization.Json.SerializedArrayView,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_TisRuntimeObject_mEA0829C24F88C5DC27CE23C41F23E4943205C79F_gshared (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_12 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_13 = L_12;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_16 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_17 = L_16;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_28 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_29 = L_28;
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
		L_31 = ((  bool (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<Unity.Serialization.Json.SerializedValueView,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_TisRuntimeObject_m5028954198DA2C555C1B6ACE136011CFDF4B7A38_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_12 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_13 = L_12;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_16 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_17 = L_16;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_28 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_29 = L_28;
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
		L_31 = ((  bool (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mF1D859B08F4E120A8E905B072CD2BAAC6E6B027E_gshared (float ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBAFAE603B713D85CA3540FB16BDBCF9D155E2025_gshared (float ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50782BA207042844B5F9CE3354C60081214023BE_gshared (float ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5C668461F9C16E52DBA535D548417100F2411B24_gshared (float ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5A553151481F0C184FA7CAF6FC4824D8AE4CA99F_gshared (float ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m823B6F606C8532B3E05A572055D1BCEE67746718_gshared (float ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA5F581E579A5BA80E3AC347FF47F9A8689357542_gshared (float ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisGuid_t_m6710DB36429AC83B8D8F35C40115C4BEC8B7E2EB_gshared (float ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9ED2813EB34D85652629FD31942567A03CCCD758_gshared (float ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDF3DCFC923010A549BC72D5DFF102D1E2E645FA6_gshared (float ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mDB6032A90700F134482312649529368918DCB27D_gshared (float ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m1A775B68066E2410B6D2231895212FA3B5B03D21_gshared (float ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_mBAFB8CB950071904C38A256147F5F04F8FA812E2_gshared (float ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mC58C364A98645FEA04BC69C74D507C113BE2BCF9_gshared (float ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m66A94CC906F4F72DC3393732C1B89E7ED2EC2826_gshared (float ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m04F13A04F28E9FFD6FB56B729915AD4D058ACBB5_gshared (float ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.Serialization.Json.SerializedObjectView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m0984B617E119BB509293209F4355A3B54D304243_gshared (float ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m17C434E02D5DC3D68B57F1264A030C05D6A8F9C8_gshared (float ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69FF1B53AB839E20AB49543B5192207B34FC3B51_gshared (float ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m053AFD41D361FF824C29647F552A1AD34B0F0D9A_gshared (float ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E4322F45EAAB9D57717098714FF5BAA6EE84529_gshared (float ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m847CA3A9314C2367FE6B259DE4C86887A18199AD_gshared (float ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7E2A92BF36A051D0F62A1611490E6C0954805537_gshared (float ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF7B4F7929F41811F09011626E9E97E60FCC7F045_gshared (float ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m10D69BCFF0E88CB3249DAABA040629D7A40114E0_gshared (float ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m148E75F488562557FA820B2997AC0A556032455A_gshared (float ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m6C37F1FD0E182914BD78923465AA35E38E3C68F2_gshared (float ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Single,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m18A96C5C655072D7FD8CFB4E748ACCF3B1ED5287_gshared (float ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
		float L_12 = ___0_source;
		float L_13 = L_12;
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
		float L_16 = ___0_source;
		float L_17 = L_16;
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
		float L_28 = ___0_source;
		float L_29 = L_28;
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
		L_31 = ((  bool (*) (float*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m576DA11DA43C3C8314502E43107EB6B0F50228A5_gshared (uint16_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29F47B16F2BC61DC73E8858443DA7DDCCE870E14_gshared (uint16_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFC8BFFA655A4DF6F308278C82FB43A146F238FFA_gshared (uint16_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6825BFA1146A87958DC4F8C443E7793F6ABBA6EB_gshared (uint16_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5E213515C52DB363C899D2E1F4948D51C10A6E75_gshared (uint16_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m791885D46BB82C20ACD17BF8D85669163A7B6826_gshared (uint16_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A2AFE4E6AFF4304ED7BDF6D96F2495323E2257B_gshared (uint16_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.UInt16,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisGuid_t_mBD598DDFFA9FF9140BA59E88F0213BEF0B109619_gshared (uint16_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
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
		uint16_t L_16 = ___0_source;
		uint16_t L_17 = L_16;
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
		uint16_t L_28 = ___0_source;
		uint16_t L_29 = L_28;
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
		L_31 = ((  bool (*) (uint16_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
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
