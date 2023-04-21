#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>
struct Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7;
// System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>
struct Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F;
// System.Action`1<Unity.MARS.Data.GeographicCoordinate>
struct Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC;
// System.Action`1<Unity.MARS.Data.IMRFace>
struct Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D;
// System.Action`1<Unity.MARS.Data.IMarsBody>
struct Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693;
// System.Action`1<Unity.MARS.Data.MRBody>
struct Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75;
// System.Action`1<Unity.MARS.Data.MRCameraTrackingState>
struct Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44;
// System.Action`1<Unity.MARS.Data.MRLightEstimation>
struct Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6;
// System.Action`1<Unity.MARS.Data.MRMarker>
struct Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016;
// System.Action`1<Unity.MARS.Data.MRMesh>
struct Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433;
// System.Action`1<Unity.MARS.Data.MRPlane>
struct Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973;
// System.Action`1<Unity.MARS.Data.MRReferencePoint>
struct Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46;
// System.Action`1<Unity.MARS.Data.MarsTrackableId>
struct Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Pose>
struct Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Texture>
struct Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB;
// System.Action`3<System.Boolean,System.Int64,System.Byte[]>
struct Action_3_tACB18C5EE92DA0B0B11206186FC5DAF01CEB7BEF;
// System.Action`3<System.Boolean,System.Int64,System.String>
struct Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>
struct Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8;
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>
struct Dictionary_2_t497A0597276677967F031699F98F07F802B355E3;
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>
struct Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Collections.Generic.IEqualityComparer`1<Unity.MARS.Data.MRBodyLandmark>
struct IEqualityComparer_1_t082BF7193A6DD876FBF6C31BB9DF5516DBF344EF;
// System.Collections.Generic.IEqualityComparer`1<Unity.MARS.Data.MarsTrackableId>
struct IEqualityComparer_1_t5FD355AA2AA417DC918E03BD6258D6FDBABBEA79;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>
struct KeyCollection_t3253F7816FF53AE07408B0774BDF558258792519;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>
struct KeyCollection_t494862CB48DFC1D28075FEF428ECD9F13AEDE9A1;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>
struct KeyCollection_t0ACF67E602D4AEDEFF2C6408DB96B2EDAA7DF4BD;
// System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>
struct List_1_tBB1066878969CD5C54E916A86382BF0FD3008405;
// System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>
struct List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>
struct List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634;
// System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>
struct List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD;
// System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>
struct List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD;
// System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>
struct List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808;
// System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>
struct List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>
struct ValueCollection_t56ED8AA7CF034BF2660D6746C6479083CF36C0E6;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>
struct ValueCollection_t97DDF73A8B356F0A4BF2902821586B76DF8E361B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>
struct ValueCollection_t16D6A62CB67444826DEC88CC18FBF4C121011FB0;
// System.Collections.Generic.Dictionary`2/Entry<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>[]
struct EntryU5BU5D_t9B3BB5F227D1B9669C4322A6741EBDFD59185787;
// System.Collections.Generic.Dictionary`2/Entry<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>[]
struct EntryU5BU5D_t2BF661AD4C7022419AEF64BB7929D9C46F73FF9D;
// System.Collections.Generic.Dictionary`2/Entry<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>[]
struct EntryU5BU5D_tA231F3805D00BFC1421AFF695DB3D7A05FDE2CAA;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// Unity.MARS.Data.IMRFace[]
struct IMRFaceU5BU5D_t42681046D5D3E500A4FB67F1B5DC8DD412B27622;
// Unity.MARS.Data.IMarsBody[]
struct IMarsBodyU5BU5D_tD5F2F0A33E40ED8014330EAEE504DEB64402FAE7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.MARS.Data.MRBody[]
struct MRBodyU5BU5D_t4889D1F7B7CC35C7BB62E96011D249CB241473E4;
// Unity.MARS.Data.MRMarker[]
struct MRMarkerU5BU5D_tEF10CA56ABEB3126AD1A8587C9F06FC7A271A4D6;
// Unity.MARS.Data.MRMesh[]
struct MRMeshU5BU5D_tF5A6470E66C80D53E2A98551A94D20735A9FE75F;
// Unity.MARS.Data.MRPlane[]
struct MRPlaneU5BU5D_t06AF396E8DCFB8C628B14894CBA96C093DAFD1FB;
// Unity.MARS.Data.MRReferencePoint[]
struct MRReferencePointU5BU5D_t5BE5606907571D47D82A81E4107DBA5DBBB9FE25;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.MARS.Attributes.EventAttribute
struct EventAttribute_tB0489156AA4A6385AC8BCA457820BF7E03542E22;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.MARS.Data.IMRFace
struct IMRFace_t79FE2786E5379836D7C33E7707363EC169E8E612;
// Unity.MARS.Data.IMRMarkerLibrary
struct IMRMarkerLibrary_tDA0AAD723CAFB053140AF03DF04BA8BA1DF17232;
// Unity.MARS.Data.IMarsBody
struct IMarsBody_t2524E49D854042CEF1194B1A9C66F319C268FFB3;
// Unity.MARS.Providers.IUsesBodyTracking
struct IUsesBodyTracking_t83E4D485671891059DE376C7EE329B660FD27F3C;
// Unity.MARS.Providers.IUsesCameraIntrinsics
struct IUsesCameraIntrinsics_t7A32FA61E4980575CD97F35298A2354745328B62;
// Unity.MARS.Providers.IUsesCameraOffset
struct IUsesCameraOffset_tD8BB2E81C72C2D224DDE6D7E1AAB97F55D32187E;
// Unity.MARS.Providers.IUsesCameraPose
struct IUsesCameraPose_t43F3CBC6937BDBE7664FF1B04D33383FF56F730E;
// Unity.MARS.Providers.IUsesCameraProjectionMatrix
struct IUsesCameraProjectionMatrix_t2FC46C45FEEC2F222D6DF155400A6FE3DADD6693;
// Unity.MARS.Providers.IUsesCameraTexture
struct IUsesCameraTexture_t3A3BA18034EDB91C708C51DBB172B6B232380CF4;
// Unity.MARS.Providers.IUsesCloudDataStorage
struct IUsesCloudDataStorage_t3BD154F33DF99A36AEF2796FD87DE36DFBC2F43C;
// Unity.MARS.Providers.IUsesCompassHeading
struct IUsesCompassHeading_tB310DED8D6A7D0252D1FA1DA686E737C3D0423DE;
// Unity.MARS.Simulation.IUsesDeviceSimulationSettings
struct IUsesDeviceSimulationSettings_t727354ED12914F9E2C0FAC61F26871721A2C0D40;
// Unity.MARS.Providers.IUsesFaceTracking
struct IUsesFaceTracking_t7F974B7D00F25BD33619FC0488C2748E72FA6259;
// Unity.MARS.Providers.IUsesFacialExpressions
struct IUsesFacialExpressions_tF3FA4B464A30B511757AB0BF88CA6FE655D1F014;
// Unity.MARS.Providers.IUsesGeoLocation
struct IUsesGeoLocation_t8095C60BC4543E1232AFEFE53F7F894E3EDB8D34;
// Unity.MARS.Providers.IUsesLightEstimation
struct IUsesLightEstimation_t554830D963005895DD2C3AB605284D1BCD3D8394;
// Unity.MARS.Providers.IUsesMRHitTesting
struct IUsesMRHitTesting_t01F5DD201476ABCC950797D1D72B86C60BF9227D;
// Unity.MARS.Providers.IUsesMarkerTracking
struct IUsesMarkerTracking_tEE46BD368D6B516A0C50C3FBC173049DBFD8B16C;
// Unity.MARS.Providers.IUsesMarsBodyTracking
struct IUsesMarsBodyTracking_t6620E4D63F26D9C967C5F0649BA04C9B49B48B33;
// Unity.MARS.Providers.IUsesMeshes
struct IUsesMeshes_t9D386BF59D2884AB4993B586BF6025ACDBC41FA1;
// Unity.MARS.Providers.IUsesPlaneFinding
struct IUsesPlaneFinding_t789D071B4560AFD055ADA6471994A09C39FE63EC;
// Unity.MARS.Providers.IUsesPointCloud
struct IUsesPointCloud_tBD853D8F62809381C359B4E621BB67A28A544663;
// Unity.MARS.Providers.IUsesReferencePoints
struct IUsesReferencePoints_tE8AF7DD9BE9BA02220F7F449E33A1B5876B6599E;
// Unity.MARS.Providers.IUsesRemoteDataConnection
struct IUsesRemoteDataConnection_tC33407EDF0677E36C5080E2FA82E52F285E7D0CA;
// Unity.MARS.Providers.IUsesSessionControl
struct IUsesSessionControl_tA984E870C8AD00BE96DE1A37B6164FDFBFDBED70;
// Unity.MARS.Simulation.IUsesSimulationVideoFeed
struct IUsesSimulationVideoFeed_t09769C09CC7A648552A41A43CA12618226D26793;
// Unity.MARS.MARSUtils.IUsesSlowTasks
struct IUsesSlowTasks_tF757205C600440124EDAA92F31D67503FE54D9A0;
// Unity.MARS.Landmarks.LandmarkDefinition
struct LandmarkDefinition_t9032DAC1BAA1D6B4237BA06FB8C285E9CCA534CB;
// Unity.MARS.Data.LoadTextureCallback
struct LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905;
// Unity.MARS.Data.MRBodyLandmarkComparer
struct MRBodyLandmarkComparer_t3ABF574C944A14330BF18AD3D208E423514411B0;
// Unity.MARS.Data.MRFaceExpressionComparer
struct MRFaceExpressionComparer_t496C6DF928054E0A27550581A31A70833AC3C575;
// Unity.MARS.Data.MRFaceLandmarkComparer
struct MRFaceLandmarkComparer_t71AAFD6BD63147304700DF84B24BFDA474E06FFB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Unity.MARS.Data.ProgressCallback
struct ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.MARS.Data.SerializedTraitRequirement
struct SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Unity.MARS.Data.TraitDefinition
struct TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC;
// Unity.MARS.Query.TraitRequirement
struct TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate
struct TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t1CA747042D18C41F5E4CE31066A1EDCFAF82943B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_tFD17A700143756BA84705A787524B84F7FC4311C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCameraProjectionMatrix_t6E431FC6CB80720DE7B43AD5B293CAACCA0BB58B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesFacialExpressions_t7E4942B25D91D45F7C36A701C9D7D7915EAC06ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MARSTrackingState_tF4F1A9A80C41F9B8D3C75EBAE88097C70132D9B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral095BF313E0560B989F26D34ADC221C4C1F9BB76E;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD4547EEDA716D7ABB45F1D2443B6BFD56E52EC;
IL2CPP_EXTERN_C String_t* _stringLiteral0AE2658B6A3CF65B723B59C775DCF2B5DBC36441;
IL2CPP_EXTERN_C String_t* _stringLiteral0C945050B544C3CEF12A4D3D681756769325C196;
IL2CPP_EXTERN_C String_t* _stringLiteral0E80F4D997AC7C308A04E53745671EE1631B8D7D;
IL2CPP_EXTERN_C String_t* _stringLiteral128B98C2573F57B66C37CA835D0BFBA7B7C54AAE;
IL2CPP_EXTERN_C String_t* _stringLiteral3C9097C11EB0CDF9658A3061B4906ED001FFF535;
IL2CPP_EXTERN_C String_t* _stringLiteral42A9A87BB25BE5C8E1B19AD8D192A0E734A5609A;
IL2CPP_EXTERN_C String_t* _stringLiteral494AD09FB78D890531756ECEC4DFF5C8D22B267D;
IL2CPP_EXTERN_C String_t* _stringLiteral61B8D324687C24872968A15276C954F913457113;
IL2CPP_EXTERN_C String_t* _stringLiteral67C959292ACE557A7911726798B51F6178228E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral70B25559F6A3D7C88BFD21ECAFA98C855C4299DB;
IL2CPP_EXTERN_C String_t* _stringLiteral73449D68E41F8415CE7CFE4B9EF15ADCFD227ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral80F5C93D7D1A75B619CA6EB5616A6123A15789FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA;
IL2CPP_EXTERN_C String_t* _stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9640A4BB52A367750B30EF6205902E8ED977782B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3D2BE4F8DB5A38B000A1ADAA7C55276E258718;
IL2CPP_EXTERN_C String_t* _stringLiteralBACF4D71F8EBDA0C65915B206AFF3133754C7577;
IL2CPP_EXTERN_C String_t* _stringLiteralC44DACFC4328E9DD61AE6846C25FED3BA5076B31;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BAB32E57D7DF89CA22BE69BA99B62F96CF56CF;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EDD2A398E7E7ED8B6C2CD07762D81D9ACFA461;
IL2CPP_EXTERN_C String_t* _stringLiteralE81B368AB56379B7A403D362DD0D8AAA9C8F178B;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TraitRequirement_FromSerialized_m29BF01750CAD11BD98984850C76970B601273911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A;;
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com;
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com;;
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke;
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke;;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0A231845AC54C0044C9B2B6E9FF3467DB7FB8972 
{
};

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>
struct Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9B3BB5F227D1B9669C4322A6741EBDFD59185787* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3253F7816FF53AE07408B0774BDF558258792519* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t56ED8AA7CF034BF2660D6746C6479083CF36C0E6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>
struct Dictionary_2_t497A0597276677967F031699F98F07F802B355E3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2BF661AD4C7022419AEF64BB7929D9C46F73FF9D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t494862CB48DFC1D28075FEF428ECD9F13AEDE9A1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t97DDF73A8B356F0A4BF2902821586B76DF8E361B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>
struct Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA231F3805D00BFC1421AFF695DB3D7A05FDE2CAA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0ACF67E602D4AEDEFF2C6408DB96B2EDAA7DF4BD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t16D6A62CB67444826DEC88CC18FBF4C121011FB0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>
struct List_1_tBB1066878969CD5C54E916A86382BF0FD3008405  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMRFaceU5BU5D_t42681046D5D3E500A4FB67F1B5DC8DD412B27622* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>
struct List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMarsBodyU5BU5D_tD5F2F0A33E40ED8014330EAEE504DEB64402FAE7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>
struct List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MRBodyU5BU5D_t4889D1F7B7CC35C7BB62E96011D249CB241473E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>
struct List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MRMarkerU5BU5D_tEF10CA56ABEB3126AD1A8587C9F06FC7A271A4D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>
struct List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MRMeshU5BU5D_tF5A6470E66C80D53E2A98551A94D20735A9FE75F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>
struct List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MRPlaneU5BU5D_t06AF396E8DCFB8C628B14894CBA96C093DAFD1FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>
struct List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MRReferencePointU5BU5D_t5BE5606907571D47D82A81E4107DBA5DBBB9FE25* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.MARS.Query.IConditionGenericMethods
struct IConditionGenericMethods_tDAA61EAD55353117CE0F4022EE687D99FABEB3EF  : public RuntimeObject
{
};

// Unity.MARS.Data.IProvidesTraitsMethods
struct IProvidesTraitsMethods_tFF80837646C5C92102E9329FAED298C5EFD67F28  : public RuntimeObject
{
};

// Unity.MARS.Query.IRelationGenericMethods
struct IRelationGenericMethods_t9A41927D2D5733BC03CB2B8C8E2DB82FD9D3D091  : public RuntimeObject
{
};

// Unity.MARS.Data.IRequiresTraitsMethods
struct IRequiresTraitsMethods_t61D62D280C983B8D5BA2E2E5C7BF0949DC1946A6  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesBodyTrackingMethods
struct IUsesBodyTrackingMethods_t73921225628B0E1762A2E1626D437E056F888AF0  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCameraIntrinsicsMethods
struct IUsesCameraIntrinsicsMethods_t4639DE131792FD1267AE724AAC9A0BF8ADBFD310  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCameraOffsetMethods
struct IUsesCameraOffsetMethods_t381F550A2427B64F4D4922CD56F4FCD9B5280948  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCameraPoseMethods
struct IUsesCameraPoseMethods_t5535D6AAF4317276B6718C504A52ABD1E6777F9E  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCameraProjectionMatrixMethods
struct IUsesCameraProjectionMatrixMethods_t3F5A365B3175300CCBB780BF82F5381ABDBE482A  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCameraTextureMethods
struct IUsesCameraTextureMethods_tE8B52764DC3450630E90CC8015EA9DD6BDA51F64  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCloudDataStorageMethods
struct IUsesCloudDataStorageMethods_t93134C07D1871A98C319BD2E9B9C9DC89B0E297F  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesCompassHeadingMethods
struct IUsesCompassHeadingMethods_tDBF9A09E75A76E31575881419CC7C10DF492214B  : public RuntimeObject
{
};

// Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods
struct IUsesDeviceSimulationSettingsMethods_t81158CF8577BD92942C3222A1E99D4082C5DC9FF  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesFaceTrackingMethods
struct IUsesFaceTrackingMethods_tE35F107040974E51B8B136F8957FDBCEDED91873  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesFacialExpressionsMethods
struct IUsesFacialExpressionsMethods_t44A7BC9A90192F3A9637968AC054A1A56B365F02  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesGeoLocationMethods
struct IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesHitTestingMethods
struct IUsesHitTestingMethods_tB5BBB096A4A0B8771ADFFBC33D964027685F5927  : public RuntimeObject
{
};

// Unity.MARS.Data.IUsesMARSDataGenericMethods
struct IUsesMARSDataGenericMethods_tDF4F7A55D42DF2545B4CA9A8D92BA2F4749F0E0F  : public RuntimeObject
{
};

// Unity.MARS.Data.IUsesMARSTrackableDataGenericMethods
struct IUsesMARSTrackableDataGenericMethods_t8E9912FBD12617FB0F5CC3D76104B24665033F31  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesMarkerTrackingMethods
struct IUsesMarkerTrackingMethods_t9E505BF41E03340612BB60B78B97044C7451A7CC  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesPlaneFindingMethods
struct IUsesPlaneFindingMethods_t78943EC6AACE23B54637388B6D3BA468FDC6D6F6  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesPointCloudMethods
struct IUsesPointCloudMethods_t866B48B717CFF67BED058FBBDA893B1A3433CFE4  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesReferencePointsMethods
struct IUsesReferencePointsMethods_tB5A9DD5854931287D77C6DCC2C5494156C5B9378  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesRemoteDataConnectionMethods
struct IUsesRemoteDataConnectionMethods_tF48D48BEA3FFB8FCD814E8224FF9780C57410D7D  : public RuntimeObject
{
};

// Unity.MARS.Providers.IUsesSessionControlMethods
struct IUsesSessionControlMethods_t79376467157E3997A2171C76824BAB1604062AD7  : public RuntimeObject
{
};

// Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods
struct IUsesSimulationVideoFeedMethods_tD7299860BE1CB9958F7B40750DC039E5A230B2E4  : public RuntimeObject
{
};

// Unity.MARS.MARSUtils.IUsesSlowTasksMethods
struct IUsesSlowTasksMethods_t000EAD333B8C3313E21C24943276A4A592EF8AC2  : public RuntimeObject
{
};

// Unity.MARS.Landmarks.LandmarkDefinition
struct LandmarkDefinition_t9032DAC1BAA1D6B4237BA06FB8C285E9CCA534CB  : public RuntimeObject
{
	// System.String Unity.MARS.Landmarks.LandmarkDefinition::name
	String_t* ___name_0;
	// System.Type[] Unity.MARS.Landmarks.LandmarkDefinition::outputTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___outputTypes_1;
	// System.Type Unity.MARS.Landmarks.LandmarkDefinition::settingsType
	Type_t* ___settingsType_2;
};

// Unity.MARS.Data.MRBodyLandmarkComparer
struct MRBodyLandmarkComparer_t3ABF574C944A14330BF18AD3D208E423514411B0  : public RuntimeObject
{
};

// Unity.MARS.Data.MRFaceExpressionComparer
struct MRFaceExpressionComparer_t496C6DF928054E0A27550581A31A70833AC3C575  : public RuntimeObject
{
};

// Unity.MARS.Data.MRFaceLandmarkComparer
struct MRFaceLandmarkComparer_t71AAFD6BD63147304700DF84B24BFDA474E06FFB  : public RuntimeObject
{
};

// Unity.MARS.Simulation.MarsTime
struct MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9  : public RuntimeObject
{
};

// Unity.MARS.Simulation.MarsTimeDelegates
struct MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.MARS.Data.SerializedTraitRequirement
struct SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569  : public RuntimeObject
{
	// System.String Unity.MARS.Data.SerializedTraitRequirement::m_TraitName
	String_t* ___m_TraitName_0;
	// System.String Unity.MARS.Data.SerializedTraitRequirement::m_TypeName
	String_t* ___m_TypeName_1;
	// System.Boolean Unity.MARS.Data.SerializedTraitRequirement::m_Required
	bool ___m_Required_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Unity.MARS.Data.TraitDefinition
struct TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC  : public RuntimeObject
{
	// System.String Unity.MARS.Data.TraitDefinition::TraitName
	String_t* ___TraitName_0;
	// System.Type Unity.MARS.Data.TraitDefinition::Type
	Type_t* ___Type_1;
};

// Unity.MARS.Query.TraitDefinitions
struct TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425  : public RuntimeObject
{
};

// Unity.MARS.Query.TraitNames
struct TraitNames_tE5BDC341DE91E9CAC7AA5D31322DBA667C10203C  : public RuntimeObject
{
};

// Unity.MARS.Query.TraitRequirement
struct TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0  : public RuntimeObject
{
	// System.Boolean Unity.MARS.Query.TraitRequirement::Required
	bool ___Required_0;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitRequirement::Definition
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Definition_1;
};

// Unity.MARS.MARSUtils.TypeExtensions
struct TypeExtensions_tE327648390A25B226406578B96A78BEB5B97EC22  : public RuntimeObject
{
};

// Unity.MARS.Providers.UsesLightEstimationMethods
struct UsesLightEstimationMethods_tC5FBB5C09493793E0F9529A723385DE00DCAE3DC  : public RuntimeObject
{
};

// Unity.MARS.Providers.UsesMarsBodyTrackingMethods
struct UsesMarsBodyTrackingMethods_tFD2ABEC44E8018F77DE2346EBF97F296A11A05F4  : public RuntimeObject
{
};

// Unity.MARS.Providers.UsesMeshesMethods
struct UsesMeshesMethods_t500D1A44935479CACF7B9DE02FD1C95F99D8363F  : public RuntimeObject
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

// Unity.Collections.NativeSlice`1<System.Single>
struct NativeSlice_1_t173266145AD9873C4FE45D91583856BC2DDCDF75 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<System.UInt64>
struct NativeSlice_1_tF1617B47B82C1CE3A04B2FCB1F23DE81E2A4F7F9 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.MARS.Attributes.EventAttribute
struct EventAttribute_tB0489156AA4A6385AC8BCA457820BF7E03542E22  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Unity.MARS.Attributes.EventAttribute::type
	Type_t* ___type_0;
};

// Unity.MARS.Data.GeographicCoordinate
struct GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 
{
	// System.Double Unity.MARS.Data.GeographicCoordinate::latitude
	double ___latitude_1;
	// System.Double Unity.MARS.Data.GeographicCoordinate::longitude
	double ___longitude_2;
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

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// Unity.MARS.Data.MarsTrackableId
struct MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 
{
	// System.UInt64 Unity.MARS.Data.MarsTrackableId::m_SubId1
	uint64_t ___m_SubId1_4;
	// System.UInt64 Unity.MARS.Data.MarsTrackableId::m_SubId2
	uint64_t ___m_SubId2_5;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.Single>>
struct Nullable_1_t0665932407C8DE400EDCF5B83DFDB5D87B57B864 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeSlice_1_t173266145AD9873C4FE45D91583856BC2DDCDF75 ___value_1;
};

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.UInt64>>
struct Nullable_1_tB8B1F55073915AC31CFF787A2DD1D674B70B635E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeSlice_1_tF1617B47B82C1CE3A04B2FCB1F23DE81E2A4F7F9 ___value_1;
};

// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>
struct Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___value_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// Unity.MARS.Data.GeographicBoundingBox
struct GeographicBoundingBox_tEF12B6C4B73B6100A2C64FA366400BE142F65448 
{
	// Unity.MARS.Data.GeographicCoordinate Unity.MARS.Data.GeographicBoundingBox::center
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 ___center_0;
	// System.Double Unity.MARS.Data.GeographicBoundingBox::latitudeExtents
	double ___latitudeExtents_1;
	// System.Double Unity.MARS.Data.GeographicBoundingBox::longitudeExtents
	double ___longitudeExtents_2;
};

// UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A 
{
	// UnityEngine.Vector3 UnityEngine.HumanPose::bodyPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	// UnityEngine.Quaternion UnityEngine.HumanPose::bodyRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	// System.Single[] UnityEngine.HumanPose::muscles
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___muscles_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
};
// Native definition for COM marshalling of UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.MARS.Data.MRBody
struct MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRBody::<id>k__BackingField
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	// UnityEngine.Pose Unity.MARS.Data.MRBody::<pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose> Unity.MARS.Data.MRBody::<landmarkPoses>k__BackingField
	Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___U3ClandmarkPosesU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect> Unity.MARS.Data.MRBody::<landmarkBounds>k__BackingField
	Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___U3ClandmarkBoundsU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MRBody
struct MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_pinvoke
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___U3ClandmarkPosesU3Ek__BackingField_3;
	Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___U3ClandmarkBoundsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Unity.MARS.Data.MRBody
struct MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_com
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___U3ClandmarkPosesU3Ek__BackingField_3;
	Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___U3ClandmarkBoundsU3Ek__BackingField_4;
};

// Unity.MARS.Data.MRHitTestResult
struct MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950 
{
	// UnityEngine.Pose Unity.MARS.Data.MRHitTestResult::<pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_0;
};

// Unity.MARS.Data.MRLightEstimation
struct MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F 
{
	// System.Nullable`1<System.Single> Unity.MARS.Data.MRLightEstimation::m_AmbientBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientBrightness_0;
	// System.Nullable`1<System.Single> Unity.MARS.Data.MRLightEstimation::m_AmbientColorTemperature
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientColorTemperature_1;
	// System.Nullable`1<System.Single> Unity.MARS.Data.MRLightEstimation::m_AmbientIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientIntensityInLumens_2;
	// System.Nullable`1<UnityEngine.Color> Unity.MARS.Data.MRLightEstimation::m_ColorCorrection
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_ColorCorrection_3;
	// System.Nullable`1<System.Single> Unity.MARS.Data.MRLightEstimation::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_4;
	// System.Nullable`1<UnityEngine.Color> Unity.MARS.Data.MRLightEstimation::m_MainLightColor
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_MainLightColor_5;
	// System.Nullable`1<UnityEngine.Vector3> Unity.MARS.Data.MRLightEstimation::m_MainLightDirection
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___m_MainLightDirection_6;
	// System.Nullable`1<System.Single> Unity.MARS.Data.MRLightEstimation::m_MainLightIntensityLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightIntensityLumens_7;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> Unity.MARS.Data.MRLightEstimation::m_SphericalHarmonics
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___m_SphericalHarmonics_8;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MRLightEstimation
struct MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientBrightness_0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientColorTemperature_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientIntensityInLumens_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_ColorCorrection_3;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_4;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_MainLightColor_5;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___m_MainLightDirection_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightIntensityLumens_7;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___m_SphericalHarmonics_8;
};
// Native definition for COM marshalling of Unity.MARS.Data.MRLightEstimation
struct MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientBrightness_0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientColorTemperature_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AmbientIntensityInLumens_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_ColorCorrection_3;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_4;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___m_MainLightColor_5;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___m_MainLightDirection_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightIntensityLumens_7;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___m_SphericalHarmonics_8;
};

// Unity.MARS.Data.MRMarker
struct MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMarker::m_TrackableId
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_TrackableId_0;
	// UnityEngine.Pose Unity.MARS.Data.MRMarker::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Guid Unity.MARS.Data.MRMarker::m_MarkerId
	Guid_t ___m_MarkerId_2;
	// UnityEngine.Vector2 Unity.MARS.Data.MRMarker::m_Extents
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_3;
	// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRMarker::m_TrackingState
	int32_t ___m_TrackingState_4;
	// UnityEngine.Texture2D Unity.MARS.Data.MRMarker::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MRMarker
struct MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_pinvoke
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_TrackableId_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	Guid_t ___m_MarkerId_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_3;
	int32_t ___m_TrackingState_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of Unity.MARS.Data.MRMarker
struct MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_com
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_TrackableId_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	Guid_t ___m_MarkerId_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_3;
	int32_t ___m_TrackingState_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// Unity.MARS.Data.MRMesh
struct MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMesh::m_ID
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_0;
	// System.String Unity.MARS.Data.MRMesh::m_MeshType
	String_t* ___m_MeshType_1;
	// UnityEngine.Pose Unity.MARS.Data.MRMesh::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.Mesh Unity.MARS.Data.MRMesh::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_3;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MRMesh
struct MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_pinvoke
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_0;
	char* ___m_MeshType_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_3;
};
// Native definition for COM marshalling of Unity.MARS.Data.MRMesh
struct MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_com
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_0;
	Il2CppChar* ___m_MeshType_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_3;
};

// Unity.MARS.Data.MRPlane
struct MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRPlane::m_ID
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_1;
	// Unity.MARS.Data.MarsPlaneAlignment Unity.MARS.Data.MRPlane::m_Alignment
	int32_t ___m_Alignment_2;
	// UnityEngine.Pose Unity.MARS.Data.MRPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector3 Unity.MARS.Data.MRPlane::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_4;
	// UnityEngine.Vector2 Unity.MARS.Data.MRPlane::m_Extents
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Unity.MARS.Data.MRPlane::vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Unity.MARS.Data.MRPlane::textureCoordinates
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___textureCoordinates_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Unity.MARS.Data.MRPlane::normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals_8;
	// System.Collections.Generic.List`1<System.Int32> Unity.MARS.Data.MRPlane::indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indices_9;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MRPlane
struct MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_pinvoke
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_1;
	int32_t ___m_Alignment_2;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_5;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_6;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___textureCoordinates_7;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals_8;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indices_9;
};
// Native definition for COM marshalling of Unity.MARS.Data.MRPlane
struct MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_com
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___m_ID_1;
	int32_t ___m_Alignment_2;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Extents_5;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_6;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___textureCoordinates_7;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals_8;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indices_9;
};

// Unity.MARS.Data.MRReferencePoint
struct MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRReferencePoint::<id>k__BackingField
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_0;
	// UnityEngine.Pose Unity.MARS.Data.MRReferencePoint::<pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_1;
	// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRReferencePoint::<trackingState>k__BackingField
	int32_t ___U3CtrackingStateU3Ek__BackingField_2;
};

// Unity.MARS.Data.MarsBody
struct MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45 
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsBody::<id>k__BackingField
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	// UnityEngine.Pose Unity.MARS.Data.MarsBody::<pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	// UnityEngine.HumanPose Unity.MARS.Data.MarsBody::<BodyPose>k__BackingField
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ___U3CBodyPoseU3Ek__BackingField_3;
	// System.Single Unity.MARS.Data.MarsBody::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Single> Unity.MARS.Data.MarsBody::<BoneLengths>k__BackingField
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CBoneLengthsU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.MarsBody
struct MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_pinvoke
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke ___U3CBodyPoseU3Ek__BackingField_3;
	float ___U3CHeightU3Ek__BackingField_4;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CBoneLengthsU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Unity.MARS.Data.MarsBody
struct MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_com
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___U3CidU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com ___U3CBodyPoseU3Ek__BackingField_3;
	float ___U3CHeightU3Ek__BackingField_4;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CBoneLengthsU3Ek__BackingField_5;
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Unity.MARS.Data.PointCloudData
struct PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D 
{
	// System.Nullable`1<Unity.Collections.NativeSlice`1<System.UInt64>> Unity.MARS.Data.PointCloudData::Identifiers
	Nullable_1_tB8B1F55073915AC31CFF787A2DD1D674B70B635E ___Identifiers_0;
	// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>> Unity.MARS.Data.PointCloudData::Positions
	Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 ___Positions_1;
	// System.Nullable`1<Unity.Collections.NativeSlice`1<System.Single>> Unity.MARS.Data.PointCloudData::ConfidenceValues
	Nullable_1_t0665932407C8DE400EDCF5B83DFDB5D87B57B864 ___ConfidenceValues_2;
};
// Native definition for P/Invoke marshalling of Unity.MARS.Data.PointCloudData
struct PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_pinvoke
{
	Nullable_1_tB8B1F55073915AC31CFF787A2DD1D674B70B635E ___Identifiers_0;
	Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 ___Positions_1;
	Nullable_1_t0665932407C8DE400EDCF5B83DFDB5D87B57B864 ___ConfidenceValues_2;
};
// Native definition for COM marshalling of Unity.MARS.Data.PointCloudData
struct PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_com
{
	Nullable_1_tB8B1F55073915AC31CFF787A2DD1D674B70B635E ___Identifiers_0;
	Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 ___Positions_1;
	Nullable_1_t0665932407C8DE400EDCF5B83DFDB5D87B57B864 ___ConfidenceValues_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>
struct Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7  : public MulticastDelegate_t
{
};

// System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>
struct Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.GeographicCoordinate>
struct Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.IMRFace>
struct Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.IMarsBody>
struct Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRBody>
struct Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRCameraTrackingState>
struct Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRLightEstimation>
struct Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRMarker>
struct Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRMesh>
struct Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRPlane>
struct Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MRReferencePoint>
struct Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.MARS.Data.MarsTrackableId>
struct Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Pose>
struct Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Texture>
struct Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB  : public MulticastDelegate_t
{
};

// System.Action`3<System.Boolean,System.Int64,System.Byte[]>
struct Action_3_tACB18C5EE92DA0B0B11206186FC5DAF01CEB7BEF  : public MulticastDelegate_t
{
};

// System.Action`3<System.Boolean,System.Int64,System.String>
struct Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.MARS.Data.LoadTextureCallback
struct LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905  : public MulticastDelegate_t
{
};

// Unity.MARS.Data.ProgressCallback
struct ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2  : public MulticastDelegate_t
{
};

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Type[] System.Reflection.ReflectionTypeLoadException::<Types>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CTypesU3Ek__BackingField_18;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::<LoaderExceptions>k__BackingField
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___U3CLoaderExceptionsU3Ek__BackingField_19;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate
struct TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>

// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>

// System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>
struct List_1_tBB1066878969CD5C54E916A86382BF0FD3008405_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMRFaceU5BU5D_t42681046D5D3E500A4FB67F1B5DC8DD412B27622* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>

// System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>
struct List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMarsBodyU5BU5D_tD5F2F0A33E40ED8014330EAEE504DEB64402FAE7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>
struct List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MRBodyU5BU5D_t4889D1F7B7CC35C7BB62E96011D249CB241473E4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>
struct List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MRMarkerU5BU5D_tEF10CA56ABEB3126AD1A8587C9F06FC7A271A4D6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>
struct List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MRMeshU5BU5D_tF5A6470E66C80D53E2A98551A94D20735A9FE75F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>

// System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>
struct List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MRPlaneU5BU5D_t06AF396E8DCFB8C628B14894CBA96C093DAFD1FB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>

// System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>
struct List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MRReferencePointU5BU5D_t5BE5606907571D47D82A81E4107DBA5DBBB9FE25* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// Unity.MARS.Query.IConditionGenericMethods

// Unity.MARS.Query.IConditionGenericMethods

// Unity.MARS.Data.IProvidesTraitsMethods

// Unity.MARS.Data.IProvidesTraitsMethods

// Unity.MARS.Query.IRelationGenericMethods

// Unity.MARS.Query.IRelationGenericMethods

// Unity.MARS.Data.IRequiresTraitsMethods

// Unity.MARS.Data.IRequiresTraitsMethods

// Unity.MARS.Providers.IUsesBodyTrackingMethods

// Unity.MARS.Providers.IUsesBodyTrackingMethods

// Unity.MARS.Providers.IUsesCameraIntrinsicsMethods

// Unity.MARS.Providers.IUsesCameraIntrinsicsMethods

// Unity.MARS.Providers.IUsesCameraOffsetMethods

// Unity.MARS.Providers.IUsesCameraOffsetMethods

// Unity.MARS.Providers.IUsesCameraPoseMethods

// Unity.MARS.Providers.IUsesCameraPoseMethods

// Unity.MARS.Providers.IUsesCameraProjectionMatrixMethods

// Unity.MARS.Providers.IUsesCameraProjectionMatrixMethods

// Unity.MARS.Providers.IUsesCameraTextureMethods

// Unity.MARS.Providers.IUsesCameraTextureMethods

// Unity.MARS.Providers.IUsesCloudDataStorageMethods

// Unity.MARS.Providers.IUsesCloudDataStorageMethods

// Unity.MARS.Providers.IUsesCompassHeadingMethods

// Unity.MARS.Providers.IUsesCompassHeadingMethods

// Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods

// Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods

// Unity.MARS.Providers.IUsesFaceTrackingMethods

// Unity.MARS.Providers.IUsesFaceTrackingMethods

// Unity.MARS.Providers.IUsesFacialExpressionsMethods

// Unity.MARS.Providers.IUsesFacialExpressionsMethods

// Unity.MARS.Providers.IUsesGeoLocationMethods
struct IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields
{
	// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate Unity.MARS.Providers.IUsesGeoLocationMethods::<TryGetGeoLocationAction>k__BackingField
	TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* ___U3CTryGetGeoLocationActionU3Ek__BackingField_0;
	// System.Func`1<System.Boolean> Unity.MARS.Providers.IUsesGeoLocationMethods::<TryStartServiceFunction>k__BackingField
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CTryStartServiceFunctionU3Ek__BackingField_1;
	// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::<SubscribeGeoLocationChangedAction>k__BackingField
	Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* ___U3CSubscribeGeoLocationChangedActionU3Ek__BackingField_2;
	// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::<UnsubscribeGeoLocationChangedAction>k__BackingField
	Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* ___U3CUnsubscribeGeoLocationChangedActionU3Ek__BackingField_3;
};

// Unity.MARS.Providers.IUsesGeoLocationMethods

// Unity.MARS.Providers.IUsesHitTestingMethods

// Unity.MARS.Providers.IUsesHitTestingMethods

// Unity.MARS.Data.IUsesMARSDataGenericMethods

// Unity.MARS.Data.IUsesMARSDataGenericMethods

// Unity.MARS.Data.IUsesMARSTrackableDataGenericMethods

// Unity.MARS.Data.IUsesMARSTrackableDataGenericMethods

// Unity.MARS.Providers.IUsesMarkerTrackingMethods

// Unity.MARS.Providers.IUsesMarkerTrackingMethods

// Unity.MARS.Providers.IUsesPlaneFindingMethods

// Unity.MARS.Providers.IUsesPlaneFindingMethods

// Unity.MARS.Providers.IUsesPointCloudMethods

// Unity.MARS.Providers.IUsesPointCloudMethods

// Unity.MARS.Providers.IUsesReferencePointsMethods

// Unity.MARS.Providers.IUsesReferencePointsMethods

// Unity.MARS.Providers.IUsesRemoteDataConnectionMethods

// Unity.MARS.Providers.IUsesRemoteDataConnectionMethods

// Unity.MARS.Providers.IUsesSessionControlMethods

// Unity.MARS.Providers.IUsesSessionControlMethods

// Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods

// Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods

// Unity.MARS.MARSUtils.IUsesSlowTasksMethods

// Unity.MARS.MARSUtils.IUsesSlowTasksMethods

// Unity.MARS.Landmarks.LandmarkDefinition

// Unity.MARS.Landmarks.LandmarkDefinition

// Unity.MARS.Data.MRBodyLandmarkComparer

// Unity.MARS.Data.MRBodyLandmarkComparer

// Unity.MARS.Data.MRFaceExpressionComparer

// Unity.MARS.Data.MRFaceExpressionComparer

// Unity.MARS.Data.MRFaceLandmarkComparer

// Unity.MARS.Data.MRFaceLandmarkComparer

// Unity.MARS.Simulation.MarsTime
struct MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields
{
	// System.Single Unity.MARS.Simulation.MarsTime::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_0;
	// System.Single Unity.MARS.Simulation.MarsTime::<TimeStep>k__BackingField
	float ___U3CTimeStepU3Ek__BackingField_1;
	// System.Int32 Unity.MARS.Simulation.MarsTime::<FrameCount>k__BackingField
	int32_t ___U3CFrameCountU3Ek__BackingField_2;
	// System.Boolean Unity.MARS.Simulation.MarsTime::<Paused>k__BackingField
	bool ___U3CPausedU3Ek__BackingField_3;
	// System.Action Unity.MARS.Simulation.MarsTime::MarsUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MarsUpdate_4;
};

// Unity.MARS.Simulation.MarsTime

// Unity.MARS.Simulation.MarsTimeDelegates
struct MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields
{
	// System.Func`1<System.Single> Unity.MARS.Simulation.MarsTimeDelegates::GetTimeScale
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetTimeScale_0;
	// System.Action`1<System.Single> Unity.MARS.Simulation.MarsTimeDelegates::SetTimeScale
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___SetTimeScale_1;
	// System.Action Unity.MARS.Simulation.MarsTimeDelegates::Pause
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Pause_2;
	// System.Action Unity.MARS.Simulation.MarsTimeDelegates::Play
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Play_3;
};

// Unity.MARS.Simulation.MarsTimeDelegates

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Unity.MARS.Data.SerializedTraitRequirement

// Unity.MARS.Data.SerializedTraitRequirement

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.MARS.Data.TraitDefinition

// Unity.MARS.Data.TraitDefinition

// Unity.MARS.Query.TraitDefinitions
struct TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields
{
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Pose
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Pose_0;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Point
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Point_1;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Bounds2D
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Bounds2D_2;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Alignment
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Alignment_3;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::GeoCoordinate
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___GeoCoordinate_4;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::HeightAboveFloor
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___HeightAboveFloor_5;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Plane
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Plane_6;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Face
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Face_7;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Floor
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Floor_8;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Environment
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Environment_9;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::User
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___User_10;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::InView
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___InView_11;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::DisplayFlat
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___DisplayFlat_12;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::DisplaySpatial
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___DisplaySpatial_13;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Marker
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Marker_14;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::MarkerId
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___MarkerId_15;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::TrackingState
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___TrackingState_16;
	// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitDefinitions::Body
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___Body_17;
};

// Unity.MARS.Query.TraitDefinitions

// Unity.MARS.Query.TraitNames

// Unity.MARS.Query.TraitNames

// Unity.MARS.Query.TraitRequirement

// Unity.MARS.Query.TraitRequirement

// Unity.MARS.MARSUtils.TypeExtensions

// Unity.MARS.MARSUtils.TypeExtensions

// Unity.MARS.Providers.UsesLightEstimationMethods

// Unity.MARS.Providers.UsesLightEstimationMethods

// Unity.MARS.Providers.UsesMarsBodyTrackingMethods

// Unity.MARS.Providers.UsesMarsBodyTrackingMethods

// Unity.MARS.Providers.UsesMeshesMethods

// Unity.MARS.Providers.UsesMeshesMethods

// System.ValueType

// System.ValueType

// Unity.Collections.NativeSlice`1<System.Single>

// Unity.Collections.NativeSlice`1<System.Single>

// Unity.Collections.NativeSlice`1<System.UInt64>

// Unity.Collections.NativeSlice`1<System.UInt64>

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

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

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// Unity.MARS.Attributes.EventAttribute

// Unity.MARS.Attributes.EventAttribute

// Unity.MARS.Data.GeographicCoordinate
struct GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_StaticFields
{
	// Unity.MARS.Data.GeographicCoordinate Unity.MARS.Data.GeographicCoordinate::Invalid
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 ___Invalid_0;
};

// Unity.MARS.Data.GeographicCoordinate

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

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

// UnityEngine.LocationInfo

// UnityEngine.LocationInfo

// Unity.MARS.Data.MarsTrackableId
struct MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields
{
	// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsTrackableId::k_InvalidId
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___k_InvalidId_1;
	// System.UInt64 Unity.MARS.Data.MarsTrackableId::k_StringSubIdOne
	uint64_t ___k_StringSubIdOne_2;
	// System.UInt64 Unity.MARS.Data.MarsTrackableId::s_IdTwoCounter
	uint64_t ___s_IdTwoCounter_3;
};

// Unity.MARS.Data.MarsTrackableId

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.Rendering.SphericalHarmonicsL2

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// System.Void

// System.Void

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.Single>>

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.Single>>

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.UInt64>>

// System.Nullable`1<Unity.Collections.NativeSlice`1<System.UInt64>>

// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>

// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Vector3>

// System.Nullable`1<UnityEngine.Vector3>

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.MARS.Data.GeographicBoundingBox

// Unity.MARS.Data.GeographicBoundingBox

// UnityEngine.HumanPose

// UnityEngine.HumanPose

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.MARS.Data.MRBody

// Unity.MARS.Data.MRBody

// Unity.MARS.Data.MRHitTestResult

// Unity.MARS.Data.MRHitTestResult

// Unity.MARS.Data.MRLightEstimation

// Unity.MARS.Data.MRLightEstimation

// Unity.MARS.Data.MRMarker

// Unity.MARS.Data.MRMarker

// Unity.MARS.Data.MRMesh

// Unity.MARS.Data.MRMesh

// Unity.MARS.Data.MRPlane
struct MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields
{
	// UnityEngine.Vector3[] Unity.MARS.Data.MRPlane::k_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___k_Corners_0;
};

// Unity.MARS.Data.MRPlane

// Unity.MARS.Data.MRReferencePoint

// Unity.MARS.Data.MRReferencePoint

// Unity.MARS.Data.MarsBody
struct MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_StaticFields
{
	// System.Single Unity.MARS.Data.MarsBody::BodyDefaultHeight
	float ___BodyDefaultHeight_0;
};

// Unity.MARS.Data.MarsBody

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// Unity.MARS.Data.PointCloudData

// Unity.MARS.Data.PointCloudData

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>

// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>

// System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>

// System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>

// System.Action`1<Unity.MARS.Data.GeographicCoordinate>

// System.Action`1<Unity.MARS.Data.GeographicCoordinate>

// System.Action`1<Unity.MARS.Data.IMRFace>

// System.Action`1<Unity.MARS.Data.IMRFace>

// System.Action`1<Unity.MARS.Data.IMarsBody>

// System.Action`1<Unity.MARS.Data.IMarsBody>

// System.Action`1<Unity.MARS.Data.MRBody>

// System.Action`1<Unity.MARS.Data.MRBody>

// System.Action`1<Unity.MARS.Data.MRCameraTrackingState>

// System.Action`1<Unity.MARS.Data.MRCameraTrackingState>

// System.Action`1<Unity.MARS.Data.MRLightEstimation>

// System.Action`1<Unity.MARS.Data.MRLightEstimation>

// System.Action`1<Unity.MARS.Data.MRMarker>

// System.Action`1<Unity.MARS.Data.MRMarker>

// System.Action`1<Unity.MARS.Data.MRMesh>

// System.Action`1<Unity.MARS.Data.MRMesh>

// System.Action`1<Unity.MARS.Data.MRPlane>

// System.Action`1<Unity.MARS.Data.MRPlane>

// System.Action`1<Unity.MARS.Data.MRReferencePoint>

// System.Action`1<Unity.MARS.Data.MRReferencePoint>

// System.Action`1<Unity.MARS.Data.MarsTrackableId>

// System.Action`1<Unity.MARS.Data.MarsTrackableId>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<UnityEngine.Pose>

// System.Action`1<UnityEngine.Pose>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<UnityEngine.Texture>

// System.Action`1<UnityEngine.Texture>

// System.Action`3<System.Boolean,System.Int64,System.Byte[]>

// System.Action`3<System.Boolean,System.Int64,System.Byte[]>

// System.Action`3<System.Boolean,System.Int64,System.String>

// System.Action`3<System.Boolean,System.Int64,System.String>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`1<System.Single>

// System.Func`1<System.Single>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// Unity.MARS.Data.LoadTextureCallback

// Unity.MARS.Data.LoadTextureCallback

// Unity.MARS.Data.ProgressCallback

// Unity.MARS.Data.ProgressCallback

// System.Reflection.ReflectionTypeLoadException

// System.Reflection.ReflectionTypeLoadException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate

// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_pinvoke(const HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A& unmarshaled, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_pinvoke_back(const HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke& marshaled, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A& unmarshaled);
IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_pinvoke_cleanup(HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_com(const HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A& unmarshaled, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_com_back(const HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com& marshaled, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A& unmarshaled);
IL2CPP_EXTERN_C void HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshal_com_cleanup(HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com& marshaled);

// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Nullable::Equals<System.Single>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_n1, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_n2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable::Equals<UnityEngine.Color>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___0_n1, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___1_n2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable::Equals<UnityEngine.Vector3>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___0_n1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___1_n2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable::Equals<UnityEngine.Rendering.SphericalHarmonicsL2>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF_gshared (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___0_n1, Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___1_n2, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<UnityEngine.Color>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333_gshared (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method) ;

// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single Unity.MARS.Simulation.MarsTime::get_TimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTime_get_TimeScale_m2E962E72F3177034DB79569A8E3EE18F189D4D0D (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Func`1<System.Boolean> Unity.MARS.Providers.IUsesGeoLocationMethods::get_TryStartServiceFunction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* IUsesGeoLocationMethods_get_TryStartServiceFunction_m7BA7FADA0B4E8BFA770609616A3465B5F6A913FA_inline (const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate Unity.MARS.Providers.IUsesGeoLocationMethods::get_TryGetGeoLocationAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* IUsesGeoLocationMethods_get_TryGetGeoLocationAction_m0B3A81A49F1274E8C22DB262D7DDADA369F528D3_inline (const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate::Invoke(Unity.MARS.Data.GeographicCoordinate&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_inline (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method) ;
// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::get_SubscribeGeoLocationChangedAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_SubscribeGeoLocationChangedAction_mE06113512E14F6A5AB12068587D01E5ECB2470C6_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>::Invoke(T)
inline void Action_1_Invoke_mA57F300323FB4D0DC6C32B12A1CF801A69F2CBD2_inline (Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* __this, Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7*, Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::get_UnsubscribeGeoLocationChangedAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_UnsubscribeGeoLocationChangedAction_m0F08D5E8D5F752D7E756A8CA140C5E22643A4D07_inline (const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.GeographicCoordinate::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* __this, double ___0_latitude, double ___1_longitude, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.GeographicCoordinate::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeographicCoordinate_ToString_m4B5D68B4D2C1B854BFF42C8A13AF913C2C08F520 (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsBody::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsBody_get_id_mD26A06192451A4A5DFBD394AAC6267044FAEC8D4_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsBody::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_id_mCAA85035EBF1D41CAACD8E78EA3CF40D992E376D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MarsBody::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MarsBody_get_pose_m2DD7429CB7C4068E3800BB03D0D94ECBCAB12CFB_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsBody::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_pose_m2B813E28804790DD563760AE8F36AFD6F0AF386D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.HumanPose Unity.MARS.Data.MarsBody::get_BodyPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A MarsBody_get_BodyPose_m2E9679B17F05D8AB6EADB2854534E8DBEC594F3C_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsBody::set_BodyPose(UnityEngine.HumanPose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_BodyPose_m859AD118517B9E32ACAA8B6B21929CF288063626_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ___0_value, const RuntimeMethod* method) ;
// System.Single Unity.MARS.Data.MarsBody::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MarsBody_get_Height_m5036D49E2D34BB7830444B6B99990F929667D526_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsBody::set_Height(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_Height_m0829D04A6A1DAB6EC7698F32653CF9F2AE039D6D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Single> Unity.MARS.Data.MarsBody::get_BoneLengths()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* MarsBody_get_BoneLengths_mE903398E065423E82E13AD52655F827851C0FBA8_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsBody::set_BoneLengths(System.Collections.Generic.List`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_BoneLengths_mDB0FAEC3FEC88C38745F6EFF2056F2B779E296DF_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_value, const RuntimeMethod* method) ;
// System.UInt64 Unity.MARS.Data.MarsTrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId1_m50642C6D19722D629281AB9765006218A02E2CA1_inline (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.MARS.Data.MarsTrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId2_m80BA679C20EBB0B9840CBEA0353164F926F4766C_inline (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3 (uint64_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.MarsTrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarsTrackableId_ToString_m6E2C18C910F815FBAE51B8606BE91BFF163CA003 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.MARS.Data.MarsTrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MarsTrackableId::Equals(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MarsTrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_Equals_mFDC569584967E4E50A14B25AE5C04BB38DA1E551 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsTrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTrackableId__ctor_mBAA84874FB1E29EBA74611B27062F4BC8B8AF341 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, uint64_t ___0_idOne, uint64_t ___1_idTwo, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MarsTrackableId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTrackableId__ctor_mDBDB53FAE96C41E7E4CEBD7EDBA42C3341D4BED4 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, String_t* ___0_trackableKey, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRBody::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRBody::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_id_m9F7AFDFB0D095EDC9715E093087820BAF0037386_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRBody::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRBody_get_pose_m825A277EF64F42CD7190CD293CB9953CE8DE7FA7_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRBody::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose> Unity.MARS.Data.MRBody::get_landmarkPoses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* MRBody_get_landmarkPoses_m9988464268A08FCA3A7EA3457845CE18DE973F56_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRBody::set_landmarkPoses(System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_landmarkPoses_m240B231BDEA04E63C048E2D7B58E8A15347EAF13_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect> Unity.MARS.Data.MRBody::get_landmarkBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* MRBody_get_landmarkBounds_m86D8284B6D005B6F08433554A7DCE596B13CC637_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRBody::set_landmarkBounds(System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_landmarkBounds_mF3B722F3C4099FC2D6B7BA60D2FCB4F6954198A2_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRBody::.ctor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody__ctor_m37A0D3EE5E29EAF7DBF6C088956462F90FF1F496 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) ;
// System.Int32 Unity.MARS.Data.MRBody::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRBody_GetHashCode_mC00795DD314EBBD084DB78B1404181C505765155 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRBody::Equals(Unity.MARS.Data.MRBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRBody_Equals_m62CE43309BB14AAFCAC28F48350F4DAA075DD30F (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRHitTestResult::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRHitTestResult_get_pose_m11E7DEAC66BC6F13134EB9FF5638FF0FC85D0B98_inline (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRHitTestResult::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRHitTestResult_set_pose_mBC24AFE439823A8641AA86BFB90EE333CAF6948E_inline (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRLightEstimation::Equals(Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRLightEstimation::AreLightsEqual(Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_AreLightsEqual_mD8512C886B3CA4AAB53909C0775F18E318830C67 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Nullable::Equals<System.Single>(System.Nullable`1<T>,System.Nullable`1<T>)
inline bool Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_n1, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_n2, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_gshared)(___0_n1, ___1_n2, method);
}
// System.Boolean System.Nullable::Equals<UnityEngine.Color>(System.Nullable`1<T>,System.Nullable`1<T>)
inline bool Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___0_n1, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___1_n2, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11, const RuntimeMethod*))Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_gshared)(___0_n1, ___1_n2, method);
}
// System.Boolean System.Nullable::Equals<UnityEngine.Vector3>(System.Nullable`1<T>,System.Nullable`1<T>)
inline bool Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___0_n1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___1_n2, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE, const RuntimeMethod*))Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29_gshared)(___0_n1, ___1_n2, method);
}
// System.Boolean System.Nullable::Equals<UnityEngine.Rendering.SphericalHarmonicsL2>(System.Nullable`1<T>,System.Nullable`1<T>)
inline bool Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___0_n1, Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___1_n2, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798, Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798, const RuntimeMethod*))Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF_gshared)(___0_n1, ___1_n2, method);
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_Equals_m8C9A5E388F02585711222D7E933FA950DB89C56D (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Single>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_gshared)(__this, method);
}
// System.Int32 System.Nullable`1<UnityEngine.Color>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_gshared)(__this, method);
}
// System.Int32 System.Nullable`1<UnityEngine.Vector3>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557_gshared)(__this, method);
}
// System.Int32 System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333 (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798*, const RuntimeMethod*))Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333_gshared)(__this, method);
}
// System.Int32 Unity.MARS.Data.MRLightEstimation::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRLightEstimation_GetHashCode_m232823158479E15C7D910D7B23864B5C8DD55CC5 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMarker::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_id_mB9E716CF8681FF0F268CE725C059BD28727006DA (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRMarker::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMarker_get_pose_m82EC5751E671411E326298C8DC4CF9B90E81B106 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_pose_m6D2DB181489473265977B670AB72F3C51D38CD16 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Guid Unity.MARS.Data.MRMarker::get_markerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MRMarker_get_markerId_m9D8D520FBC4A04C204A8C265DDFAF40D5A184EEB (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_markerId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_markerId_m5D650A4EEAFFD8DFDE88532C8403E9077B8B7D70 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Guid_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Unity.MARS.Data.MRMarker::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRMarker_get_extents_m930728073866DD92DDB3FF2F10937A52D25458E2 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_extents_m4220C0BAAB180BF267B61A157590198CB1E93BAD (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRMarker::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MRMarker_get_trackingState_m2C89AFF16B744A853170A6EFC8CA376B198E50D9_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_trackingState(Unity.MARS.Data.MARSTrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRMarker_set_trackingState_m4833888E9B780F15310C84F9D51C02B07F76CAC3_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Unity.MARS.Data.MRMarker::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* MRMarker_get_texture_mF872FA95B80AD90F677856CFAF70654E056F08CD_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMarker::set_texture(UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRMarker_set_texture_m045A485CC353A50AD1CDB2EA079E31C7F208D875_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.MRMarker::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRMarker_ToString_m09C0F541B7C7BC73C527EC7891D4B64CD196091B (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.MARS.Data.MRMarker::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRMarker_GetHashCode_m34FB1B094AF61A74D34B3079DF47C9DEBB546F97 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRMarker::Equals(Unity.MARS.Data.MRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRMarker_Equals_mB6F4A32E0E620E8DEFD27D9FEF648ABB8C0B8576 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD ___0_other, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMesh::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMesh_get_id_m275AB98C409DB81437C879F91DC10082D375DABC (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMesh::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_id_mD483B9AF017080596D93F4B51086F3A5C31F0854 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.MRMesh::get_meshType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRMesh_get_meshType_mA69EE4FC806AA517848A02664B34336674B9D044 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMesh::set_meshType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_meshType_mFCAB6FFD7F40013A83EC9B578BEE704BCB757D37 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRMesh::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMesh_get_pose_m83736F5185D1FAF38D3031DB0E7EF6BFC8CA3793 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMesh::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_pose_m15091F290BB1FFB0393820078EEE93DF86234649 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Mesh Unity.MARS.Data.MRMesh::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MRMesh_get_mesh_mF26CA4829EEDD820A9ADE8DED82F73FA4C17A1E4 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRMesh::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_mesh_m309154D17919B6DEE61A08C47C24A2B377A287DE (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRPlane::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRPlane_get_id_mF28C215D1D606A31F1A9F0AC986C47D95BFCE867 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRPlane::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_id_mDB12C0BD826797A9D39731AA3B5FD6CD6E7BBC44 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsPlaneAlignment Unity.MARS.Data.MRPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRPlane_get_alignment_mA27D487D81722DB5C2F1183F44CA86697DD824FD (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRPlane::set_alignment(Unity.MARS.Data.MarsPlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_alignment_mE4D4DA91516C21063493B8027698365CE1CDDB66 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRPlane::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_pose_m5095515C9A4DB84FAB857C98BD8308546F701131 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.MARS.Data.MRPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRPlane::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_center_m13F130D91AA997411D59727F3540F23993726E7B (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Unity.MARS.Data.MRPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRPlane::set_extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_extents_mCA62219A3764257FF514582EDC8920A6CE1F748F (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.MRPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRPlane_ToString_mF129468A3271B12F4675D7D2C242E7C9D3B29673 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.MARS.Data.MRPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRPlane_GetHashCode_m3B5100419126C9DC9E7863C065184052A692F52A (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRPlane::Equals(Unity.MARS.Data.MRPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRPlane_Equals_m7A7A097A03700B47D9D7B025ED67DCF49A8D7FCC (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToPose(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 IUsesCameraOffsetMethods_ApplyOffsetToPose_m3AF799CE778D6F2BD86AB70A78BB296D0437FE6C (RuntimeObject* ___0_obj, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToPosition(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_ApplyOffsetToPosition_mDAC0AE1DA8AEAB9EA8E6CF16F3843FA80967758D (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Bounds Unity.MARS.Data.MRPlane::GetWorldBounds(Unity.MARS.Providers.IUsesCameraOffset,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 MRPlane_GetWorldBounds_m34263928D234283C449C3F3D48A91FF1D565C68A (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, RuntimeObject* ___0_cameraOffset, float ___1_minBound, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRReferencePoint::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRReferencePoint::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.MARS.Data.MRReferencePoint::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRReferencePoint_get_pose_m1F293EE5B941455D47899F72462F1A99A9CE8440_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRReferencePoint::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRReferencePoint::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MRReferencePoint_get_trackingState_mA73687985077281066221E39932C521BB18EA0F0_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRReferencePoint::set_trackingState(Unity.MARS.Data.MARSTrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsTrackableId::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsTrackableId_Create_mF53BA3C0B4804C8132D2F72DCE9AB13DC5C9AC0F (const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.MRReferencePoint::.ctor(UnityEngine.Pose,Unity.MARS.Data.MARSTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRReferencePoint__ctor_m2932EAD2F631CB4FC083B2E8AE3695588D82A38F (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, int32_t ___1_state, const RuntimeMethod* method) ;
// System.Int32 Unity.MARS.Data.MRReferencePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRReferencePoint_GetHashCode_m82D9B5477DA1732DB4F1D2503FA197432E84CC54 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.MRReferencePoint::Equals(Unity.MARS.Data.MRReferencePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRReferencePoint_Equals_m49AF814416374EAF1C35D9E1BB05DF19D3413C4C (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71 ___0_other, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String Unity.MARS.Query.TraitRequirement::get_TraitName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraitRequirement_get_TraitName_m55B9C34C00B80FD98E543A60502DFD2432A0B074 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) ;
// System.Type Unity.MARS.Query.TraitRequirement::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TraitRequirement_get_Type_mEBA4A7C619C8E12CA840C1808A29C14335E99AC2 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.SerializedTraitRequirement::get_TraitName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Unity.MARS.Data.SerializedTraitRequirement::get_TypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Data.TraitDefinition::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, String_t* ___0_traitName, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Query.TraitRequirement::.ctor(Unity.MARS.Data.TraitDefinition,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitRequirement__ctor_m965522B16EBCF57F7151044C37E463D61715C680 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_definition, bool ___1_required, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.SerializedTraitRequirement::get_Required()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Unity.MARS.Query.TraitRequirement::.ctor(System.String,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitRequirement__ctor_m90B077E4B83AF1DA9E607A7F26DC67C66A2F8A25 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, String_t* ___0_traitName, Type_t* ___1_type, bool ___2_required, const RuntimeMethod* method) ;
// System.Boolean Unity.MARS.Data.TraitDefinition::Equals(Unity.MARS.Data.TraitDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraitDefinition_Equals_mAA35192DB430AFEF3DE220A02EF08C2EF55BCE59 (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_other, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Pose Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::GetDeviceStartingPose(Unity.MARS.Simulation.IUsesDeviceSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 IUsesDeviceSimulationSettingsMethods_GetDeviceStartingPose_m66428488EF25F05D885E4FCDD980D0AC899778E8 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.DeviceStartingPose;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::get_DeviceStartingPose() */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Bounds Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::GetEnvironmentBounds(Unity.MARS.Simulation.IUsesDeviceSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 IUsesDeviceSimulationSettingsMethods_GetEnvironmentBounds_mC87AAF280804237D1132E088B015420CA49457F0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.EnvironmentBounds;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = InterfaceFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(1 /* UnityEngine.Bounds Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::get_EnvironmentBounds() */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::GetIsMovementEnabled(Unity.MARS.Simulation.IUsesDeviceSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesDeviceSimulationSettingsMethods_GetIsMovementEnabled_m4F5E951C56BF37535A48C35416322C72D22A6800 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.IsMovementEnabled;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::get_IsMovementEnabled() */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Nullable`1<System.Single> Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::GetVoxelSizeFromEnvironment(Unity.MARS.Simulation.IUsesDeviceSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 IUsesDeviceSimulationSettingsMethods_GetVoxelSizeFromEnvironment_m077B20B30919333FF8EDC574505110A22A7F6DE6 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.VoxelSizeFromEnvironment;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2;
		L_2 = InterfaceFuncInvoker0< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 >::Invoke(3 /* System.Nullable`1<System.Single> Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::get_VoxelSizeFromEnvironment() */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::SubscribeEnvironmentChanged(Unity.MARS.Simulation.IUsesDeviceSimulationSettings,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesDeviceSimulationSettingsMethods_SubscribeEnvironmentChanged_m7ADC103D43DA9B6F6DD03257B709976B4F163EBE (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_environmentChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.EnvironmentChanged += environmentChanged;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_environmentChanged;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(4 /* System.Void Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::add_EnvironmentChanged(System.Action) */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Simulation.IUsesDeviceSimulationSettingsMethods::UnsubscribeEnvironmentChanged(Unity.MARS.Simulation.IUsesDeviceSimulationSettings,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesDeviceSimulationSettingsMethods_UnsubscribeEnvironmentChanged_m13D96F2CEAA09A946B4F77809BCD620460C0DD45 (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_environmentChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.EnvironmentChanged -= environmentChanged;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesDeviceSimulationSettings>::get_provider() */, IFunctionalitySubscriber_1_t46F0B91B40025ECC88698F3143C43A865C0F8079_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_environmentChanged;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(5 /* System.Void Unity.MARS.Simulation.IProvidesDeviceSimulationSettings::remove_EnvironmentChanged(System.Action) */, IProvidesDeviceSimulationSettings_tE8C451377C1801C83024C8B4A756491B02247A33_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// UnityEngine.Texture Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods::GetVideoFeedTexture(Unity.MARS.Simulation.IUsesSimulationVideoFeed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* IUsesSimulationVideoFeedMethods_GetVideoFeedTexture_m56D2DF3BECFB92B26A30E3FF6916E057E53311E8 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	{
		// return obj.provider.VideoFeedTexture;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesSimulationVideoFeed>::get_provider() */, IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = InterfaceFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(0 /* UnityEngine.Texture Unity.MARS.Simulation.IProvidesSimulationVideoFeed::get_VideoFeedTexture() */, IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = V_0;
		return L_3;
	}
}
// System.Single Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods::GetVideoFocalLength(Unity.MARS.Simulation.IUsesSimulationVideoFeed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IUsesSimulationVideoFeedMethods_GetVideoFocalLength_m20E2EADF3EA07B82420257DAB3927C2F7C847D58 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return obj.provider.VideoFocalLength;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesSimulationVideoFeed>::get_provider() */, IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Unity.MARS.Simulation.IProvidesSimulationVideoFeed::get_VideoFocalLength() */, IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// Unity.MARS.Data.CameraFacingDirection Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods::GetVideoFacingDirection(Unity.MARS.Simulation.IUsesSimulationVideoFeed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesSimulationVideoFeedMethods_GetVideoFacingDirection_m7711184256E1684E068321B6879B389CD7A4A009 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.VideoFacingDirection;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesSimulationVideoFeed>::get_provider() */, IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Unity.MARS.Data.CameraFacingDirection Unity.MARS.Simulation.IProvidesSimulationVideoFeed::get_VideoFacingDirection() */, IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods::SubscribeVideoFeedTextureCreated(Unity.MARS.Simulation.IUsesSimulationVideoFeed,System.Action`1<UnityEngine.Texture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSimulationVideoFeedMethods_SubscribeVideoFeedTextureCreated_mF4A9336F59273F69745A15B6949E4963D72044A8 (RuntimeObject* ___0_obj, Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* ___1_onVideoFeedTextureCreated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.VideoFeedTextureChanged += onVideoFeedTextureCreated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesSimulationVideoFeed>::get_provider() */, IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var, L_0);
		Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* L_2 = ___1_onVideoFeedTextureCreated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* >::Invoke(3 /* System.Void Unity.MARS.Simulation.IProvidesSimulationVideoFeed::add_VideoFeedTextureChanged(System.Action`1<UnityEngine.Texture>) */, IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Simulation.IUsesSimulationVideoFeedMethods::UnsubscribeVideoFeedTextureCreated(Unity.MARS.Simulation.IUsesSimulationVideoFeed,System.Action`1<UnityEngine.Texture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSimulationVideoFeedMethods_UnsubscribeVideoFeedTextureCreated_mC5E4F664B29506552DCAA52EAF077665293F775E (RuntimeObject* ___0_obj, Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* ___1_onVideoFeedTextureCreated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.VideoFeedTextureChanged -= onVideoFeedTextureCreated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Simulation.IProvidesSimulationVideoFeed>::get_provider() */, IFunctionalitySubscriber_1_t448B9B996F5127B10BE3D4A31E496CB7C47B27DF_il2cpp_TypeInfo_var, L_0);
		Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* L_2 = ___1_onVideoFeedTextureCreated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* >::Invoke(4 /* System.Void Unity.MARS.Simulation.IProvidesSimulationVideoFeed::remove_VideoFeedTextureChanged(System.Action`1<UnityEngine.Texture>) */, IProvidesSimulationVideoFeed_t17094BCCB4E13366D88898722D904F65214AD178_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Single Unity.MARS.Simulation.MarsTime::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTime_get_Time_m98D61969B2AA24C1841881919751A230735C9774 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float Time { get; internal set; }
		float L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CTimeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::set_Time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_set_Time_mD61EC98D47F551DBA2913659BD5528618A37F382 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float Time { get; internal set; }
		float L_0 = ___0_value;
		((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CTimeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single Unity.MARS.Simulation.MarsTime::get_TimeStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTime_get_TimeStep_mC189005341B02C9855E6A380E93D4C845D0B5D0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float TimeStep { get; internal set; }
		float L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CTimeStepU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::set_TimeStep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_set_TimeStep_m5AFC932278D11A6F827D7668277A718419AEB309 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float TimeStep { get; internal set; }
		float L_0 = ___0_value;
		((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CTimeStepU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 Unity.MARS.Simulation.MarsTime::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarsTime_get_FrameCount_m24CCE66F27A50C1EB093DF41C53425F4556BA84D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int FrameCount { get; internal set; }
		int32_t L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CFrameCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::set_FrameCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_set_FrameCount_mEBBFA7BDEF55F65135CC564EC2A7950BD71E432D (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int FrameCount { get; internal set; }
		int32_t L_0 = ___0_value;
		((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CFrameCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Unity.MARS.Simulation.MarsTime::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTime_get_Paused_mF2FC1955C07FE4A93CE07A264114FDE93FA10813 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Paused { get; internal set; }
		bool L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CPausedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::set_Paused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_set_Paused_m1470B9767AF900A24A79ADBBE4E898F161E3B142 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Paused { get; internal set; }
		bool L_0 = ___0_value;
		((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___U3CPausedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single Unity.MARS.Simulation.MarsTime::get_TimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTime_get_TimeScale_m2E962E72F3177034DB79569A8E3EE18F189D4D0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => MarsTimeDelegates.GetTimeScale();
		il2cpp_codegen_runtime_class_init_inline(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___GetTimeScale_0;
		NullCheck(L_0);
		float L_1;
		L_1 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::set_TimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_set_TimeScale_m7FA84A1B4E2828937414D81300B873EA82AC3A01 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => MarsTimeDelegates.SetTimeScale(value);
		il2cpp_codegen_runtime_class_init_inline(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___SetTimeScale_1;
		float L_1 = ___0_value;
		NullCheck(L_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Single Unity.MARS.Simulation.MarsTime::get_ScaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTime_get_ScaledDeltaTime_mB718C65874BC7D29FAB0F41D7BEE996C3B94B5F4 (const RuntimeMethod* method) 
{
	{
		// public static float ScaledDeltaTime => UnityEngine.Time.deltaTime * TimeScale;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_1;
		L_1 = MarsTime_get_TimeScale_m2E962E72F3177034DB79569A8E3EE18F189D4D0D(NULL);
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::add_MarsUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_add_MarsUpdate_m1162EE1100CFE51A237F3107037BBF5D55251C44 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___MarsUpdate_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___MarsUpdate_4), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::remove_MarsUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_remove_MarsUpdate_mB322088DA3E34670AAB4F8A36F10BF8A5DEDC576 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___MarsUpdate_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___MarsUpdate_4), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_Pause_mCCDC3EEE80BB188A21EE59C7A4FFE3703394656B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Pause() { MarsTimeDelegates.Pause(); }
		il2cpp_codegen_runtime_class_init_inline(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Pause_2;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// public static void Pause() { MarsTimeDelegates.Pause(); }
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_Play_mA668E4F66DFAB6FE065F9CAD57228A4856E9CC03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Play() { MarsTimeDelegates.Play(); }
		il2cpp_codegen_runtime_class_init_inline(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Play_3;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// public static void Play() { MarsTimeDelegates.Play(); }
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTime::InvokeMarsUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTime_InvokeMarsUpdate_m331CBCD659687E3B68FA6E07C8725D9E35169C67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// internal static void InvokeMarsUpdate() { MarsUpdate?.Invoke(); }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_StaticFields*)il2cpp_codegen_static_fields_for(MarsTime_tD23466022F3841C1A194AF76A36253FE710F5AC9_il2cpp_TypeInfo_var))->___MarsUpdate_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		// internal static void InvokeMarsUpdate() { MarsUpdate?.Invoke(); }
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
// System.Void Unity.MARS.Simulation.MarsTimeDelegates::ResetDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTimeDelegates_ResetDelegates_mCEFB0FD10AC6906451B3B90C322BBFB61D7FA97E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTimeScale = GetTimeScaleNoop;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_0, NULL, (intptr_t)((void*)MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___GetTimeScale_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___GetTimeScale_0), (void*)L_0);
		// SetTimeScale = SetTimeScaleNoop;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_1, NULL, (intptr_t)((void*)MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___SetTimeScale_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___SetTimeScale_1), (void*)L_1);
		// Pause = PauseNoop;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, NULL, (intptr_t)((void*)MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Pause_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Pause_2), (void*)L_2);
		// Play = PlayNoop;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, NULL, (intptr_t)((void*)MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Play_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Play_3), (void*)L_3);
		// }
		return;
	}
}
// System.Single Unity.MARS.Simulation.MarsTimeDelegates::GetTimeScaleNoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09 (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return 1f;
		V_0 = (1.0f);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.MARS.Simulation.MarsTimeDelegates::SetTimeScaleNoop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE (float ___0_timeScale, const RuntimeMethod* method) 
{
	{
		// static void SetTimeScaleNoop(float timeScale) { }
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTimeDelegates::PauseNoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8 (const RuntimeMethod* method) 
{
	{
		// static void PauseNoop() { }
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTimeDelegates::PlayNoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9 (const RuntimeMethod* method) 
{
	{
		// static void PlayNoop() { }
		return;
	}
}
// System.Void Unity.MARS.Simulation.MarsTimeDelegates::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTimeDelegates__cctor_m3FB8525EAB5E9AB332B0F33BF824299481B9F99D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<float> GetTimeScale = GetTimeScaleNoop;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_0, NULL, (intptr_t)((void*)MarsTimeDelegates_GetTimeScaleNoop_m7D35E245FDE49F8D77ABE903CF0147C86A71DD09_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___GetTimeScale_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___GetTimeScale_0), (void*)L_0);
		// public static Action<float> SetTimeScale = SetTimeScaleNoop;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_1, NULL, (intptr_t)((void*)MarsTimeDelegates_SetTimeScaleNoop_mBE6DB1E8DE5FFFFEB3429E808A5CEC9010D303AE_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___SetTimeScale_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___SetTimeScale_1), (void*)L_1);
		// public static Action Pause = PauseNoop;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, NULL, (intptr_t)((void*)MarsTimeDelegates_PauseNoop_mD71F7A7448DC048B39444B6790E96851EA9A4BC8_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Pause_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Pause_2), (void*)L_2);
		// public static Action Play = PlayNoop;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, NULL, (intptr_t)((void*)MarsTimeDelegates_PlayNoop_m52479513CDC5536D5E9F65FEFFD79DD823C1F8E9_RuntimeMethod_var), NULL);
		((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Play_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_StaticFields*)il2cpp_codegen_static_fields_for(MarsTimeDelegates_t56D6A0F2A9D0095DDC9E67CC04CD15F68D6C7958_il2cpp_TypeInfo_var))->___Play_3), (void*)L_3);
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
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::TrackBody(Unity.MARS.Providers.IUsesBodyTracking,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_TrackBody_m0534A78B9C96684C0306F3403FAAD27DA0C77EA6 (RuntimeObject* ___0_obj, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_center, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.TrackBody(center);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_center;
		NullCheck(L_1);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::TrackBody(UnityEngine.Vector2) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::GetBodies(Unity.MARS.Providers.IUsesBodyTracking,System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_GetBodies_mB3CC223BB4C5B698EA5FB03C0A122EB63A642F6B (RuntimeObject* ___0_obj, List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634* ___1_bodies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetBodies(bodies);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634* L_2 = ___1_bodies;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_tC6E19605DF49B3CCE03129F0D36563DE3975D634* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::GetBodies(System.Collections.Generic.List`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::SubscribeBodyAdded(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_SubscribeBodyAdded_m2CB6D0913E47125F12CDDE6340E4A48BE52ABD53 (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyAdded += bodyAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::add_bodyAdded(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::UnsubscribeBodyAdded(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_UnsubscribeBodyAdded_m04ACAEF98957AB52A1D419C9C00C6B9A8CE8E2F0 (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyAdded -= bodyAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::remove_bodyAdded(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::SubscribeBodyUpdated(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_SubscribeBodyUpdated_mCBAC37AFE07053B92B500CC04A99528BFEE56D4A (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyUpdated += bodyUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::add_bodyUpdated(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::UnsubscribeBodyUpdated(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_UnsubscribeBodyUpdated_m030CA41ED11C5A28AC151A0D250ABFF965730A6D (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyUpdated -= bodyUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::remove_bodyUpdated(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::SubscribeBodyRemoved(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_SubscribeBodyRemoved_mC61D196894317F23E48D40FED219847D1FB233AB (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyRemoved += bodyRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::add_bodyRemoved(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesBodyTrackingMethods::UnsubscribeBodyRemoved(Unity.MARS.Providers.IUsesBodyTracking,System.Action`1<Unity.MARS.Data.MRBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesBodyTrackingMethods_UnsubscribeBodyRemoved_m7F3A63FCC59052E4941D2D8F502DA675A53EE2B2 (RuntimeObject* ___0_obj, Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* ___1_bodyRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.bodyRemoved -= bodyRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t7D26314D5AAA0670BFAD07DCA16645AD9E6B7515_il2cpp_TypeInfo_var, L_0);
		Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* L_2 = ___1_bodyRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t4200D22817655AE828D95FB58F372DA12A5D5E75* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesBodyTracking::remove_bodyRemoved(System.Action`1<Unity.MARS.Data.MRBody>) */, IProvidesBodyTracking_t27D6D386B071615784BE19B4F249D266B774A77A_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Single Unity.MARS.Providers.IUsesCameraIntrinsicsMethods::GetFocalLength(Unity.MARS.Providers.IUsesCameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IUsesCameraIntrinsicsMethods_GetFocalLength_m67B21B5A9700CAD7C5AC57A74D4C248C86AB4F70 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return obj.provider.FocalLength;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraIntrinsics>::get_provider() */, IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.MARS.Providers.IProvidesCameraIntrinsics::get_FocalLength() */, IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Nullable`1<System.Single> Unity.MARS.Providers.IUsesCameraIntrinsicsMethods::GetFieldOfView(Unity.MARS.Providers.IUsesCameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 IUsesCameraIntrinsicsMethods_GetFieldOfView_mD9C30F76CDBE747E5159B44991F34385014DA98C (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.GetFieldOfView();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraIntrinsics>::get_provider() */, IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2;
		L_2 = InterfaceFuncInvoker0< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 >::Invoke(1 /* System.Nullable`1<System.Single> Unity.MARS.Providers.IProvidesCameraIntrinsics::GetFieldOfView() */, IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraIntrinsicsMethods::SubscribeFieldOfViewUpdated(Unity.MARS.Providers.IUsesCameraIntrinsics,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraIntrinsicsMethods_SubscribeFieldOfViewUpdated_mCCB53DC478A72C177A999C6C5842F68C0DC73F98 (RuntimeObject* ___0_obj, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___1_fieldOfViewUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FieldOfViewUpdated += fieldOfViewUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraIntrinsics>::get_provider() */, IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var, L_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = ___1_fieldOfViewUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesCameraIntrinsics::add_FieldOfViewUpdated(System.Action`1<System.Single>) */, IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraIntrinsicsMethods::UnsubscribeFieldOfViewUpdated(Unity.MARS.Providers.IUsesCameraIntrinsics,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraIntrinsicsMethods_UnsubscribeFieldOfViewUpdated_m12FD30F4790DA28147B07D0C163DCEBB8E201D24 (RuntimeObject* ___0_obj, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___1_fieldOfViewUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FieldOfViewUpdated -= fieldOfViewUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraIntrinsics>::get_provider() */, IFunctionalitySubscriber_1_t035076563EE340D517BE1CB52A08E6AEE78C7EF0_il2cpp_TypeInfo_var, L_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = ___1_fieldOfViewUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesCameraIntrinsics::remove_FieldOfViewUpdated(System.Action`1<System.Single>) */, IProvidesCameraIntrinsics_tC3147037C3BD1187A7EBB4F3DC4D2F516F66C6AD_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::GetCameraPositionOffset(Unity.MARS.Providers.IUsesCameraOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_GetCameraPositionOffset_mE25315A760C4B79CD1E4EFDF9A30C0FFCD26A06A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.cameraPositionOffset;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 Unity.MARS.Providers.IProvidesCameraOffset::get_cameraPositionOffset() */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraOffsetMethods::SetCameraPositionOffset(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraOffsetMethods_SetCameraPositionOffset_m97B1F2E2AD9C8AE2C2B8D9D859033DCBCBFC411A (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.cameraPositionOffset = offset;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_offset;
		NullCheck(L_1);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesCameraOffset::set_cameraPositionOffset(UnityEngine.Vector3) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Single Unity.MARS.Providers.IUsesCameraOffsetMethods::GetCameraYawOffset(Unity.MARS.Providers.IUsesCameraOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IUsesCameraOffsetMethods_GetCameraYawOffset_m3D7560FF5E0B0836A4D0A136EB5B13F2692940DB (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return obj.provider.cameraYawOffset;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Unity.MARS.Providers.IProvidesCameraOffset::get_cameraYawOffset() */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraOffsetMethods::SetCameraYawOffset(Unity.MARS.Providers.IUsesCameraOffset,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraOffsetMethods_SetCameraYawOffset_m36FF45C016DA79F73E88C63EB1BDCF4EC69D6390 (RuntimeObject* ___0_obj, float ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.cameraYawOffset = offset;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		float L_2 = ___1_offset;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesCameraOffset::set_cameraYawOffset(System.Single) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Single Unity.MARS.Providers.IUsesCameraOffsetMethods::GetCameraScale(Unity.MARS.Providers.IUsesCameraOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IUsesCameraOffsetMethods_GetCameraScale_m5683F524E6C8221A39223488B679337024C94E82 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return obj.provider.cameraScale;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Unity.MARS.Providers.IProvidesCameraOffset::get_cameraScale() */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraOffsetMethods::SetCameraScale(Unity.MARS.Providers.IUsesCameraOffset,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraOffsetMethods_SetCameraScale_mC87B3533B61DB881D9CFF2DABBC3BEACC34C4E4C (RuntimeObject* ___0_obj, float ___1_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.cameraScale = scale;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		float L_2 = ___1_scale;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesCameraOffset::set_cameraScale(System.Single) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Unity.MARS.Providers.IUsesCameraOffsetMethods::GetCameraOffsetMatrix(Unity.MARS.Providers.IUsesCameraOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 IUsesCameraOffsetMethods_GetCameraOffsetMatrix_m404FCFC68879D87C719B22ACBEB24EB9D61AB505 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.CameraOffsetMatrix;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(6 /* UnityEngine.Matrix4x4 Unity.MARS.Providers.IProvidesCameraOffset::get_CameraOffsetMatrix() */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Pose Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToPose(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 IUsesCameraOffsetMethods_ApplyOffsetToPose_m3AF799CE778D6F2BD86AB70A78BB296D0437FE6C (RuntimeObject* ___0_obj, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyOffsetToPose(pose);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___1_pose;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(7 /* UnityEngine.Pose Unity.MARS.Providers.IProvidesCameraOffset::ApplyOffsetToPose(UnityEngine.Pose) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Pose Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyInverseOffsetToPose(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 IUsesCameraOffsetMethods_ApplyInverseOffsetToPose_mA6D2E98773BFA74E7F5849410657E13BB9545608 (RuntimeObject* ___0_obj, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyInverseOffsetToPose(pose);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___1_pose;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(8 /* UnityEngine.Pose Unity.MARS.Providers.IProvidesCameraOffset::ApplyInverseOffsetToPose(UnityEngine.Pose) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToPosition(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_ApplyOffsetToPosition_mDAC0AE1DA8AEAB9EA8E6CF16F3843FA80967758D (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyOffsetToPosition(position);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_position;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(9 /* UnityEngine.Vector3 Unity.MARS.Providers.IProvidesCameraOffset::ApplyOffsetToPosition(UnityEngine.Vector3) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyInverseOffsetToPosition(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_ApplyInverseOffsetToPosition_mB0971466A17DDAB0D9467B20BAC4DEDC8DA4157E (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyInverseOffsetToPosition(position);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_position;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* UnityEngine.Vector3 Unity.MARS.Providers.IProvidesCameraOffset::ApplyInverseOffsetToPosition(UnityEngine.Vector3) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToDirection(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_ApplyOffsetToDirection_m1463FB48C88D542AB10E0E8B103358648504B43C (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyOffsetToDirection(direction);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_direction;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(11 /* UnityEngine.Vector3 Unity.MARS.Providers.IProvidesCameraOffset::ApplyOffsetToDirection(UnityEngine.Vector3) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyInverseOffsetToDirection(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IUsesCameraOffsetMethods_ApplyInverseOffsetToDirection_m7A146ADCD60622CF323BFBCD6EE4763B28C54860 (RuntimeObject* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyInverseOffsetToDirection(direction);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_direction;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(12 /* UnityEngine.Vector3 Unity.MARS.Providers.IProvidesCameraOffset::ApplyInverseOffsetToDirection(UnityEngine.Vector3) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyOffsetToRotation(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IUsesCameraOffsetMethods_ApplyOffsetToRotation_mCD974B043C337558531ED9AA4ACC1EDC78F6CE2A (RuntimeObject* ___0_obj, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyOffsetToRotation(rotation);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = InterfaceFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(13 /* UnityEngine.Quaternion Unity.MARS.Providers.IProvidesCameraOffset::ApplyOffsetToRotation(UnityEngine.Quaternion) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion Unity.MARS.Providers.IUsesCameraOffsetMethods::ApplyInverseOffsetToRotation(Unity.MARS.Providers.IUsesCameraOffset,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IUsesCameraOffsetMethods_ApplyInverseOffsetToRotation_m10BAF8C7D4CFDA386CB200594331754826AFDFCE (RuntimeObject* ___0_obj, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.ApplyInverseOffsetToRotation(rotation);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraOffset>::get_provider() */, IFunctionalitySubscriber_1_tD02BDB435F42AE466B2AE7E9E192351E75580E6C_il2cpp_TypeInfo_var, L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = InterfaceFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(14 /* UnityEngine.Quaternion Unity.MARS.Providers.IProvidesCameraOffset::ApplyInverseOffsetToRotation(UnityEngine.Quaternion) */, IProvidesCameraOffset_t109CF6192BDF1C5D2196E752F4FAA9F4FE39D28B_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
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
// UnityEngine.Pose Unity.MARS.Providers.IUsesCameraPoseMethods::GetPose(Unity.MARS.Providers.IUsesCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 IUsesCameraPoseMethods_GetPose_m5E1EC826841C2B15CAF78CCB5D381A6E2723315D (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.GetCameraPose();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraPose>::get_provider() */, IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Unity.MARS.Providers.IProvidesCameraPose::GetCameraPose() */, IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraPoseMethods::SubscribePoseUpdated(Unity.MARS.Providers.IUsesCameraPose,System.Action`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraPoseMethods_SubscribePoseUpdated_m7AE46A3F5D2AEDE8AB2992B79A3EFC3A57DE6B94 (RuntimeObject* ___0_obj, Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* ___1_poseUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.poseUpdated += poseUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraPose>::get_provider() */, IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var, L_0);
		Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* L_2 = ___1_poseUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesCameraPose::add_poseUpdated(System.Action`1<UnityEngine.Pose>) */, IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraPoseMethods::UnsubscribePoseUpdated(Unity.MARS.Providers.IUsesCameraPose,System.Action`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraPoseMethods_UnsubscribePoseUpdated_mE7421685FC57F28195A36916F8D4E11C96DE92D2 (RuntimeObject* ___0_obj, Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* ___1_poseUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.poseUpdated -= poseUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraPose>::get_provider() */, IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var, L_0);
		Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* L_2 = ___1_poseUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t62C38AF61BFF03BE1DB5E1C54773DC9975D958CD* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesCameraPose::remove_poseUpdated(System.Action`1<UnityEngine.Pose>) */, IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraPoseMethods::SubscribeTrackingTypeChanged(Unity.MARS.Providers.IUsesCameraPose,System.Action`1<Unity.MARS.Data.MRCameraTrackingState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraPoseMethods_SubscribeTrackingTypeChanged_mD19A05D01E5A53E9AE6D357C2A7EBEA3B5F0BB05 (RuntimeObject* ___0_obj, Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* ___1_trackingTypeChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.trackingStateChanged += trackingTypeChanged;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraPose>::get_provider() */, IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var, L_0);
		Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* L_2 = ___1_trackingTypeChanged;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesCameraPose::add_trackingStateChanged(System.Action`1<Unity.MARS.Data.MRCameraTrackingState>) */, IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraPoseMethods::UnsubscribeTrackingTypeChanged(Unity.MARS.Providers.IUsesCameraPose,System.Action`1<Unity.MARS.Data.MRCameraTrackingState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraPoseMethods_UnsubscribeTrackingTypeChanged_m7E1BD4B62551B8AAF665E64F0B7187F07ACE786B (RuntimeObject* ___0_obj, Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* ___1_trackingTypeChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.trackingStateChanged -= trackingTypeChanged;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraPose>::get_provider() */, IFunctionalitySubscriber_1_t53E13AE330CC6CFBD7D175F222C9EA5016CAE068_il2cpp_TypeInfo_var, L_0);
		Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* L_2 = ___1_trackingTypeChanged;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t5D1F8F06268B746B09035FD776A68465B61FBC44* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesCameraPose::remove_trackingStateChanged(System.Action`1<Unity.MARS.Data.MRCameraTrackingState>) */, IProvidesCameraPose_t56CB1C01F9EDF8D0317A08005863C7861D81DE1E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Nullable`1<UnityEngine.Matrix4x4> Unity.MARS.Providers.IUsesCameraProjectionMatrixMethods::GetProjectionMatrix(Unity.MARS.Providers.IUsesCameraProjectionMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA IUsesCameraProjectionMatrixMethods_GetProjectionMatrix_mACE569E7D2FA99F07FD0C650640E2C8B98725E80 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1CA747042D18C41F5E4CE31066A1EDCFAF82943B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraProjectionMatrix_t6E431FC6CB80720DE7B43AD5B293CAACCA0BB58B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj.provider.GetProjectionMatrix();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraProjectionMatrix>::get_provider() */, IFunctionalitySubscriber_1_t1CA747042D18C41F5E4CE31066A1EDCFAF82943B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_2;
		L_2 = InterfaceFuncInvoker0< Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA >::Invoke(0 /* System.Nullable`1<UnityEngine.Matrix4x4> Unity.MARS.Providers.IProvidesCameraProjectionMatrix::GetProjectionMatrix() */, IProvidesCameraProjectionMatrix_t6E431FC6CB80720DE7B43AD5B293CAACCA0BB58B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_3 = V_0;
		return L_3;
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
// Unity.MARS.Data.CameraFacingDirection Unity.MARS.Providers.IUsesCameraTextureMethods::GetCameraFacingDirection(Unity.MARS.Providers.IUsesCameraTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesCameraTextureMethods_GetCameraFacingDirection_m81D917A5E844FA320601B64CA5180A31E249C9F0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.CameraFacingDirection;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraTexture>::get_provider() */, IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.MARS.Data.CameraFacingDirection Unity.MARS.Providers.IProvidesCameraTexture::get_CameraFacingDirection() */, IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Texture Unity.MARS.Providers.IUsesCameraTextureMethods::GetCameraTexture(Unity.MARS.Providers.IUsesCameraTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* IUsesCameraTextureMethods_GetCameraTexture_m9CB5EAA5A4DF4CC216183DB12FA963793C69555A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	{
		// return obj.provider.GetCameraTexture();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraTexture>::get_provider() */, IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = InterfaceFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(1 /* UnityEngine.Texture Unity.MARS.Providers.IProvidesCameraTexture::GetCameraTexture() */, IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCameraTextureMethods::RequestCameraFacingDirection(Unity.MARS.Providers.IUsesCameraTexture,Unity.MARS.Data.CameraFacingDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCameraTextureMethods_RequestCameraFacingDirection_mCFE0F84312A3052CE34FC7EA4A8541DFB9FE8907 (RuntimeObject* ___0_obj, int32_t ___1_facingDirection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.RequestCameraFacingDirection(facingDirection);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCameraTexture>::get_provider() */, IFunctionalitySubscriber_1_t9BAFE2B98E4867868D770E3DDCE05C5E8FC468A9_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___1_facingDirection;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesCameraTexture::RequestCameraFacingDirection(Unity.MARS.Data.CameraFacingDirection) */, IProvidesCameraTexture_tD59FB57FB561CE5E2B201CF1667DFC5752613CE4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Boolean Unity.MARS.Providers.IUsesCloudDataStorageMethods::IsConnected(Unity.MARS.Providers.IUsesCloudDataStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesCloudDataStorageMethods_IsConnected_m63D7EB1667279BB2978538D71652915E2A129ECB (RuntimeObject* ___0_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return user.provider.IsConnected();
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.MARS.Providers.IProvidesCloudDataStorage::IsConnected() */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::SetAPIKey(Unity.MARS.Providers.IUsesCloudDataStorage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_SetAPIKey_m5D79168A55E5414682306C4775D0816EE9A6F072 (RuntimeObject* ___0_user, String_t* ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.SetAPIKey(token);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_token;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::SetAPIKey(System.String) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.String Unity.MARS.Providers.IUsesCloudDataStorageMethods::GetAPIKey(Unity.MARS.Providers.IUsesCloudDataStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IUsesCloudDataStorageMethods_GetAPIKey_m0D30DBDFFC2108EB4CF476EA5128594E171E61D7 (RuntimeObject* ___0_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return user.provider.GetAPIKey();
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.MARS.Providers.IProvidesCloudDataStorage::GetAPIKey() */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::SetProjectIdentifier(Unity.MARS.Providers.IUsesCloudDataStorage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_SetProjectIdentifier_m8F3AD324A5BD995FD50EB82A0491A60A31FEA652 (RuntimeObject* ___0_user, String_t* ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.SetProjectIdentifier(id);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_id;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::SetProjectIdentifier(System.String) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.String Unity.MARS.Providers.IUsesCloudDataStorageMethods::GetProjectIdentifier(Unity.MARS.Providers.IUsesCloudDataStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IUsesCloudDataStorageMethods_GetProjectIdentifier_m03EE8C44C7C5527C0CE8018A833CA01CD8780827 (RuntimeObject* ___0_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return user.provider.GetProjectIdentifier();
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String Unity.MARS.Providers.IProvidesCloudDataStorage::GetProjectIdentifier() */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::CloudSaveAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,System.String,System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_CloudSaveAsync_m470C0513E62DCFC4DCBE07BAE35446DA523153DD (RuntimeObject* ___0_user, String_t* ___1_key, String_t* ___2_serializedObject, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* ___3_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___4_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.CloudSaveAsync(key, serializedObject, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_key;
		String_t* L_3 = ___2_serializedObject;
		Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* L_4 = ___3_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_5 = ___4_progress;
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, String_t*, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::CloudSaveAsync(System.String,System.String,System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::CloudLoadAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_CloudLoadAsync_mF81022BDC610D78D88CE38B5539744A0D1242E68 (RuntimeObject* ___0_user, String_t* ___1_key, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* ___2_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___3_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.CloudLoadAsync(key, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_key;
		Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* L_3 = ___2_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_4 = ___3_progress;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::CloudLoadAsync(System.String,System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::CloudSaveAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,System.Byte[],System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_CloudSaveAsync_mABE131B3DD3B4E6D7A60FB6755A03818088FAF7F (RuntimeObject* ___0_user, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_bytes, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* ___3_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___4_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.CloudSaveAsync(key, bytes, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_bytes;
		Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083* L_4 = ___3_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_5 = ___4_progress;
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Action_3_t91FB1534293A9DFB961B7E74F959B27FD1EDD083*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::CloudSaveAsync(System.String,System.Byte[],System.Action`3<System.Boolean,System.Int64,System.String>,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::CloudLoadAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,System.Action`3<System.Boolean,System.Int64,System.Byte[]>,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_CloudLoadAsync_m863D6AA0EAB94AE0B8FC5E74B063E80F22F238D9 (RuntimeObject* ___0_user, String_t* ___1_key, Action_3_tACB18C5EE92DA0B0B11206186FC5DAF01CEB7BEF* ___2_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___3_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.CloudLoadAsync(key, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_key;
		Action_3_tACB18C5EE92DA0B0B11206186FC5DAF01CEB7BEF* L_3 = ___2_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_4 = ___3_progress;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, Action_3_tACB18C5EE92DA0B0B11206186FC5DAF01CEB7BEF*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(8 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::CloudLoadAsync(System.String,System.Action`3<System.Boolean,System.Int64,System.Byte[]>,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::CloudLoadTextureAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,Unity.MARS.Data.LoadTextureCallback,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_CloudLoadTextureAsync_mB7F32C931F34E1933E1CF42B4B5127167216025F (RuntimeObject* ___0_user, String_t* ___1_key, LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* ___2_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___3_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.CloudLoadTextureAsync(key, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_key;
		LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* L_3 = ___2_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_4 = ___3_progress;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(9 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::CloudLoadTextureAsync(System.String,Unity.MARS.Data.LoadTextureCallback,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCloudDataStorageMethods::LoadLocalTextureAsync(Unity.MARS.Providers.IUsesCloudDataStorage,System.String,Unity.MARS.Data.LoadTextureCallback,Unity.MARS.Data.ProgressCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCloudDataStorageMethods_LoadLocalTextureAsync_m3ADD5533606D5E65464D1215E3434D915DBE16D7 (RuntimeObject* ___0_user, String_t* ___1_path, LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* ___2_callback, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* ___3_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.LoadLocalTextureAsync(path, callback, progress);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCloudDataStorage>::get_provider() */, IFunctionalitySubscriber_1_t898E5D025E7D581397A7A7DD7C9C8396C68E1317_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___1_path;
		LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* L_3 = ___2_callback;
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* L_4 = ___3_progress;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905*, ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* >::Invoke(10 /* System.Void Unity.MARS.Providers.IProvidesCloudDataStorage::LoadLocalTextureAsync(System.String,Unity.MARS.Data.LoadTextureCallback,Unity.MARS.Data.ProgressCallback) */, IProvidesCloudDataStorage_t710DE62D99D8662B2E3C0B61A492698A83EDB43E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
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
// System.Single Unity.MARS.Providers.IUsesCompassHeadingMethods::GetHeading(Unity.MARS.Providers.IUsesCompassHeading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IUsesCompassHeadingMethods_GetHeading_mD1F7FBB1891CA0B0C4DF8700B4C2343197A320D1 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return obj.provider.GetHeading();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCompassHeading>::get_provider() */, IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Unity.MARS.Providers.IProvidesCompassHeading::GetHeading() */, IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesCompassHeadingMethods::SubscribeHeadingUpdated(Unity.MARS.Providers.IUsesCompassHeading,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCompassHeadingMethods_SubscribeHeadingUpdated_m6C6C44F70FACA8D98D59AA2E4F0C986CB7DF446B (RuntimeObject* ___0_obj, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___1_headingUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.headingUpdated += headingUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCompassHeading>::get_provider() */, IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var, L_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = ___1_headingUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesCompassHeading::add_headingUpdated(System.Action`1<System.Single>) */, IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesCompassHeadingMethods::UnsubscribeHeadingUpdated(Unity.MARS.Providers.IUsesCompassHeading,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesCompassHeadingMethods_UnsubscribeHeadingUpdated_m7142B05F43B4777BE9B922DAB69F4F8DA6434547 (RuntimeObject* ___0_obj, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___1_headingUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.headingUpdated -= headingUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesCompassHeading>::get_provider() */, IFunctionalitySubscriber_1_tCF90BAF8A454008A0F79CF9D1576AB2CF2F1C909_il2cpp_TypeInfo_var, L_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = ___1_headingUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesCompassHeading::remove_headingUpdated(System.Action`1<System.Single>) */, IProvidesCompassHeading_t07C4C698AD595CED84F3F706B61923C616225302_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Int32 Unity.MARS.Providers.IUsesFaceTrackingMethods::GetMaxFaceCount(Unity.MARS.Providers.IUsesFaceTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesFaceTrackingMethods_GetMaxFaceCount_m55DF837FC09EAB41B2F0EF4D8A81358E7DCCAC18 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.GetMaxFaceCount();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.MARS.Providers.IProvidesFaceTracking::GetMaxFaceCount() */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Unity.MARS.Providers.IUsesFaceTrackingMethods::GetRequestedMaximumFaceCount(Unity.MARS.Providers.IUsesFaceTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesFaceTrackingMethods_GetRequestedMaximumFaceCount_mA3E64C88958328172E49B89FE73155888BB19FF4 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.RequestedMaximumFaceCount;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.MARS.Providers.IProvidesFaceTracking::get_RequestedMaximumFaceCount() */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::SetRequestedMaximumFaceCount(Unity.MARS.Providers.IUsesFaceTracking,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_SetRequestedMaximumFaceCount_m2660323AAB17409BAC4D379818BD02BE62C835A7 (RuntimeObject* ___0_obj, int32_t ___1_requestedFaceCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.RequestedMaximumFaceCount = requestedFaceCount;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___1_requestedFaceCount;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::set_RequestedMaximumFaceCount(System.Int32) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Int32 Unity.MARS.Providers.IUsesFaceTrackingMethods::GetCurrentMaximumFaceCount(Unity.MARS.Providers.IUsesFaceTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesFaceTrackingMethods_GetCurrentMaximumFaceCount_m0B90C52C39EE3A02456DC63FFCC2C9FE37813DAC (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.CurrentMaximumFaceCount;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.MARS.Providers.IProvidesFaceTracking::get_CurrentMaximumFaceCount() */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Unity.MARS.Providers.IUsesFaceTrackingMethods::GetSupportedFaceCount(Unity.MARS.Providers.IUsesFaceTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IUsesFaceTrackingMethods_GetSupportedFaceCount_m38E3C8FD836A52F1162DD44B843AD0206FD6069A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return obj.provider.SupportedFaceCount;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.MARS.Providers.IProvidesFaceTracking::get_SupportedFaceCount() */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::GetFaces(Unity.MARS.Providers.IUsesFaceTracking,System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_GetFaces_m740307BCAA4BEA7DF0AA548D7F4D7A691F5D7700 (RuntimeObject* ___0_obj, List_1_tBB1066878969CD5C54E916A86382BF0FD3008405* ___1_faces, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetFaces(faces);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		List_1_tBB1066878969CD5C54E916A86382BF0FD3008405* L_2 = ___1_faces;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_tBB1066878969CD5C54E916A86382BF0FD3008405* >::Invoke(11 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::GetFaces(System.Collections.Generic.List`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::SubscribeFaceAdded(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_SubscribeFaceAdded_m4499AAC83C7697F7C1EDB9E7EAB11B7438D0E0CC (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceAdded += faceAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::add_FaceAdded(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::UnsubscribeFaceAdded(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_UnsubscribeFaceAdded_mCF7C5AB8B5F7790286A09D6DE10A4029F240638C (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceAdded -= faceAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::remove_FaceAdded(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::SubscribeFaceUpdated(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_SubscribeFaceUpdated_mE571AB0401B88395E7FB731A47C196825C1A7ABD (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceUpdated += faceUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::add_FaceUpdated(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::UnsubscribeFaceUpdated(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_UnsubscribeFaceUpdated_m60637A15E0D39ED846515E5F6CA49F754D6EF545 (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceUpdated -= faceUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(8 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::remove_FaceUpdated(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::SubscribeFaceRemoved(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_SubscribeFaceRemoved_m9FC0C0ACA907B7356C572DF9DC2F373D3DA21E1D (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceRemoved += faceRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(9 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::add_FaceRemoved(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFaceTrackingMethods::UnsubscribeFaceRemoved(Unity.MARS.Providers.IUsesFaceTracking,System.Action`1<Unity.MARS.Data.IMRFace>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFaceTrackingMethods_UnsubscribeFaceRemoved_mFE0FFD140CE8C6D81C862E006D52333A46EED3E2 (RuntimeObject* ___0_obj, Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* ___1_faceRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.FaceRemoved -= faceRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFaceTracking>::get_provider() */, IFunctionalitySubscriber_1_t4172DAE57F6355FC3F0BA74216C9BF0696357758_il2cpp_TypeInfo_var, L_0);
		Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* L_2 = ___1_faceRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t8C5A3B8F3ECA53B236649FFD09317A4944A5200D* >::Invoke(10 /* System.Void Unity.MARS.Providers.IProvidesFaceTracking::remove_FaceRemoved(System.Action`1<Unity.MARS.Data.IMRFace>) */, IProvidesFaceTracking_tBAC4FA1C9158D2C0A27BF369EF983731DB437BA3_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Void Unity.MARS.Providers.IUsesFacialExpressionsMethods::SubscribeToExpression(Unity.MARS.Providers.IUsesFacialExpressions,Unity.MARS.Data.MRFaceExpression,System.Action`1<System.Single>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFacialExpressionsMethods_SubscribeToExpression_mECE15BD074871BF1F746B260C53B6F0006D60E7E (RuntimeObject* ___0_obj, int32_t ___1_expression, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___2_onEngage, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___3_onDisengage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tFD17A700143756BA84705A787524B84F7FC4311C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFacialExpressions_t7E4942B25D91D45F7C36A701C9D7D7915EAC06ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.SubscribeToExpression(expression, onEngage, onDisengage);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFacialExpressions>::get_provider() */, IFunctionalitySubscriber_1_tFD17A700143756BA84705A787524B84F7FC4311C_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___1_expression;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___2_onEngage;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = ___3_onDisengage;
		NullCheck(L_1);
		InterfaceActionInvoker3< int32_t, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesFacialExpressions::SubscribeToExpression(Unity.MARS.Data.MRFaceExpression,System.Action`1<System.Single>,System.Action`1<System.Single>) */, IProvidesFacialExpressions_t7E4942B25D91D45F7C36A701C9D7D7915EAC06ED_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesFacialExpressionsMethods::UnsubscribeToExpression(Unity.MARS.Providers.IUsesFacialExpressions,Unity.MARS.Data.MRFaceExpression,System.Action`1<System.Single>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFacialExpressionsMethods_UnsubscribeToExpression_m5C00EB70CD85A440BB4D08927A3A0A72DAC68E87 (RuntimeObject* ___0_obj, int32_t ___1_expression, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___2_onEngage, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___3_onDisengage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tFD17A700143756BA84705A787524B84F7FC4311C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFacialExpressions_t7E4942B25D91D45F7C36A701C9D7D7915EAC06ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.UnsubscribeToExpression(expression, onEngage, onDisengage);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesFacialExpressions>::get_provider() */, IFunctionalitySubscriber_1_tFD17A700143756BA84705A787524B84F7FC4311C_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___1_expression;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___2_onEngage;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = ___3_onDisengage;
		NullCheck(L_1);
		InterfaceActionInvoker3< int32_t, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesFacialExpressions::UnsubscribeToExpression(Unity.MARS.Data.MRFaceExpression,System.Action`1<System.Single>,System.Action`1<System.Single>) */, IProvidesFacialExpressions_t7E4942B25D91D45F7C36A701C9D7D7915EAC06ED_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
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
// Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate Unity.MARS.Providers.IUsesGeoLocationMethods::get_TryGetGeoLocationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* IUsesGeoLocationMethods_get_TryGetGeoLocationAction_m0B3A81A49F1274E8C22DB262D7DDADA369F528D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TryGetGeoLocationDelegate TryGetGeoLocationAction { private get; set; }
		TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryGetGeoLocationActionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::set_TryGetGeoLocationAction(Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_set_TryGetGeoLocationAction_m5BFCFA1BCF3B3F5DB0281C711910B0D2CE4D60FD (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TryGetGeoLocationDelegate TryGetGeoLocationAction { private get; set; }
		TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* L_0 = ___0_value;
		((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryGetGeoLocationActionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryGetGeoLocationActionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Func`1<System.Boolean> Unity.MARS.Providers.IUsesGeoLocationMethods::get_TryStartServiceFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* IUsesGeoLocationMethods_get_TryStartServiceFunction_m7BA7FADA0B4E8BFA770609616A3465B5F6A913FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<bool> TryStartServiceFunction { private get; set; }
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryStartServiceFunctionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::set_TryStartServiceFunction(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_set_TryStartServiceFunction_m0680F5C4B211091B848C346D4319D29132D5D512 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<bool> TryStartServiceFunction { private get; set; }
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___0_value;
		((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryStartServiceFunctionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryStartServiceFunctionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::get_SubscribeGeoLocationChangedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_SubscribeGeoLocationChangedAction_mE06113512E14F6A5AB12068587D01E5ECB2470C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> SubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CSubscribeGeoLocationChangedActionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::set_SubscribeGeoLocationChangedAction(System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_set_SubscribeGeoLocationChangedAction_mDC18E9FCF9783431186A214BA0A8E6BC3FA85D5D (Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> SubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ___0_value;
		((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CSubscribeGeoLocationChangedActionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CSubscribeGeoLocationChangedActionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>> Unity.MARS.Providers.IUsesGeoLocationMethods::get_UnsubscribeGeoLocationChangedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_UnsubscribeGeoLocationChangedAction_m0F08D5E8D5F752D7E756A8CA140C5E22643A4D07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> UnsubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CUnsubscribeGeoLocationChangedActionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::set_UnsubscribeGeoLocationChangedAction(System.Action`1<System.Action`1<Unity.MARS.Data.GeographicCoordinate>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_set_UnsubscribeGeoLocationChangedAction_m1B342C0559C5246991C9996E4AA837B2534E7A53 (Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> UnsubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ___0_value;
		((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CUnsubscribeGeoLocationChangedActionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CUnsubscribeGeoLocationChangedActionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesGeoLocationMethods::TryStartService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesGeoLocationMethods_TryStartService_m4A5C549F370D6EF47499112F1AAB32155E20B05F (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return TryStartServiceFunction();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0;
		L_0 = IUsesGeoLocationMethods_get_TryStartServiceFunction_m7BA7FADA0B4E8BFA770609616A3465B5F6A913FA_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesGeoLocationMethods::TryGetGeoLocation(Unity.MARS.Providers.IUsesGeoLocation,Unity.MARS.Data.GeographicCoordinate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesGeoLocationMethods_TryGetGeoLocation_m1FBF4209F59AAC795E2DD30FD370D38AAA136AB8 (RuntimeObject* ___0_obj, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___1_coordinate, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return TryGetGeoLocationAction(out coordinate);
		TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* L_0;
		L_0 = IUsesGeoLocationMethods_get_TryGetGeoLocationAction_m0B3A81A49F1274E8C22DB262D7DDADA369F528D3_inline(NULL);
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* L_1 = ___1_coordinate;
		NullCheck(L_0);
		bool L_2;
		L_2 = TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::SubscribeGeoLocationChanged(Unity.MARS.Providers.IUsesGeoLocation,System.Action`1<Unity.MARS.Data.GeographicCoordinate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_SubscribeGeoLocationChanged_mF6F157963AD4C9E3FBD1F3790EFA3F14EC3AE31F (RuntimeObject* ___0_obj, Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC* ___1_onChangeAction, const RuntimeMethod* method) 
{
	{
		// SubscribeGeoLocationChangedAction(onChangeAction);
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0;
		L_0 = IUsesGeoLocationMethods_get_SubscribeGeoLocationChangedAction_mE06113512E14F6A5AB12068587D01E5ECB2470C6_inline(NULL);
		Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC* L_1 = ___1_onChangeAction;
		NullCheck(L_0);
		Action_1_Invoke_mA57F300323FB4D0DC6C32B12A1CF801A69F2CBD2_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods::UnsubscribeGeoLocationChanged(Unity.MARS.Providers.IUsesGeoLocation,System.Action`1<Unity.MARS.Data.GeographicCoordinate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesGeoLocationMethods_UnsubscribeGeoLocationChanged_m4E048F2D167632F64836F2CEF52C2837805D12D2 (RuntimeObject* ___0_obj, Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC* ___1_onChangeAction, const RuntimeMethod* method) 
{
	{
		// UnsubscribeGeoLocationChangedAction(onChangeAction);
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0;
		L_0 = IUsesGeoLocationMethods_get_UnsubscribeGeoLocationChangedAction_m0F08D5E8D5F752D7E756A8CA140C5E22643A4D07_inline(NULL);
		Action_1_t4BCF8F4637A03EAAE7A2969035C3DB77ED2B83EC* L_1 = ___1_onChangeAction;
		NullCheck(L_0);
		Action_1_Invoke_mA57F300323FB4D0DC6C32B12A1CF801A69F2CBD2_inline(L_0, L_1, NULL);
		// }
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
bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_Multicast(TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* currentDelegate = reinterpret_cast<TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_coordinate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenInst(TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_coordinate, method);
}
bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenStatic(TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_coordinate, method);
}
bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenStaticInvoker(TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_coordinate);
}
bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_ClosedStaticInvoker(TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_coordinate);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19 (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_coordinate);

	return static_cast<bool>(returnValue);
}
// System.Void Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetGeoLocationDelegate__ctor_m83F5F8ABC292A06BFD0CE4E4EDBA4F5434AC8161 (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_Multicast;
}
// System.Boolean Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate::Invoke(Unity.MARS.Data.GeographicCoordinate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179 (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_coordinate, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate::BeginInvoke(Unity.MARS.Data.GeographicCoordinate&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetGeoLocationDelegate_BeginInvoke_m37DC94C068FDBDDD63786CE7F570592AB98AF440 (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_il2cpp_TypeInfo_var, &*___0_coordinate);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean Unity.MARS.Providers.IUsesGeoLocationMethods/TryGetGeoLocationDelegate::EndInvoke(Unity.MARS.Data.GeographicCoordinate&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetGeoLocationDelegate_EndInvoke_m57464E42076CEB11EBB1442C6A6767A5EEEA1C47 (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_coordinate,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.MARS.Providers.UsesLightEstimationMethods::TryGetLightEstimation(Unity.MARS.Providers.IUsesLightEstimation,Unity.MARS.Data.MRLightEstimation&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UsesLightEstimationMethods_TryGetLightEstimation_mE8C8847C2B06D4CB2652D6C0675C79477C9C0380 (RuntimeObject* ___0_obj, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* ___1_lightEstimation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.TryGetLightEstimation(out lightEstimation);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesLightEstimation>::get_provider() */, IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var, L_0);
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* L_2 = ___1_lightEstimation;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* >::Invoke(2 /* System.Boolean Unity.MARS.Providers.IProvidesLightEstimation::TryGetLightEstimation(Unity.MARS.Data.MRLightEstimation&) */, IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.MARS.Providers.UsesLightEstimationMethods::SubscribeLightEstimationUpdated(Unity.MARS.Providers.IUsesLightEstimation,System.Action`1<Unity.MARS.Data.MRLightEstimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesLightEstimationMethods_SubscribeLightEstimationUpdated_m45BAC29D05360602E32E15F0984EA026B89C6A82 (RuntimeObject* ___0_obj, Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* ___1_lightEstimationUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.lightEstimationUpdated += lightEstimationUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesLightEstimation>::get_provider() */, IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var, L_0);
		Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* L_2 = ___1_lightEstimationUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesLightEstimation::add_lightEstimationUpdated(System.Action`1<Unity.MARS.Data.MRLightEstimation>) */, IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesLightEstimationMethods::UnsubscribeLightEstimationUpdated(Unity.MARS.Providers.IUsesLightEstimation,System.Action`1<Unity.MARS.Data.MRLightEstimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesLightEstimationMethods_UnsubscribeLightEstimationUpdated_m21CF2B19F496E9BF4A67536B7ACE434BD41A5DE1 (RuntimeObject* ___0_obj, Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* ___1_lightEstimationUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.lightEstimationUpdated -= lightEstimationUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesLightEstimation>::get_provider() */, IFunctionalitySubscriber_1_t9FDE2E95A0C1D2CAAC9B0CAFA835FE71FF920B11_il2cpp_TypeInfo_var, L_0);
		Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* L_2 = ___1_lightEstimationUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t7114FB156FB1DDB07178BA88ADB15E1AC1A47CF6* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesLightEstimation::remove_lightEstimationUpdated(System.Action`1<Unity.MARS.Data.MRLightEstimation>) */, IProvidesLightEstimation_t5EA050B135761C1D280B57CC62D25C62652624A5_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::GetMarkers(Unity.MARS.Providers.IUsesMarkerTracking,System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_GetMarkers_mC0BF14875EBB801B1DCBE4224A66538538A6E032 (RuntimeObject* ___0_obj, List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD* ___1_markers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetMarkers(markers);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD* L_2 = ___1_markers;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t90D2B6925BC255734C492CC29AFB72542F132FAD* >::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::GetMarkers(System.Collections.Generic.List`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::SubscribeMarkerAdded(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_SubscribeMarkerAdded_mF0812268D7B9D7990A8669551583F4649C85E4F3 (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerAdded += markerAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::add_markerAdded(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::UnsubscribeMarkerAdded(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_UnsubscribeMarkerAdded_m8113AA8C1DB19C89E4BE542A546198193816C7A2 (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerAdded -= markerAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::remove_markerAdded(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::SubscribeMarkerUpdated(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_SubscribeMarkerUpdated_m5803DB47BD02F91797BD49556569BA58865FABBD (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerUpdated += markerUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::add_markerUpdated(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::UnsubscribeMarkerUpdated(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_UnsubscribeMarkerUpdated_m4C1D694706FD7172032DF452C5BABFF3DFB9966E (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerUpdated -= markerUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::remove_markerUpdated(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::SubscribeMarkerRemoved(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_SubscribeMarkerRemoved_m19796EB35347E6F5299BD520E4263008CB6E3465 (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerRemoved += markerRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::add_markerRemoved(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::UnsubscribeMarkerRemoved(Unity.MARS.Providers.IUsesMarkerTracking,System.Action`1<Unity.MARS.Data.MRMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_UnsubscribeMarkerRemoved_m6E94F2F7D09C1C0FC1D35BBAEA3C3E4270D47771 (RuntimeObject* ___0_obj, Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* ___1_markerRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.markerRemoved -= markerRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* L_2 = ___1_markerRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t560CE4D5F5CE4C45DF553689BEB5358EC51CE016* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::remove_markerRemoved(System.Action`1<Unity.MARS.Data.MRMarker>) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::StopTrackingMarkers(Unity.MARS.Providers.IUsesMarkerTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_StopTrackingMarkers_m52B8BBF1A5864361C79FBCDC4DCE8D4D86E5C38A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopTrackingMarkers();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::StopTrackingMarkers() */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesMarkerTrackingMethods::StartTrackingMarkers(Unity.MARS.Providers.IUsesMarkerTracking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesMarkerTrackingMethods_StartTrackingMarkers_m3D6196FA3594109D6D0BB94903E0A6A9DAA29EB2 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartTrackingMarkers();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Unity.MARS.Providers.IProvidesMarkerTracking::StartTrackingMarkers() */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesMarkerTrackingMethods::SetActiveMarkerLibrary(Unity.MARS.Providers.IUsesMarkerTracking,Unity.MARS.Data.IMRMarkerLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesMarkerTrackingMethods_SetActiveMarkerLibrary_m89763E8D924E0EF0255E85CE26E9E98399BC757B (RuntimeObject* ___0_obj, RuntimeObject* ___1_markerLibrary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.SetActiveMarkerLibrary(markerLibrary);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarkerTracking>::get_provider() */, IFunctionalitySubscriber_1_t11F17C275C1F9E9415459DF482F129DA8B7CC94C_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_markerLibrary;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean Unity.MARS.Providers.IProvidesMarkerTracking::SetActiveMarkerLibrary(Unity.MARS.Data.IMRMarkerLibrary) */, IProvidesMarkerTracking_t60EFF33FB4D491BBB5306399FDB989060C43FEC4_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
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
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::GetBodies(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_GetBodies_m03210A9A35ACCECD31EDA02DC9B98FD3813502DD (RuntimeObject* ___0_user, List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6* ___1_bodies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.GetBodies(bodies);
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6* L_2 = ___1_bodies;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t21CB9104F6D2D24F92B98BDD441403561990FEE6* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::GetBodies(System.Collections.Generic.List`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::SubscribeBodyAdded(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_SubscribeBodyAdded_mCF5EA24F9C8F1915EB9C33EEC24047932C6E980E (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyAdded += bodyAdded;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::add_BodyAdded(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::UnsubscribeBodyAdded(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_UnsubscribeBodyAdded_m5C25AACCE0DB4FE12463A4CEC6577AD5D6C0A7C8 (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyAdded -= bodyAdded;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::remove_BodyAdded(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::SubscribeBodyUpdated(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_SubscribeBodyUpdated_m6729730B7644C72BFFD45E840922DCC3D87492EB (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyUpdated += bodyUpdated;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::add_BodyUpdated(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::UnsubscribeBodyUpdated(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_UnsubscribeBodyUpdated_m85BB6FC999B54A21B56AA9FC236AE98BEF804497 (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyUpdated -= bodyUpdated;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::remove_BodyUpdated(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::SubscribeBodyRemoved(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_SubscribeBodyRemoved_mC8DF7F59E8FA6154CA906B056723880919408D4A (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyRemoved += bodyRemoved;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::add_BodyRemoved(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMarsBodyTrackingMethods::UnsubscribeBodyRemoved(Unity.MARS.Providers.IUsesMarsBodyTracking,System.Action`1<Unity.MARS.Data.IMarsBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMarsBodyTrackingMethods_UnsubscribeBodyRemoved_m408012511F90E07D62C24AAD73A4D0FAE6A3B61A (RuntimeObject* ___0_user, Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* ___1_bodyRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.BodyRemoved -= bodyRemoved;
		RuntimeObject* L_0 = ___0_user;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMarsBodyTracking>::get_provider() */, IFunctionalitySubscriber_1_t9DBE5E331FFD892C128155151C8ACC5BF1303DC7_il2cpp_TypeInfo_var, L_0);
		Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* L_2 = ___1_bodyRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65628BE0E6C431BDC64FB5A9713DDDC6136EC693* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesMarsBodyTracking::remove_BodyRemoved(System.Action`1<Unity.MARS.Data.IMarsBody>) */, IProvidesMarsBodyTracking_t80253DDCED0DE37EC9EF1C3AD4860E6FC238C653_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Void Unity.MARS.Providers.UsesMeshesMethods::GetMeshes(Unity.MARS.Providers.IUsesMeshes,System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_GetMeshes_mBD5C4EBD6A17727B31BBDA876DC6252414D0948C (RuntimeObject* ___0_obj, List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD* ___1_meshes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetMeshes(meshes);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD* L_2 = ___1_meshes;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t4C9ECB3A51319A9E80D9FFE7F4B7AF3A4F2C91CD* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesMeshes::GetMeshes(System.Collections.Generic.List`1<Unity.MARS.Data.MRMesh>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::SubscribeMeshAdded(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MRMesh>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_SubscribeMeshAdded_mA69BDAD494D2612C79C366820787F6A5D75360AF (RuntimeObject* ___0_obj, Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* ___1_meshAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshAdded += meshAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* L_2 = ___1_meshAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesMeshes::add_MeshAdded(System.Action`1<Unity.MARS.Data.MRMesh>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::UnsubscribeMeshAdded(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MRMesh>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_UnsubscribeMeshAdded_m877ADE2675EB1D345A5CD30E5164A52469219A1F (RuntimeObject* ___0_obj, Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* ___1_meshAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshAdded -= meshAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* L_2 = ___1_meshAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesMeshes::remove_MeshAdded(System.Action`1<Unity.MARS.Data.MRMesh>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::SubscribeMeshUpdated(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MRMesh>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_SubscribeMeshUpdated_mF0789045B0A98C29E2BFD6B3D0695A80BD00922F (RuntimeObject* ___0_obj, Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* ___1_meshUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshUpdated += meshUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* L_2 = ___1_meshUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesMeshes::add_MeshUpdated(System.Action`1<Unity.MARS.Data.MRMesh>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::UnsubscribeMeshUpdated(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MRMesh>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_UnsubscribeMeshUpdated_m3043CDE566A4F062E52F66A27E6E54125C52428E (RuntimeObject* ___0_obj, Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* ___1_meshUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshUpdated -= meshUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* L_2 = ___1_meshUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE15F853462EBFAF8400264E6462B9E1E63209433* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesMeshes::remove_MeshUpdated(System.Action`1<Unity.MARS.Data.MRMesh>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::SubscribeMeshRemoved(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MarsTrackableId>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_SubscribeMeshRemoved_mE37CA7EA588276DF259FB98CE69CFAA093CEDC8A (RuntimeObject* ___0_obj, Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* ___1_meshRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshRemoved += meshRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* L_2 = ___1_meshRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesMeshes::add_MeshRemoved(System.Action`1<Unity.MARS.Data.MarsTrackableId>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::UnsubscribeMeshRemoved(Unity.MARS.Providers.IUsesMeshes,System.Action`1<Unity.MARS.Data.MarsTrackableId>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_UnsubscribeMeshRemoved_m390C999BA49744824D07FAE8CEF5AB35677A2B74 (RuntimeObject* ___0_obj, Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* ___1_meshRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.MeshRemoved -= meshRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* L_2 = ___1_meshRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t33FEFDB4454985ADC7741D944D067A66B2AB0334* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesMeshes::remove_MeshRemoved(System.Action`1<Unity.MARS.Data.MarsTrackableId>) */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::StopDetectingMeshes(Unity.MARS.Providers.IUsesMeshes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_StopDetectingMeshes_m90CE830D7BD2F6F02974DA47A281CA3E1002633C (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopDetectingMeshes();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.MARS.Providers.IProvidesMeshes::StopDetectingMeshes() */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.UsesMeshesMethods::StartDetectingMeshes(Unity.MARS.Providers.IUsesMeshes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsesMeshesMethods_StartDetectingMeshes_mE951731A62AA93DCD4782583D6B4FDC8C8C8F564 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartDetectingMeshes();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMeshes>::get_provider() */, IFunctionalitySubscriber_1_tC605A43CD9EEDA89D4A086FD61EA8F4790919378_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesMeshes::StartDetectingMeshes() */, IProvidesMeshes_t815A3C996BAB9AD996F0635370E9EEBEB9F6C52E_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Boolean Unity.MARS.Providers.IUsesHitTestingMethods::ScreenHitTest(Unity.MARS.Providers.IUsesMRHitTesting,UnityEngine.Vector2,Unity.MARS.Data.MRHitTestResult&,Unity.MARS.Data.MRHitTestResultTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesHitTestingMethods_ScreenHitTest_mD160FADB0DEBED37D8EB17A1D075CDB505237C99 (RuntimeObject* ___0_obj, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPosition, MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* ___2_result, int32_t ___3_types, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.ScreenHitTest(screenPosition, out result, types);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMRHitTesting>::get_provider() */, IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var, L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_screenPosition;
		MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* L_3 = ___2_result;
		int32_t L_4 = ___3_types;
		NullCheck(L_1);
		bool L_5;
		L_5 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950*, int32_t >::Invoke(0 /* System.Boolean Unity.MARS.Providers.IProvidesMRHitTesting::ScreenHitTest(UnityEngine.Vector2,Unity.MARS.Data.MRHitTestResult&,Unity.MARS.Data.MRHitTestResultTypes) */, IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesHitTestingMethods::WorldHitTestHitTest(Unity.MARS.Providers.IUsesMRHitTesting,UnityEngine.Ray,Unity.MARS.Data.MRHitTestResult&,Unity.MARS.Data.MRHitTestResultTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesHitTestingMethods_WorldHitTestHitTest_m49372F615E455F0990507B7FABCAA48CA1EE67C3 (RuntimeObject* ___0_obj, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* ___2_result, int32_t ___3_types, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.WorldHitTest(ray, out result, types);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMRHitTesting>::get_provider() */, IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var, L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2 = ___1_ray;
		MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* L_3 = ___2_result;
		int32_t L_4 = ___3_types;
		NullCheck(L_1);
		bool L_5;
		L_5 = InterfaceFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950*, int32_t >::Invoke(1 /* System.Boolean Unity.MARS.Providers.IProvidesMRHitTesting::WorldHitTest(UnityEngine.Ray,Unity.MARS.Data.MRHitTestResult&,Unity.MARS.Data.MRHitTestResultTypes) */, IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.MARS.Providers.IUsesHitTestingMethods::StopHitTesting(Unity.MARS.Providers.IUsesMRHitTesting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesHitTestingMethods_StopHitTesting_m32E8F8A1EEB831DDF48D4C40FEF316C1877982E2 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopHitTesting();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMRHitTesting>::get_provider() */, IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesMRHitTesting::StopHitTesting() */, IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesHitTestingMethods::StartHitTesting(Unity.MARS.Providers.IUsesMRHitTesting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesHitTestingMethods_StartHitTesting_m3B802CC626927AF5EC1671E3CC12641B4102E6DC (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartHitTesting();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesMRHitTesting>::get_provider() */, IFunctionalitySubscriber_1_t70747FC549433E05A8C074F2B993104E05FB88CE_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesMRHitTesting::StartHitTesting() */, IProvidesMRHitTesting_t1EFD58489116FDDCF4128E2DD44296C8829F0A4E_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::GetPlanes(Unity.MARS.Providers.IUsesPlaneFinding,System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_GetPlanes_m06F8D5A6F240AEC79963681898E9F4ED154B5111 (RuntimeObject* ___0_obj, List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808* ___1_planes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetPlanes(planes);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808* L_2 = ___1_planes;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t5AE17EC7CE5FF00B4AD272814B5F1A54383E7808* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::GetPlanes(System.Collections.Generic.List`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::SubscribePlaneAdded(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_SubscribePlaneAdded_mF465A7815BB5A213B174BAE2C8ADEB57060497EF (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeAdded += planeAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::add_planeAdded(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::UnsubscribePlaneAdded(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_UnsubscribePlaneAdded_m1276C775715C7F313D72661186501542D2EEA6E1 (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeAdded -= planeAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::remove_planeAdded(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::SubscribePlaneUpdated(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_SubscribePlaneUpdated_mB8836A841BA1F85388ED32086C1430D1C6F477F4 (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeUpdated += planeUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::add_planeUpdated(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::UnsubscribePlaneUpdated(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_UnsubscribePlaneUpdated_m3A26CE8ED0E503981B73C016724BBE06158F86A9 (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeUpdated -= planeUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::remove_planeUpdated(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::SubscribePlaneRemoved(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_SubscribePlaneRemoved_m548792B7ACB6A144B344D118AAA79B76E75FB5C3 (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeRemoved += planeRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::add_planeRemoved(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::UnsubscribePlaneRemoved(Unity.MARS.Providers.IUsesPlaneFinding,System.Action`1<Unity.MARS.Data.MRPlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_UnsubscribePlaneRemoved_m02BB77EF8F5D5CB009645949C5ADABD1F05B47DD (RuntimeObject* ___0_obj, Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* ___1_planeRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.planeRemoved -= planeRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* L_2 = ___1_planeRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t74ED5A86CC649EA980694DE1A623D8B7F845B973* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::remove_planeRemoved(System.Action`1<Unity.MARS.Data.MRPlane>) */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::StopDetectingPlanes(Unity.MARS.Providers.IUsesPlaneFinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_StopDetectingPlanes_mC871A2BE09A68BFC48FD9E7647B8B28A310489A1 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopDetectingPlanes();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::StopDetectingPlanes() */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPlaneFindingMethods::StartDetectingPlanes(Unity.MARS.Providers.IUsesPlaneFinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPlaneFindingMethods_StartDetectingPlanes_m5E71609376AAEAC89B1483E967FC60788007AECA (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartDetectingPlanes();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPlaneFinding>::get_provider() */, IFunctionalitySubscriber_1_tD8234BD8145D4FFE1ACA3B467B79E00557A6D50B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.MARS.Providers.IProvidesPlaneFinding::StartDetectingPlanes() */, IProvidesPlaneFinding_t0DFFC7024F2481BF2D3E26A07112EAEB70D9B901_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData> Unity.MARS.Providers.IUsesPointCloudMethods::GetPoints(Unity.MARS.Providers.IUsesPointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979* IUsesPointCloudMethods_GetPoints_mFBCFC2459FC2D3FE35A1FD15B4060B70383587CB (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979* V_0 = NULL;
	{
		// return obj.provider.GetPoints();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPointCloud>::get_provider() */, IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979* >::Invoke(0 /* System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData> Unity.MARS.Providers.IProvidesPointCloud::GetPoints() */, IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Dictionary_2_t41D3B3AAEC4EAF3856E705A980BC2F9C1366F979* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesPointCloudMethods::SubscribePointCloudUpdated(Unity.MARS.Providers.IUsesPointCloud,System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPointCloudMethods_SubscribePointCloudUpdated_mD18342992B91DFB335B2464250F711BE5785D9A8 (RuntimeObject* ___0_obj, Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* ___1_pointCloudUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.PointCloudUpdated += pointCloudUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPointCloud>::get_provider() */, IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var, L_0);
		Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* L_2 = ___1_pointCloudUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesPointCloud::add_PointCloudUpdated(System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>) */, IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPointCloudMethods::UnsubscribePointCloudUpdated(Unity.MARS.Providers.IUsesPointCloud,System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPointCloudMethods_UnsubscribePointCloudUpdated_m7C6D4B029BA3C5C3BF734E033297AAAF854FD106 (RuntimeObject* ___0_obj, Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* ___1_pointCloudUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.PointCloudUpdated -= pointCloudUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPointCloud>::get_provider() */, IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var, L_0);
		Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* L_2 = ___1_pointCloudUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tE9823E0B197FD2102C2AE548B9EA1DD5EF0D463F* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesPointCloud::remove_PointCloudUpdated(System.Action`1<System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.PointCloudData>>) */, IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPointCloudMethods::StopDetectingPoints(Unity.MARS.Providers.IUsesPointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPointCloudMethods_StopDetectingPoints_mF2D83C3C8B3A6FC65AFFCE5E1BE477163322FCB5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopDetectingPoints();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPointCloud>::get_provider() */, IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesPointCloud::StopDetectingPoints() */, IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesPointCloudMethods::StartDetectingPoints(Unity.MARS.Providers.IUsesPointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesPointCloudMethods_StartDetectingPoints_m819B6E7773CA467755F77480CC3635FA6B781394 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartDetectingPoints();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesPointCloud>::get_provider() */, IFunctionalitySubscriber_1_tB3D7DA42A40EA64790E46CA306E28A05506BAA94_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesPointCloud::StartDetectingPoints() */, IProvidesPointCloud_t959C430BE61AE44C27FB24B20DDDD1A66EA4C323_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::GetAllReferencePoints(Unity.MARS.Providers.IUsesReferencePoints,System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_GetAllReferencePoints_m56826E0E706389DA42DD1F20431893B73A3080E1 (RuntimeObject* ___0_obj, List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444* ___1_referencePoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.GetAllReferencePoints(referencePoints);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444* L_2 = ___1_referencePoints;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_tAC23ED9F5F6E8FA2887F28A7640A535F7EAAB444* >::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::GetAllReferencePoints(System.Collections.Generic.List`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesReferencePointsMethods::TryAddReferencePoint(Unity.MARS.Providers.IUsesReferencePoints,UnityEngine.Pose,Unity.MARS.Data.MarsTrackableId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesReferencePointsMethods_TryAddReferencePoint_m1A41A04226F8B65A8A4491FA01D5F43F25777743 (RuntimeObject* ___0_obj, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* ___2_referencePointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.TryAddReferencePoint(pose, out referencePointId);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___1_pose;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* L_3 = ___2_referencePointId;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* >::Invoke(7 /* System.Boolean Unity.MARS.Providers.IProvidesReferencePoints::TryAddReferencePoint(UnityEngine.Pose,Unity.MARS.Data.MarsTrackableId&) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesReferencePointsMethods::TryGetReferencePoint(Unity.MARS.Providers.IUsesReferencePoints,Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.MRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesReferencePointsMethods_TryGetReferencePoint_mA506D348F1E667C07E05B68A5C0BF6940C830F74 (RuntimeObject* ___0_obj, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___1_referencePointId, MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* ___2_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.TryGetReferencePoint(referencePointId, out point);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2 = ___1_referencePointId;
		MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* L_3 = ___2_point;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1, MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* >::Invoke(8 /* System.Boolean Unity.MARS.Providers.IProvidesReferencePoints::TryGetReferencePoint(Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.MRReferencePoint&) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesReferencePointsMethods::TryRemoveReferencePoint(Unity.MARS.Providers.IUsesReferencePoints,Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesReferencePointsMethods_TryRemoveReferencePoint_m8B5B7EC765E2C3CB2A09F5985C3A3E08C3AD1653 (RuntimeObject* ___0_obj, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___1_referencePointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.TryRemoveReferencePoint(referencePointId);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2 = ___1_referencePointId;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 >::Invoke(9 /* System.Boolean Unity.MARS.Providers.IProvidesReferencePoints::TryRemoveReferencePoint(Unity.MARS.Data.MarsTrackableId) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::SubscribePointAdded(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_SubscribePointAdded_m3FA7F876D7379BBFAEC09E255831BF0D49ED1B51 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointAdded += pointAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(0 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::add_pointAdded(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::UnsubscribePointAdded(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_UnsubscribePointAdded_m06A0208E0576DC2D0AC4F74E20D3E8C8C4A731E8 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointAdded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointAdded -= pointAdded;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointAdded;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::remove_pointAdded(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::SubscribePointUpdated(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_SubscribePointUpdated_mEF51661FC975B72F9B02BB55D96732930F7DBB65 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointUpdated += pointUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::add_pointUpdated(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::UnsubscribePointUpdated(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_UnsubscribePointUpdated_m780777F69655F4C79861EFDF85FA75E247195C71 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointUpdated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointUpdated -= pointUpdated;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointUpdated;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::remove_pointUpdated(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::SubscribePointRemoved(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_SubscribePointRemoved_m357EFED70ABCBBD9C1A1D5BDAC78A13C9A5AD888 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointRemoved += pointRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::add_pointRemoved(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::UnsubscribePointRemoved(Unity.MARS.Providers.IUsesReferencePoints,System.Action`1<Unity.MARS.Data.MRReferencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_UnsubscribePointRemoved_mEB006ED561D0E81761A4E8CCE5FCBAD36C19BE15 (RuntimeObject* ___0_obj, Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* ___1_pointRemoved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.pointRemoved -= pointRemoved;
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* L_2 = ___1_pointRemoved;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF8B6B71EC6E1CDE795D90650A42508C8366EAA46* >::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::remove_pointRemoved(System.Action`1<Unity.MARS.Data.MRReferencePoint>) */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::StopTrackingReferencePoints(Unity.MARS.Providers.IUsesReferencePoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_StopTrackingReferencePoints_m59EC7F6030CEB458B2250D38684E154D22B2D32C (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StopTrackingReferencePoints();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::StopTrackingReferencePoints() */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesReferencePointsMethods::StartTrackingReferencePoints(Unity.MARS.Providers.IUsesReferencePoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesReferencePointsMethods_StartTrackingReferencePoints_m1FCFD306CB36F1599006785B6C82E23ECC03EF53 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.StartTrackingReferencePoints();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesReferencePoints>::get_provider() */, IFunctionalitySubscriber_1_tC1FA3ECC8B4B9A59395A6DF5E02FBAA103A7EBF3_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Unity.MARS.Providers.IProvidesReferencePoints::StartTrackingReferencePoints() */, IProvidesReferencePoints_tC3565DF2E8C6DC04A0DD150928735057D879C5C6_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Boolean Unity.MARS.Providers.IUsesRemoteDataConnectionMethods::IsConnected(Unity.MARS.Providers.IUsesRemoteDataConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesRemoteDataConnectionMethods_IsConnected_mF4EB4BE1EF4C7D269689CFC985BCB79670DDE4F5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.IsConnected();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesRemoteDataConnection>::get_provider() */, IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.MARS.Providers.IProvidesRemoteDataConnection::IsConnected() */, IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesRemoteDataConnectionMethods::ConnectRemote(Unity.MARS.Providers.IUsesRemoteDataConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesRemoteDataConnectionMethods_ConnectRemote_mB3F58D5668ADEBF76FD1F03F3CAEC5224812526E (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.ConnectRemote();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesRemoteDataConnection>::get_provider() */, IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.MARS.Providers.IProvidesRemoteDataConnection::ConnectRemote() */, IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesRemoteDataConnectionMethods::DisconnectRemote(Unity.MARS.Providers.IUsesRemoteDataConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesRemoteDataConnectionMethods_DisconnectRemote_m85C3DEE203CA17CB0F194EC95B7B58379750125E (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.DisconnectRemote();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesRemoteDataConnection>::get_provider() */, IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.MARS.Providers.IProvidesRemoteDataConnection::DisconnectRemote() */, IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesRemoteDataConnectionMethods::UpdateRemote(Unity.MARS.Providers.IUsesRemoteDataConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesRemoteDataConnectionMethods_UpdateRemote_mE0B69D12A03974B02F4F27962F19759A3C8C3870 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.UpdateRemote();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesRemoteDataConnection>::get_provider() */, IFunctionalitySubscriber_1_t3ED2699215F854018982F3D7D703526763D01318_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesRemoteDataConnection::UpdateRemote() */, IProvidesRemoteDataConnection_t4B51BD2297B7E7C55DE348ED89A28DCAB9A88858_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Boolean Unity.MARS.Providers.IUsesSessionControlMethods::SessionExists(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSessionControlMethods_SessionExists_m858A56B7CE4375EBEB46A33DCA0AB6A8B7838594 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.SessionExists();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.MARS.Providers.IProvidesSessionControl::SessionExists() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesSessionControlMethods::SessionRunning(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSessionControlMethods_SessionRunning_m70DCFF24824DAA8EEBB4D1BB3A12CF55FD1F448C (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.SessionRunning();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Unity.MARS.Providers.IProvidesSessionControl::SessionRunning() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.MARS.Providers.IUsesSessionControlMethods::SessionReady(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSessionControlMethods_SessionReady_m80FB0622C6CF4182D7E604530FA1BA05885CB9EB (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.SessionReady();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.MARS.Providers.IProvidesSessionControl::SessionReady() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Providers.IUsesSessionControlMethods::CreateSession(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSessionControlMethods_CreateSession_mD099537E9C7F8065123A8A8A29B210BC1F0B9A12 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.CreateSession();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.MARS.Providers.IProvidesSessionControl::CreateSession() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesSessionControlMethods::DestroySession(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSessionControlMethods_DestroySession_mD1948DC1E06DA96A6F3F25953459994CF1899F01 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.DestroySession();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Unity.MARS.Providers.IProvidesSessionControl::DestroySession() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesSessionControlMethods::ResetSession(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSessionControlMethods_ResetSession_mA98A3F87AB1D8E1D6E1DE0CEAC5ED95002538707 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.ResetSession();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Unity.MARS.Providers.IProvidesSessionControl::ResetSession() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesSessionControlMethods::PauseSession(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSessionControlMethods_PauseSession_m77A9FA18E4D2208E8D0C27F0F65A2EE613DFA47A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.PauseSession();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Unity.MARS.Providers.IProvidesSessionControl::PauseSession() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Unity.MARS.Providers.IUsesSessionControlMethods::ResumeSession(Unity.MARS.Providers.IUsesSessionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesSessionControlMethods_ResumeSession_m1556F0E22794C421E83451B94012621453B57157 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.provider.ResumeSession();
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.Providers.IProvidesSessionControl>::get_provider() */, IFunctionalitySubscriber_1_tBD3F6B4F15F5C645F3F4830C5A2EAAEAB465AD8B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.MARS.Providers.IProvidesSessionControl::ResumeSession() */, IProvidesSessionControl_t32495FEB0F6FCA4A15F1C027797477E7889E62FB_il2cpp_TypeInfo_var, L_1);
		// }
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
// System.Void Unity.MARS.MARSUtils.TypeExtensions::GetImplementationsOfInterface(System.Type,System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions_GetImplementationsOfInterface_mF389F6DF177A047D7387E24B9AC867E465D91C1D (Type_t* ___0_type, List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___1_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	bool V_1 = false;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	int32_t V_3 = 0;
	Assembly_t* V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	bool V_9 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B9_0 = 0;
	{
		// if (!type.IsInterface)
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0098;
	}

IL_0013:
	{
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_3;
		L_3 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_3);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4;
		L_4 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_3, NULL);
		V_0 = L_4;
		// foreach (var assembly in assemblies)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5 = V_0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0092;
	}

IL_0025:
	{
		// foreach (var assembly in assemblies)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Assembly_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
	}
	try
	{// begin try (depth: 1)
		{
			// var types = assembly.GetTypes();
			Assembly_t* L_10 = V_4;
			NullCheck(L_10);
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11;
			L_11 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(14 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_10);
			V_5 = L_11;
			// foreach (var t in types)
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_5;
			V_6 = L_12;
			V_7 = 0;
			goto IL_007d_1;
		}

IL_003f_1:
		{
			// foreach (var t in types)
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = V_6;
			int32_t L_14 = V_7;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			Type_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_8 = L_16;
			// if (type.IsAssignableFrom(t) && !t.IsInterface && !t.IsAbstract)
			Type_t* L_17 = ___0_type;
			Type_t* L_18 = V_8;
			NullCheck(L_17);
			bool L_19;
			L_19 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_17, L_18);
			if (!L_19)
			{
				goto IL_0066_1;
			}
		}
		{
			Type_t* L_20 = V_8;
			NullCheck(L_20);
			bool L_21;
			L_21 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_20, NULL);
			if (L_21)
			{
				goto IL_0066_1;
			}
		}
		{
			Type_t* L_22 = V_8;
			NullCheck(L_22);
			bool L_23;
			L_23 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_22, NULL);
			G_B9_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
			goto IL_0067_1;
		}

IL_0066_1:
		{
			G_B9_0 = 0;
		}

IL_0067_1:
		{
			V_9 = (bool)G_B9_0;
			bool L_24 = V_9;
			if (!L_24)
			{
				goto IL_0076_1;
			}
		}
		{
			// list.Add(t);
			List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_25 = ___1_list;
			Type_t* L_26 = V_8;
			NullCheck(L_25);
			List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_25, L_26, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		}

IL_0076_1:
		{
			int32_t L_27 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		}

IL_007d_1:
		{
			// foreach (var t in types)
			int32_t L_28 = V_7;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_29 = V_6;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		throw e;
	}

CATCH_0088:
	{// begin catch(System.Reflection.ReflectionTypeLoadException)
		// catch (ReflectionTypeLoadException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_008d:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0092:
	{
		// foreach (var assembly in assemblies)
		int32_t L_31 = V_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0025;
		}
	}

IL_0098:
	{
		// }
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
// System.Boolean Unity.MARS.MARSUtils.IUsesSlowTasksMethods::AddSlowTask(Unity.MARS.MARSUtils.IUsesSlowTasks,System.Action,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSlowTasksMethods_AddSlowTask_mC1788F9A08848AC89F085CC9861670EDF9973A36 (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_task, float ___2_sleepTime, bool ___3_replace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.AddSlowTask(task, sleepTime, replace);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.MARSUtils.IProvidesSlowTasks>::get_provider() */, IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_task;
		float L_3 = ___2_sleepTime;
		bool L_4 = ___3_replace;
		NullCheck(L_1);
		bool L_5;
		L_5 = InterfaceFuncInvoker3< bool, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, float, bool >::Invoke(0 /* System.Boolean Unity.MARS.MARSUtils.IProvidesSlowTasks::AddSlowTask(System.Action,System.Single,System.Boolean) */, IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Unity.MARS.MARSUtils.IUsesSlowTasksMethods::RemoveSlowTask(Unity.MARS.MARSUtils.IUsesSlowTasks,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSlowTasksMethods_RemoveSlowTask_m39BA3FBA6AF75DFCC21808B30DABB290B766EE91 (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.RemoveSlowTask(task);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.MARSUtils.IProvidesSlowTasks>::get_provider() */, IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_task;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Boolean Unity.MARS.MARSUtils.IProvidesSlowTasks::RemoveSlowTask(System.Action) */, IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Unity.MARS.MARSUtils.IUsesSlowTasksMethods::AddMarsTimeSlowTask(Unity.MARS.MARSUtils.IUsesSlowTasks,System.Action,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSlowTasksMethods_AddMarsTimeSlowTask_m9A1F049568D8D8B2FA1496723940531A34920225 (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_task, float ___2_sleepTime, bool ___3_replace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.AddMarsTimeSlowTask(task, sleepTime, replace);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.MARSUtils.IProvidesSlowTasks>::get_provider() */, IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_task;
		float L_3 = ___2_sleepTime;
		bool L_4 = ___3_replace;
		NullCheck(L_1);
		bool L_5;
		L_5 = InterfaceFuncInvoker3< bool, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, float, bool >::Invoke(2 /* System.Boolean Unity.MARS.MARSUtils.IProvidesSlowTasks::AddMarsTimeSlowTask(System.Action,System.Single,System.Boolean) */, IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Unity.MARS.MARSUtils.IUsesSlowTasksMethods::RemoveMarsTimeSlowTask(Unity.MARS.MARSUtils.IUsesSlowTasks,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IUsesSlowTasksMethods_RemoveMarsTimeSlowTask_m822198919C5DA91945FB2A1E9A6E369094E0F10E (RuntimeObject* ___0_obj, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return obj.provider.RemoveMarsTimeSlowTask(task);
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.MARS.MARSUtils.IProvidesSlowTasks>::get_provider() */, IFunctionalitySubscriber_1_t6A7F1DFF70AFFD11CE7DEA5A50BCDF3D602FD068_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_task;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(3 /* System.Boolean Unity.MARS.MARSUtils.IProvidesSlowTasks::RemoveMarsTimeSlowTask(System.Action) */, IProvidesSlowTasks_t0042725ABF6CA59B18811712D5BA089FA536CDDA_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
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
// System.Void Unity.MARS.Landmarks.LandmarkDefinition::.ctor(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LandmarkDefinition__ctor_m916CFA1E61ACAA4C54975F7DCA018E5F84CDCBD2 (LandmarkDefinition_t9032DAC1BAA1D6B4237BA06FB8C285E9CCA534CB* __this, String_t* ___0_name, Type_t* ___1_outputType, Type_t* ___2_settingsType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LandmarkDefinition(string name, Type outputType, Type settingsType = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// outputTypes = new [] { outputType };
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		Type_t* L_3 = ___1_outputType;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		__this->___outputTypes_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputTypes_1), (void*)L_2);
		// this.settingsType = settingsType;
		Type_t* L_4 = ___2_settingsType;
		__this->___settingsType_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settingsType_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void Unity.MARS.Landmarks.LandmarkDefinition::.ctor(System.String,System.Type[],System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LandmarkDefinition__ctor_m2574AA951C4A4C1DCBB55847F1959ECC5F61994E (LandmarkDefinition_t9032DAC1BAA1D6B4237BA06FB8C285E9CCA534CB* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_outputTypes, Type_t* ___2_settingsType, const RuntimeMethod* method) 
{
	{
		// public LandmarkDefinition(string name, Type[] outputTypes, Type settingsType = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// this.outputTypes = outputTypes;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___1_outputTypes;
		__this->___outputTypes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputTypes_1), (void*)L_1);
		// this.settingsType = settingsType;
		Type_t* L_2 = ___2_settingsType;
		__this->___settingsType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settingsType_2), (void*)L_2);
		// }
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
// System.Boolean Unity.MARS.Data.MRFaceExpressionComparer::Equals(Unity.MARS.Data.MRFaceExpression,Unity.MARS.Data.MRFaceExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRFaceExpressionComparer_Equals_m8F55506336698A9541483592EBCB5217E8901151 (MRFaceExpressionComparer_t496C6DF928054E0A27550581A31A70833AC3C575* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return x == y;
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.MARS.Data.MRFaceExpressionComparer::GetHashCode(Unity.MARS.Data.MRFaceExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRFaceExpressionComparer_GetHashCode_m2BD64F6FCEFD24D354973FC8AFA6375A831F2664 (MRFaceExpressionComparer_t496C6DF928054E0A27550581A31A70833AC3C575* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (int)obj;
		int32_t L_0 = ___0_obj;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.MARS.Data.MRFaceExpressionComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRFaceExpressionComparer__ctor_m59C203D45DA0D7D2FFEA89BEACF3EA75F5E9E53E (MRFaceExpressionComparer_t496C6DF928054E0A27550581A31A70833AC3C575* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.MARS.Data.GeographicCoordinate::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* __this, double ___0_latitude, double ___1_longitude, const RuntimeMethod* method) 
{
	{
		// this.latitude = latitude;
		double L_0 = ___0_latitude;
		__this->___latitude_1 = L_0;
		// this.longitude = longitude;
		double L_1 = ___1_longitude;
		__this->___longitude_2 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF_AdjustorThunk (RuntimeObject* __this, double ___0_latitude, double ___1_longitude, const RuntimeMethod* method)
{
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*>(__this + _offset);
	GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF(_thisAdjusted, ___0_latitude, ___1_longitude, method);
}
// System.String Unity.MARS.Data.GeographicCoordinate::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeographicCoordinate_ToString_m4B5D68B4D2C1B854BFF42C8A13AF913C2C08F520 (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACF4D71F8EBDA0C65915B206AFF3133754C7577);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("latitude: {0} , longitude: {1}", latitude, longitude);
		double L_0 = __this->___latitude_1;
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_1);
		double L_3 = __this->___longitude_2;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBACF4D71F8EBDA0C65915B206AFF3133754C7577, L_2, L_5, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* GeographicCoordinate_ToString_m4B5D68B4D2C1B854BFF42C8A13AF913C2C08F520_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GeographicCoordinate_ToString_m4B5D68B4D2C1B854BFF42C8A13AF913C2C08F520(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 Unity.MARS.Data.GeographicCoordinate::op_Implicit(Unity.MARS.Data.GeographicCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GeographicCoordinate_op_Implicit_m2E3612342AC5B4EBCD92A2F40BB91567400453F7 (GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 ___0_coordinate, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2((float)coordinate.latitude, (float)coordinate.longitude);
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_0 = ___0_coordinate;
		double L_1 = L_0.___latitude_1;
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_2 = ___0_coordinate;
		double L_3 = L_2.___longitude_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)L_1), ((float)L_3), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// Unity.MARS.Data.GeographicCoordinate Unity.MARS.Data.GeographicCoordinate::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 GeographicCoordinate_op_Implicit_mEE908A6ED28DDEB51AD5308FBFC3359B8EF29F26 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vec, const RuntimeMethod* method) 
{
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new GeographicCoordinate(vec.x, vec.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vec;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_vec;
		float L_3 = L_2.___y_1;
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF((&L_4), ((double)L_1), ((double)L_3), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_5 = V_0;
		return L_5;
	}
}
// Unity.MARS.Data.GeographicCoordinate Unity.MARS.Data.GeographicCoordinate::op_Implicit(UnityEngine.LocationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 GeographicCoordinate_op_Implicit_m55B7D8454A6B9AAF736ADF6EFC299675EB296408 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 ___0_location, const RuntimeMethod* method) 
{
	GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new GeographicCoordinate(location.latitude, location.longitude);
		float L_0;
		L_0 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&___0_location), NULL);
		float L_1;
		L_1 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&___0_location), NULL);
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_2;
		memset((&L_2), 0, sizeof(L_2));
		GeographicCoordinate__ctor_m323D9182901FEF6EC886E5A7BA40F932DEA24BCF((&L_2), ((double)L_0), ((double)L_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Data.GeographicCoordinate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeographicCoordinate__cctor_mD0FEA81973D070BF16E025065140C78D4A9D5F63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly GeographicCoordinate Invalid = new GeographicCoordinate();
		il2cpp_codegen_initobj((&((GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_StaticFields*)il2cpp_codegen_static_fields_for(GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9_il2cpp_TypeInfo_var))->___Invalid_0), sizeof(GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9));
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


// Conversion methods for marshalling of: Unity.MARS.Data.MarsBody
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_pinvoke(const MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45& unmarshaled, MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CBoneLengthsU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<BoneLengths>k__BackingField' of type 'MarsBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CBoneLengthsU3Ek__BackingField_5Exception, NULL);
}
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_pinvoke_back(const MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_pinvoke& marshaled, MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45& unmarshaled)
{
	Exception_t* ___U3CBoneLengthsU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<BoneLengths>k__BackingField' of type 'MarsBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CBoneLengthsU3Ek__BackingField_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MarsBody
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_pinvoke_cleanup(MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.MARS.Data.MarsBody
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_com(const MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45& unmarshaled, MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_com& marshaled)
{
	Exception_t* ___U3CBoneLengthsU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<BoneLengths>k__BackingField' of type 'MarsBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CBoneLengthsU3Ek__BackingField_5Exception, NULL);
}
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_com_back(const MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_com& marshaled, MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45& unmarshaled)
{
	Exception_t* ___U3CBoneLengthsU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<BoneLengths>k__BackingField' of type 'MarsBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CBoneLengthsU3Ek__BackingField_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MarsBody
IL2CPP_EXTERN_C void MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshal_com_cleanup(MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_marshaled_com& marshaled)
{
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsBody::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsBody_get_id_mD26A06192451A4A5DFBD394AAC6267044FAEC8D4 (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsBody_get_id_mD26A06192451A4A5DFBD394AAC6267044FAEC8D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MarsBody_get_id_mD26A06192451A4A5DFBD394AAC6267044FAEC8D4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MarsBody::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody_set_id_mCAA85035EBF1D41CAACD8E78EA3CF40D992E376D (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarsBody_set_id_mCAA85035EBF1D41CAACD8E78EA3CF40D992E376D_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsBody_set_id_mCAA85035EBF1D41CAACD8E78EA3CF40D992E376D_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MarsBody::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MarsBody_get_pose_m2DD7429CB7C4068E3800BB03D0D94ECBCAB12CFB (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MarsBody_get_pose_m2DD7429CB7C4068E3800BB03D0D94ECBCAB12CFB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MarsBody_get_pose_m2DD7429CB7C4068E3800BB03D0D94ECBCAB12CFB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MarsBody::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody_set_pose_m2B813E28804790DD563760AE8F36AFD6F0AF386D (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarsBody_set_pose_m2B813E28804790DD563760AE8F36AFD6F0AF386D_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsBody_set_pose_m2B813E28804790DD563760AE8F36AFD6F0AF386D_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.HumanPose Unity.MARS.Data.MarsBody::get_BodyPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A MarsBody_get_BodyPose_m2E9679B17F05D8AB6EADB2854534E8DBEC594F3C (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public HumanPose BodyPose { get; set; }
		HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A L_0 = __this->___U3CBodyPoseU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A MarsBody_get_BodyPose_m2E9679B17F05D8AB6EADB2854534E8DBEC594F3C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A _returnValue;
	_returnValue = MarsBody_get_BodyPose_m2E9679B17F05D8AB6EADB2854534E8DBEC594F3C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MarsBody::set_BodyPose(UnityEngine.HumanPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody_set_BodyPose_m859AD118517B9E32ACAA8B6B21929CF288063626 (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public HumanPose BodyPose { get; set; }
		HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A L_0 = ___0_value;
		__this->___U3CBodyPoseU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBodyPoseU3Ek__BackingField_3))->___muscles_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarsBody_set_BodyPose_m859AD118517B9E32ACAA8B6B21929CF288063626_AdjustorThunk (RuntimeObject* __this, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ___0_value, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsBody_set_BodyPose_m859AD118517B9E32ACAA8B6B21929CF288063626_inline(_thisAdjusted, ___0_value, method);
}
// System.Single Unity.MARS.Data.MarsBody::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarsBody_get_Height_m5036D49E2D34BB7830444B6B99990F929667D526 (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public float Height { get; set; }
		float L_0 = __this->___U3CHeightU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MarsBody_get_Height_m5036D49E2D34BB7830444B6B99990F929667D526_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	float _returnValue;
	_returnValue = MarsBody_get_Height_m5036D49E2D34BB7830444B6B99990F929667D526_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MarsBody::set_Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody_set_Height_m0829D04A6A1DAB6EC7698F32653CF9F2AE039D6D (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Height { get; set; }
		float L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarsBody_set_Height_m0829D04A6A1DAB6EC7698F32653CF9F2AE039D6D_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsBody_set_Height_m0829D04A6A1DAB6EC7698F32653CF9F2AE039D6D_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.List`1<System.Single> Unity.MARS.Data.MarsBody::get_BoneLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* MarsBody_get_BoneLengths_mE903398E065423E82E13AD52655F827851C0FBA8 (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public List<float> BoneLengths { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___U3CBoneLengthsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* MarsBody_get_BoneLengths_mE903398E065423E82E13AD52655F827851C0FBA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* _returnValue;
	_returnValue = MarsBody_get_BoneLengths_mE903398E065423E82E13AD52655F827851C0FBA8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MarsBody::set_BoneLengths(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody_set_BoneLengths_mDB0FAEC3FEC88C38745F6EFF2056F2B779E296DF (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<float> BoneLengths { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_value;
		__this->___U3CBoneLengthsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBoneLengthsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarsBody_set_BoneLengths_mDB0FAEC3FEC88C38745F6EFF2056F2B779E296DF_AdjustorThunk (RuntimeObject* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_value, const RuntimeMethod* method)
{
	MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45*>(__this + _offset);
	MarsBody_set_BoneLengths_mDB0FAEC3FEC88C38745F6EFF2056F2B779E296DF_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.MARS.Data.MarsBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsBody__cctor_m7898C7CCEF03E9DCE3D57415D2C68EB58DC26265 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float BodyDefaultHeight = 1.7216285067479f; // Estimate of the Unity default avatar height that also matches with the ARKit control rig
		((MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_StaticFields*)il2cpp_codegen_static_fields_for(MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45_il2cpp_TypeInfo_var))->___BodyDefaultHeight_0 = (1.72162855f);
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
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsTrackableId::get_InvalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsTrackableId_get_InvalidId_m94251124D63B67D4B82EA1CBFF41A53020F679EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MarsTrackableId InvalidId => k_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields*)il2cpp_codegen_static_fields_for(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var))->___k_InvalidId_1;
		return L_0;
	}
}
// System.UInt64 Unity.MARS.Data.MarsTrackableId::get_subId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId1_m50642C6D19722D629281AB9765006218A02E2CA1 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	{
		// public ulong subId1 => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t MarsTrackableId_get_subId1_m50642C6D19722D629281AB9765006218A02E2CA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = MarsTrackableId_get_subId1_m50642C6D19722D629281AB9765006218A02E2CA1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 Unity.MARS.Data.MarsTrackableId::get_subId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId2_m80BA679C20EBB0B9840CBEA0353164F926F4766C (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	{
		// public ulong subId2 => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t MarsTrackableId_get_subId2_m80BA679C20EBB0B9840CBEA0353164F926F4766C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = MarsTrackableId_get_subId2_m80BA679C20EBB0B9840CBEA0353164F926F4766C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.MARS.Data.MarsTrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarsTrackableId_ToString_m6E2C18C910F815FBAE51B8606BE91BFF163CA003 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}-{1}", m_SubId1.ToString("X16", CultureInfo.InvariantCulture),
		//     m_SubId2.ToString("X16", CultureInfo.InvariantCulture));
		uint64_t* L_0 = (&__this->___m_SubId1_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, L_1, NULL);
		uint64_t* L_3 = (&__this->___m_SubId2_5);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_5;
		L_5 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3(L_3, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_2, L_5, NULL);
		V_0 = L_6;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* MarsTrackableId_ToString_m6E2C18C910F815FBAE51B8606BE91BFF163CA003_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarsTrackableId_ToString_m6E2C18C910F815FBAE51B8606BE91BFF163CA003(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.MARS.Data.MarsTrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return m_SubId1.GetHashCode() ^ m_SubId2.GetHashCode();
		uint64_t* L_0 = (&__this->___m_SubId1_4);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->___m_SubId2_5);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MarsTrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_Equals_mFDC569584967E4E50A14B25AE5C04BB38DA1E551 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is MarsTrackableId && Equals((MarsTrackableId) obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA(__this, ((*(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*)((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*)(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*)UnBox(L_1, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MarsTrackableId_Equals_mFDC569584967E4E50A14B25AE5C04BB38DA1E551_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = MarsTrackableId_Equals_mFDC569584967E4E50A14B25AE5C04BB38DA1E551(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MarsTrackableId::Equals(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_SubId1 == other.m_SubId1 && m_SubId2 == other.m_SubId2;
		uint64_t L_0 = __this->___m_SubId1_4;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_SubId1_4;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2_5;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_SubId2_5;
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_other, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MarsTrackableId::op_Equality(Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_op_Equality_m98CAFD8B73902B06E386ACAC47E2D9F3D0AE814E (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_id1, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___1_id2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return id1.m_SubId1 == id2.m_SubId1 && id1.m_SubId2 == id2.m_SubId2;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_id1;
		uint64_t L_1 = L_0.___m_SubId1_4;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2 = ___1_id2;
		uint64_t L_3 = L_2.___m_SubId1_4;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_4 = ___0_id1;
		uint64_t L_5 = L_4.___m_SubId2_5;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_6 = ___1_id2;
		uint64_t L_7 = L_6.___m_SubId2_5;
		G_B3_0 = ((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Unity.MARS.Data.MarsTrackableId::op_Inequality(Unity.MARS.Data.MarsTrackableId,Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarsTrackableId_op_Inequality_m1044597F910AE88D59F1A01AFFB7A1110DF52053 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_id1, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___1_id2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return id1.m_SubId1 != id2.m_SubId1 || id1.m_SubId2 != id2.m_SubId2;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_id1;
		uint64_t L_1 = L_0.___m_SubId1_4;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2 = ___1_id2;
		uint64_t L_3 = L_2.___m_SubId1_4;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_4 = ___0_id1;
		uint64_t L_5 = L_4.___m_SubId2_5;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_6 = ___1_id2;
		uint64_t L_7 = L_6.___m_SubId2_5;
		G_B3_0 = ((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void Unity.MARS.Data.MarsTrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTrackableId__ctor_mBAA84874FB1E29EBA74611B27062F4BC8B8AF341 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, uint64_t ___0_idOne, uint64_t ___1_idTwo, const RuntimeMethod* method) 
{
	{
		// m_SubId1 = idOne;
		uint64_t L_0 = ___0_idOne;
		__this->___m_SubId1_4 = L_0;
		// m_SubId2 = idTwo;
		uint64_t L_1 = ___1_idTwo;
		__this->___m_SubId2_5 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MarsTrackableId__ctor_mBAA84874FB1E29EBA74611B27062F4BC8B8AF341_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_idOne, uint64_t ___1_idTwo, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	MarsTrackableId__ctor_mBAA84874FB1E29EBA74611B27062F4BC8B8AF341(_thisAdjusted, ___0_idOne, ___1_idTwo, method);
}
// System.Void Unity.MARS.Data.MarsTrackableId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTrackableId__ctor_mDBDB53FAE96C41E7E4CEBD7EDBA42C3341D4BED4 (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, String_t* ___0_trackableKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SubId1 = k_StringSubIdOne;
		il2cpp_codegen_runtime_class_init_inline(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields*)il2cpp_codegen_static_fields_for(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var))->___k_StringSubIdOne_2;
		__this->___m_SubId1_4 = L_0;
		// m_SubId2 = (ulong) trackableKey.GetHashCode();
		String_t* L_1 = ___0_trackableKey;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		__this->___m_SubId2_5 = ((int64_t)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MarsTrackableId__ctor_mDBDB53FAE96C41E7E4CEBD7EDBA42C3341D4BED4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_trackableKey, const RuntimeMethod* method)
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1*>(__this + _offset);
	MarsTrackableId__ctor_mDBDB53FAE96C41E7E4CEBD7EDBA42C3341D4BED4(_thisAdjusted, ___0_trackableKey, method);
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MarsTrackableId::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsTrackableId_Create_mF53BA3C0B4804C8132D2F72DCE9AB13DC5C9AC0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new MarsTrackableId(k_CreationSubIdOne, s_IdTwoCounter++);
		il2cpp_codegen_runtime_class_init_inline(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields*)il2cpp_codegen_static_fields_for(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var))->___s_IdTwoCounter_3;
		uint64_t L_1 = L_0;
		((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields*)il2cpp_codegen_static_fields_for(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var))->___s_IdTwoCounter_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)1)));
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		MarsTrackableId__ctor_mBAA84874FB1E29EBA74611B27062F4BC8B8AF341((&L_2), ((int64_t)(-1)), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.MARS.Data.MarsTrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarsTrackableId__cctor_m200C872096EFFF85F7E4C6EC4F84D0C98983B03F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ulong k_StringSubIdOne = 1ul;
		((MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_StaticFields*)il2cpp_codegen_static_fields_for(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var))->___k_StringSubIdOne_2 = ((int64_t)1);
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
// Conversion methods for marshalling of: Unity.MARS.Data.MRBody
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_pinvoke(const MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8& unmarshaled, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3ClandmarkPosesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<landmarkPoses>k__BackingField' of type 'MRBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3ClandmarkPosesU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_pinvoke_back(const MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_pinvoke& marshaled, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8& unmarshaled)
{
	Exception_t* ___U3ClandmarkPosesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<landmarkPoses>k__BackingField' of type 'MRBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3ClandmarkPosesU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRBody
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_pinvoke_cleanup(MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.MRBody
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_com(const MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8& unmarshaled, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_com& marshaled)
{
	Exception_t* ___U3ClandmarkPosesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<landmarkPoses>k__BackingField' of type 'MRBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3ClandmarkPosesU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_com_back(const MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_com& marshaled, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8& unmarshaled)
{
	Exception_t* ___U3ClandmarkPosesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<landmarkPoses>k__BackingField' of type 'MRBody'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3ClandmarkPosesU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRBody
IL2CPP_EXTERN_C void MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshal_com_cleanup(MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8_marshaled_com& marshaled)
{
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRBody::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRBody::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody_set_id_m9F7AFDFB0D095EDC9715E093087820BAF0037386 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRBody_set_id_m9F7AFDFB0D095EDC9715E093087820BAF0037386_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MRBody_set_id_m9F7AFDFB0D095EDC9715E093087820BAF0037386_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MRBody::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRBody_get_pose_m825A277EF64F42CD7190CD293CB9953CE8DE7FA7 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRBody_get_pose_m825A277EF64F42CD7190CD293CB9953CE8DE7FA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRBody_get_pose_m825A277EF64F42CD7190CD293CB9953CE8DE7FA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRBody::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose> Unity.MARS.Data.MRBody::get_landmarkPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* MRBody_get_landmarkPoses_m9988464268A08FCA3A7EA3457845CE18DE973F56 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Pose> landmarkPoses { get; set; }
		Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* L_0 = __this->___U3ClandmarkPosesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* MRBody_get_landmarkPoses_m9988464268A08FCA3A7EA3457845CE18DE973F56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* _returnValue;
	_returnValue = MRBody_get_landmarkPoses_m9988464268A08FCA3A7EA3457845CE18DE973F56_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRBody::set_landmarkPoses(System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody_set_landmarkPoses_m240B231BDEA04E63C048E2D7B58E8A15347EAF13 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Pose> landmarkPoses { get; set; }
		Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* L_0 = ___0_value;
		__this->___U3ClandmarkPosesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClandmarkPosesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MRBody_set_landmarkPoses_m240B231BDEA04E63C048E2D7B58E8A15347EAF13_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___0_value, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MRBody_set_landmarkPoses_m240B231BDEA04E63C048E2D7B58E8A15347EAF13_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect> Unity.MARS.Data.MRBody::get_landmarkBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* MRBody_get_landmarkBounds_m86D8284B6D005B6F08433554A7DCE596B13CC637 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Rect> landmarkBounds { get; set; }
		Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* L_0 = __this->___U3ClandmarkBoundsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* MRBody_get_landmarkBounds_m86D8284B6D005B6F08433554A7DCE596B13CC637_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* _returnValue;
	_returnValue = MRBody_get_landmarkBounds_m86D8284B6D005B6F08433554A7DCE596B13CC637_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRBody::set_landmarkBounds(System.Collections.Generic.Dictionary`2<Unity.MARS.Data.MRBodyLandmark,UnityEngine.Rect>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody_set_landmarkBounds_mF3B722F3C4099FC2D6B7BA60D2FCB4F6954198A2 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Rect> landmarkBounds { get; set; }
		Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* L_0 = ___0_value;
		__this->___U3ClandmarkBoundsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClandmarkBoundsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MRBody_set_landmarkBounds_mF3B722F3C4099FC2D6B7BA60D2FCB4F6954198A2_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___0_value, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MRBody_set_landmarkBounds_mF3B722F3C4099FC2D6B7BA60D2FCB4F6954198A2_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.MARS.Data.MRBody::.ctor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBody__ctor_m37A0D3EE5E29EAF7DBF6C088956462F90FF1F496 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) 
{
	{
		// public MRBody(Pose pose) : this()
		il2cpp_codegen_initobj(__this, sizeof(MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8));
		// this.pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_pose;
		MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD_inline(__this, L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MRBody__ctor_m37A0D3EE5E29EAF7DBF6C088956462F90FF1F496_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	MRBody__ctor_m37A0D3EE5E29EAF7DBF6C088956462F90FF1F496(_thisAdjusted, ___0_pose, method);
}
// System.Int32 Unity.MARS.Data.MRBody::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRBody_GetHashCode_mC00795DD314EBBD084DB78B1404181C505765155 (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80((&V_0), NULL);
		V_1 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MRBody_GetHashCode_mC00795DD314EBBD084DB78B1404181C505765155_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRBody_GetHashCode_mC00795DD314EBBD084DB78B1404181C505765155(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRBody::Equals(Unity.MARS.Data.MRBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRBody_Equals_m62CE43309BB14AAFCAC28F48350F4DAA075DD30F (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8 ___0_other, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// public bool Equals(MRBody other) { return id.Equals(other.id); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline(__this, NULL);
		V_0 = L_0;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1;
		L_1 = MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline((&___0_other), NULL);
		bool L_2;
		L_2 = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA((&V_0), L_1, NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// public bool Equals(MRBody other) { return id.Equals(other.id); }
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MRBody_Equals_m62CE43309BB14AAFCAC28F48350F4DAA075DD30F_AdjustorThunk (RuntimeObject* __this, MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8 ___0_other, const RuntimeMethod* method)
{
	MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRBody_Equals_m62CE43309BB14AAFCAC28F48350F4DAA075DD30F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.MARS.Data.MRBodyLandmarkComparer::Equals(Unity.MARS.Data.MRBodyLandmark,Unity.MARS.Data.MRBodyLandmark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRBodyLandmarkComparer_Equals_mBC902843790941784529C1A24214DFFC6ED1D5A2 (MRBodyLandmarkComparer_t3ABF574C944A14330BF18AD3D208E423514411B0* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return x == y;
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.MARS.Data.MRBodyLandmarkComparer::GetHashCode(Unity.MARS.Data.MRBodyLandmark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRBodyLandmarkComparer_GetHashCode_mDE821D6E2C53C4C439F271BC47485419ADE1C593 (MRBodyLandmarkComparer_t3ABF574C944A14330BF18AD3D208E423514411B0* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (int)obj;
		int32_t L_0 = ___0_obj;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.MARS.Data.MRBodyLandmarkComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRBodyLandmarkComparer__ctor_m157A13C643D42ADF12F18E0A0035FE034F146B32 (MRBodyLandmarkComparer_t3ABF574C944A14330BF18AD3D208E423514411B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Unity.MARS.Data.MRFaceLandmarkComparer::Equals(Unity.MARS.Data.MRFaceLandmark,Unity.MARS.Data.MRFaceLandmark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRFaceLandmarkComparer_Equals_mDEC3CFFA07415D0385301DFEA5918EE765887670 (MRFaceLandmarkComparer_t71AAFD6BD63147304700DF84B24BFDA474E06FFB* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return x == y;
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.MARS.Data.MRFaceLandmarkComparer::GetHashCode(Unity.MARS.Data.MRFaceLandmark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRFaceLandmarkComparer_GetHashCode_m7423698BC8141ACF41D449D590A2253C3EDA3DA4 (MRFaceLandmarkComparer_t71AAFD6BD63147304700DF84B24BFDA474E06FFB* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (int)obj;
		int32_t L_0 = ___0_obj;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.MARS.Data.MRFaceLandmarkComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRFaceLandmarkComparer__ctor_m4EAE9CCE2851B8B236ABCE9A97AB0F3214C82665 (MRFaceLandmarkComparer_t71AAFD6BD63147304700DF84B24BFDA474E06FFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Pose Unity.MARS.Data.MRHitTestResult::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRHitTestResult_get_pose_m11E7DEAC66BC6F13134EB9FF5638FF0FC85D0B98 (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRHitTestResult_get_pose_m11E7DEAC66BC6F13134EB9FF5638FF0FC85D0B98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRHitTestResult_get_pose_m11E7DEAC66BC6F13134EB9FF5638FF0FC85D0B98_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRHitTestResult::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRHitTestResult_set_pose_mBC24AFE439823A8641AA86BFB90EE333CAF6948E (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRHitTestResult_set_pose_mBC24AFE439823A8641AA86BFB90EE333CAF6948E_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950*>(__this + _offset);
	MRHitTestResult_set_pose_mBC24AFE439823A8641AA86BFB90EE333CAF6948E_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MARS.Data.MRLightEstimation
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_pinvoke(const MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F& unmarshaled, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_AmbientBrightness_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AmbientBrightness' of type 'MRLightEstimation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AmbientBrightness_0Exception, NULL);
}
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_pinvoke_back(const MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_pinvoke& marshaled, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F& unmarshaled)
{
	Exception_t* ___m_AmbientBrightness_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AmbientBrightness' of type 'MRLightEstimation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AmbientBrightness_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRLightEstimation
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_pinvoke_cleanup(MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.MRLightEstimation
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_com(const MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F& unmarshaled, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_com& marshaled)
{
	Exception_t* ___m_AmbientBrightness_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AmbientBrightness' of type 'MRLightEstimation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AmbientBrightness_0Exception, NULL);
}
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_com_back(const MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_com& marshaled, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F& unmarshaled)
{
	Exception_t* ___m_AmbientBrightness_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AmbientBrightness' of type 'MRLightEstimation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AmbientBrightness_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRLightEstimation
IL2CPP_EXTERN_C void MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshal_com_cleanup(MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_marshaled_com& marshaled)
{
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::AreLightsEqual(Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_AreLightsEqual_mD8512C886B3CA4AAB53909C0775F18E318830C67 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Equals(other);
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_0 = ___0_other;
		bool L_1;
		L_1 = MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool MRLightEstimation_AreLightsEqual_mD8512C886B3CA4AAB53909C0775F18E318830C67_AdjustorThunk (RuntimeObject* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method)
{
	MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRLightEstimation_AreLightsEqual_mD8512C886B3CA4AAB53909C0775F18E318830C67(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::Equals(Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B10_0 = 0;
	{
		// return Nullable.Equals(m_AmbientBrightness, other.m_AmbientBrightness)
		//     && Nullable.Equals(m_AmbientColorTemperature, other.m_AmbientColorTemperature)
		//     && Nullable.Equals(m_AmbientIntensityInLumens, other.m_AmbientIntensityInLumens)
		//     && Nullable.Equals(m_ColorCorrection, other.m_ColorCorrection)
		//     && Nullable.Equals(m_MainLightBrightness, other.m_MainLightBrightness)
		//     && Nullable.Equals(m_MainLightColor, other.m_MainLightColor)
		//     && Nullable.Equals(m_MainLightDirection, other.m_MainLightDirection)
		//     && Nullable.Equals(m_MainLightIntensityLumens, other.m_MainLightIntensityLumens)
		//     && Nullable.Equals(m_SphericalHarmonics, other.m_SphericalHarmonics);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = __this->___m_AmbientBrightness_0;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_1 = ___0_other;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2 = L_1.___m_AmbientBrightness_0;
		bool L_3;
		L_3 = Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD(L_0, L_2, Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4 = __this->___m_AmbientColorTemperature_1;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_5 = ___0_other;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_6 = L_5.___m_AmbientColorTemperature_1;
		bool L_7;
		L_7 = Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD(L_4, L_6, Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_8 = __this->___m_AmbientIntensityInLumens_2;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_9 = ___0_other;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_10 = L_9.___m_AmbientIntensityInLumens_2;
		bool L_11;
		L_11 = Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD(L_8, L_10, Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_12 = __this->___m_ColorCorrection_3;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_13 = ___0_other;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_14 = L_13.___m_ColorCorrection_3;
		bool L_15;
		L_15 = Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E(L_12, L_14, Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_16 = __this->___m_MainLightBrightness_4;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_17 = ___0_other;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_18 = L_17.___m_MainLightBrightness_4;
		bool L_19;
		L_19 = Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD(L_16, L_18, Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_20 = __this->___m_MainLightColor_5;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_21 = ___0_other;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_22 = L_21.___m_MainLightColor_5;
		bool L_23;
		L_23 = Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E(L_20, L_22, Nullable_Equals_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m493E84CA5238666678DF2A0DBFFE041385A31B4E_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_24 = __this->___m_MainLightDirection_6;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_25 = ___0_other;
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_26 = L_25.___m_MainLightDirection_6;
		bool L_27;
		L_27 = Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29(L_24, L_26, Nullable_Equals_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m201081D0AFFA05B4D42D5E5C21CB7BCF06128A29_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_28 = __this->___m_MainLightIntensityLumens_7;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_29 = ___0_other;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_30 = L_29.___m_MainLightIntensityLumens_7;
		bool L_31;
		L_31 = Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD(L_28, L_30, Nullable_Equals_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m99E197829E49F73ABC538524E9152679515E6CAD_RuntimeMethod_var);
		if (!L_31)
		{
			goto IL_00b2;
		}
	}
	{
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 L_32 = __this->___m_SphericalHarmonics_8;
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_33 = ___0_other;
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 L_34 = L_33.___m_SphericalHarmonics_8;
		bool L_35;
		L_35 = Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF(L_32, L_34, Nullable_Equals_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m0F161733D925325BDFCC532667B594DE82E248EF_RuntimeMethod_var);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B10_0 = 0;
	}

IL_00b3:
	{
		V_0 = (bool)G_B10_0;
		goto IL_00b6;
	}

IL_00b6:
	{
		// }
		bool L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C  bool MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304_AdjustorThunk (RuntimeObject* __this, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_other, const RuntimeMethod* method)
{
	MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_Equals_m8C9A5E388F02585711222D7E933FA950DB89C56D (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is MRLightEstimation other && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*)((MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*)(MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*)UnBox(L_1, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F_il2cpp_TypeInfo_var))));
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_2 = V_0;
		bool L_3;
		L_3 = MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool MRLightEstimation_Equals_m8C9A5E388F02585711222D7E933FA950DB89C56D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRLightEstimation_Equals_m8C9A5E388F02585711222D7E933FA950DB89C56D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 Unity.MARS.Data.MRLightEstimation::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRLightEstimation_GetHashCode_m232823158479E15C7D910D7B23864B5C8DD55CC5 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var hashCode = m_AmbientBrightness.GetHashCode();
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (&__this->___m_AmbientBrightness_0);
		int32_t L_1;
		L_1 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(L_0, Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		V_0 = L_1;
		// hashCode = (hashCode * 397) ^ m_AmbientColorTemperature.GetHashCode();
		int32_t L_2 = V_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (&__this->___m_AmbientColorTemperature_1);
		int32_t L_4;
		L_4 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(L_3, Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		// hashCode = (hashCode * 397) ^ m_AmbientIntensityInLumens.GetHashCode();
		int32_t L_5 = V_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_6 = (&__this->___m_AmbientIntensityInLumens_2);
		int32_t L_7;
		L_7 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(L_6, Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		// hashCode = (hashCode * 397) ^ m_ColorCorrection.GetHashCode();
		int32_t L_8 = V_0;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* L_9 = (&__this->___m_ColorCorrection_3);
		int32_t L_10;
		L_10 = Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2(L_9, Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		// hashCode = (hashCode * 397) ^ m_MainLightBrightness.GetHashCode();
		int32_t L_11 = V_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_12 = (&__this->___m_MainLightBrightness_4);
		int32_t L_13;
		L_13 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(L_12, Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		// hashCode = (hashCode * 397) ^ m_MainLightColor.GetHashCode();
		int32_t L_14 = V_0;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* L_15 = (&__this->___m_MainLightColor_5);
		int32_t L_16;
		L_16 = Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2(L_15, Nullable_1_GetHashCode_mD30D29559D957788CE35B5006644744363B32FF2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		// hashCode = (hashCode * 397) ^ m_MainLightDirection.GetHashCode();
		int32_t L_17 = V_0;
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* L_18 = (&__this->___m_MainLightDirection_6);
		int32_t L_19;
		L_19 = Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557(L_18, Nullable_1_GetHashCode_m227C575741A94AD13A579C43DCA1903F57DE6557_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		// hashCode = (hashCode * 397) ^ m_MainLightIntensityLumens.GetHashCode();
		int32_t L_20 = V_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_21 = (&__this->___m_MainLightIntensityLumens_7);
		int32_t L_22;
		L_22 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(L_21, Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		// hashCode = (hashCode * 397) ^ m_SphericalHarmonics.GetHashCode();
		int32_t L_23 = V_0;
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* L_24 = (&__this->___m_SphericalHarmonics_8);
		int32_t L_25;
		L_25 = Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333(L_24, Nullable_1_GetHashCode_mF0F6D2E50AEB6A5BC90615F44476418FD534C333_RuntimeMethod_var);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		// return hashCode;
		int32_t L_26 = V_0;
		V_1 = L_26;
		goto IL_00e8;
	}

IL_00e8:
	{
		// }
		int32_t L_27 = V_1;
		return L_27;
	}
}
IL2CPP_EXTERN_C  int32_t MRLightEstimation_GetHashCode_m232823158479E15C7D910D7B23864B5C8DD55CC5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRLightEstimation_GetHashCode_m232823158479E15C7D910D7B23864B5C8DD55CC5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::op_Equality(Unity.MARS.Data.MRLightEstimation,Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_op_Equality_m777DBA7A441C4EB062A206DFC44D503E3B907315 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_left, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___1_right, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return left.Equals(right);
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_0 = ___1_right;
		bool L_1;
		L_1 = MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304((&___0_left), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.MARS.Data.MRLightEstimation::op_Inequality(Unity.MARS.Data.MRLightEstimation,Unity.MARS.Data.MRLightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRLightEstimation_op_Inequality_mB861A2E02F8FCB4D05C33B41B262C68A15B1BB73 (MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___0_left, MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F ___1_right, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !left.Equals(right);
		MRLightEstimation_t32BFC06E8C3F390419BED7CB55172AED5164B13F L_0 = ___1_right;
		bool L_1;
		L_1 = MRLightEstimation_Equals_m5A032DC7E940B430EA92D3F8C35F61D75B69E304((&___0_left), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
// Conversion methods for marshalling of: Unity.MARS.Data.MRMarker
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_pinvoke(const MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD& unmarshaled, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Texture_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'MRMarker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_5Exception, NULL);
}
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_pinvoke_back(const MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_pinvoke& marshaled, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD& unmarshaled)
{
	Exception_t* ___m_Texture_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'MRMarker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRMarker
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_pinvoke_cleanup(MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.MRMarker
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_com(const MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD& unmarshaled, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_com& marshaled)
{
	Exception_t* ___m_Texture_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'MRMarker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_5Exception, NULL);
}
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_com_back(const MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_com& marshaled, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD& unmarshaled)
{
	Exception_t* ___m_Texture_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'MRMarker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRMarker
IL2CPP_EXTERN_C void MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshal_com_cleanup(MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD_marshaled_com& marshaled)
{
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMarker::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_TrackableId; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___m_TrackableId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TrackableId; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_id_mB9E716CF8681FF0F268CE725C059BD28727006DA (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_TrackableId = value; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___m_TrackableId_0 = L_0;
		// set { m_TrackableId = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_id_mB9E716CF8681FF0F268CE725C059BD28727006DA_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_id_mB9E716CF8681FF0F268CE725C059BD28727006DA(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MRMarker::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMarker_get_pose_m82EC5751E671411E326298C8DC4CF9B90E81B106 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMarker_get_pose_m82EC5751E671411E326298C8DC4CF9B90E81B106_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRMarker_get_pose_m82EC5751E671411E326298C8DC4CF9B90E81B106(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_pose_m6D2DB181489473265977B670AB72F3C51D38CD16 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Pose = value; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_Pose_1 = L_0;
		// set { m_Pose = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_pose_m6D2DB181489473265977B670AB72F3C51D38CD16_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_pose_m6D2DB181489473265977B670AB72F3C51D38CD16(_thisAdjusted, ___0_value, method);
}
// System.Guid Unity.MARS.Data.MRMarker::get_markerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MRMarker_get_markerId_m9D8D520FBC4A04C204A8C265DDFAF40D5A184EEB (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_MarkerId; }
		Guid_t L_0 = __this->___m_MarkerId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MarkerId; }
		Guid_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Guid_t MRMarker_get_markerId_m9D8D520FBC4A04C204A8C265DDFAF40D5A184EEB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	Guid_t _returnValue;
	_returnValue = MRMarker_get_markerId_m9D8D520FBC4A04C204A8C265DDFAF40D5A184EEB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_markerId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_markerId_m5D650A4EEAFFD8DFDE88532C8403E9077B8B7D70 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Guid_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_MarkerId = value; }
		Guid_t L_0 = ___0_value;
		__this->___m_MarkerId_2 = L_0;
		// set { m_MarkerId = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_markerId_m5D650A4EEAFFD8DFDE88532C8403E9077B8B7D70_AdjustorThunk (RuntimeObject* __this, Guid_t ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_markerId_m5D650A4EEAFFD8DFDE88532C8403E9077B8B7D70(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2 Unity.MARS.Data.MRMarker::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRMarker_get_extents_m930728073866DD92DDB3FF2F10937A52D25458E2 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Extents; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Extents_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Extents; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRMarker_get_extents_m930728073866DD92DDB3FF2F10937A52D25458E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = MRMarker_get_extents_m930728073866DD92DDB3FF2F10937A52D25458E2(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_extents_m4220C0BAAB180BF267B61A157590198CB1E93BAD (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Extents = value; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_Extents_3 = L_0;
		// set { m_Extents = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_extents_m4220C0BAAB180BF267B61A157590198CB1E93BAD_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_extents_m4220C0BAAB180BF267B61A157590198CB1E93BAD(_thisAdjusted, ___0_value, method);
}
// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRMarker::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRMarker_get_trackingState_m2C89AFF16B744A853170A6EFC8CA376B198E50D9 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MRMarker_get_trackingState_m2C89AFF16B744A853170A6EFC8CA376B198E50D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRMarker_get_trackingState_m2C89AFF16B744A853170A6EFC8CA376B198E50D9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_trackingState(Unity.MARS.Data.MARSTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_trackingState_m4833888E9B780F15310C84F9D51C02B07F76CAC3 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_TrackingState = value;
		int32_t L_0 = ___0_value;
		__this->___m_TrackingState_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_trackingState_m4833888E9B780F15310C84F9D51C02B07F76CAC3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_trackingState_m4833888E9B780F15310C84F9D51C02B07F76CAC3_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Texture2D Unity.MARS.Data.MRMarker::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* MRMarker_get_texture_mF872FA95B80AD90F677856CFAF70654E056F08CD (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* MRMarker_get_texture_mF872FA95B80AD90F677856CFAF70654E056F08CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _returnValue;
	_returnValue = MRMarker_get_texture_mF872FA95B80AD90F677856CFAF70654E056F08CD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMarker::set_texture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMarker_set_texture_m045A485CC353A50AD1CDB2EA079E31C7F208D875 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Texture = value;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_value;
		__this->___m_Texture_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MRMarker_set_texture_m045A485CC353A50AD1CDB2EA079E31C7F208D875_AdjustorThunk (RuntimeObject* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	MRMarker_set_texture_m045A485CC353A50AD1CDB2EA079E31C7F208D875_inline(_thisAdjusted, ___0_value, method);
}
// System.String Unity.MARS.Data.MRMarker::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRMarker_ToString_m09C0F541B7C7BC73C527EC7891D4B64CD196091B (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MARSTrackingState_tF4F1A9A80C41F9B8D3C75EBAE88097C70132D9B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EDD2A398E7E7ED8B6C2CD07762D81D9ACFA461);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"marker: {m_MarkerId}\npose: {m_Pose},\ntracking state: {m_TrackingState}";
		Guid_t L_0 = __this->___m_MarkerId_2;
		Guid_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Guid_t_il2cpp_TypeInfo_var, &L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = __this->___m_Pose_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = L_3;
		RuntimeObject* L_5 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_TrackingState_4;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(MARSTrackingState_tF4F1A9A80C41F9B8D3C75EBAE88097C70132D9B6_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralE5EDD2A398E7E7ED8B6C2CD07762D81D9ACFA461, L_2, L_5, L_8, NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		String_t* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* MRMarker_ToString_m09C0F541B7C7BC73C527EC7891D4B64CD196091B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MRMarker_ToString_m09C0F541B7C7BC73C527EC7891D4B64CD196091B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.MARS.Data.MRMarker::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRMarker_GetHashCode_m34FB1B094AF61A74D34B3079DF47C9DEBB546F97 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80((&V_0), NULL);
		V_1 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MRMarker_GetHashCode_m34FB1B094AF61A74D34B3079DF47C9DEBB546F97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRMarker_GetHashCode_m34FB1B094AF61A74D34B3079DF47C9DEBB546F97(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRMarker::Equals(Unity.MARS.Data.MRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRMarker_Equals_mB6F4A32E0E620E8DEFD27D9FEF648ABB8C0B8576 (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD ___0_other, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// public bool Equals(MRMarker other) { return id.Equals(other.id); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F(__this, NULL);
		V_0 = L_0;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1;
		L_1 = MRMarker_get_id_m7FD7D2378EDFC1808317C31EB8B18782EBC1D33F((&___0_other), NULL);
		bool L_2;
		L_2 = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA((&V_0), L_1, NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// public bool Equals(MRMarker other) { return id.Equals(other.id); }
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MRMarker_Equals_mB6F4A32E0E620E8DEFD27D9FEF648ABB8C0B8576_AdjustorThunk (RuntimeObject* __this, MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD ___0_other, const RuntimeMethod* method)
{
	MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRMarker_Equals_mB6F4A32E0E620E8DEFD27D9FEF648ABB8C0B8576(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MARS.Data.MRMesh
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_pinvoke(const MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE& unmarshaled, MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Mesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Mesh' of type 'MRMesh': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Mesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_pinvoke_back(const MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_pinvoke& marshaled, MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE& unmarshaled)
{
	Exception_t* ___m_Mesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Mesh' of type 'MRMesh': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Mesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRMesh
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_pinvoke_cleanup(MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.MRMesh
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_com(const MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE& unmarshaled, MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_com& marshaled)
{
	Exception_t* ___m_Mesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Mesh' of type 'MRMesh': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Mesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_com_back(const MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_com& marshaled, MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE& unmarshaled)
{
	Exception_t* ___m_Mesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Mesh' of type 'MRMesh': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Mesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRMesh
IL2CPP_EXTERN_C void MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshal_com_cleanup(MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE_marshaled_com& marshaled)
{
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRMesh::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMesh_get_id_m275AB98C409DB81437C879F91DC10082D375DABC (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_ID; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___m_ID_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ID; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRMesh_get_id_m275AB98C409DB81437C879F91DC10082D375DABC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MRMesh_get_id_m275AB98C409DB81437C879F91DC10082D375DABC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMesh::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_id_mD483B9AF017080596D93F4B51086F3A5C31F0854 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_ID = value; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___m_ID_0 = L_0;
		// set { m_ID = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMesh_set_id_mD483B9AF017080596D93F4B51086F3A5C31F0854_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	MRMesh_set_id_mD483B9AF017080596D93F4B51086F3A5C31F0854(_thisAdjusted, ___0_value, method);
}
// System.String Unity.MARS.Data.MRMesh::get_meshType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRMesh_get_meshType_mA69EE4FC806AA517848A02664B34336674B9D044 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_MeshType; }
		String_t* L_0 = __this->___m_MeshType_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MeshType; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* MRMesh_get_meshType_mA69EE4FC806AA517848A02664B34336674B9D044_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MRMesh_get_meshType_mA69EE4FC806AA517848A02664B34336674B9D044(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMesh::set_meshType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_meshType_mFCAB6FFD7F40013A83EC9B578BEE704BCB757D37 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_MeshType = value; }
		String_t* L_0 = ___0_value;
		__this->___m_MeshType_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MeshType_1), (void*)L_0);
		// set { m_MeshType = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMesh_set_meshType_mFCAB6FFD7F40013A83EC9B578BEE704BCB757D37_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	MRMesh_set_meshType_mFCAB6FFD7F40013A83EC9B578BEE704BCB757D37(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MRMesh::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMesh_get_pose_m83736F5185D1FAF38D3031DB0E7EF6BFC8CA3793 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRMesh_get_pose_m83736F5185D1FAF38D3031DB0E7EF6BFC8CA3793_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRMesh_get_pose_m83736F5185D1FAF38D3031DB0E7EF6BFC8CA3793(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMesh::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_pose_m15091F290BB1FFB0393820078EEE93DF86234649 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Pose = value; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_Pose_2 = L_0;
		// set { m_Pose = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMesh_set_pose_m15091F290BB1FFB0393820078EEE93DF86234649_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	MRMesh_set_pose_m15091F290BB1FFB0393820078EEE93DF86234649(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Mesh Unity.MARS.Data.MRMesh::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MRMesh_get_mesh_mF26CA4829EEDD820A9ADE8DED82F73FA4C17A1E4 (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, const RuntimeMethod* method) 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// get { return m_Mesh; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___m_Mesh_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Mesh; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MRMesh_get_mesh_mF26CA4829EEDD820A9ADE8DED82F73FA4C17A1E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* _returnValue;
	_returnValue = MRMesh_get_mesh_mF26CA4829EEDD820A9ADE8DED82F73FA4C17A1E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRMesh::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRMesh_set_mesh_m309154D17919B6DEE61A08C47C24A2B377A287DE (MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Mesh = value; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_value;
		__this->___m_Mesh_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mesh_3), (void*)L_0);
		// set { m_Mesh = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRMesh_set_mesh_m309154D17919B6DEE61A08C47C24A2B377A287DE_AdjustorThunk (RuntimeObject* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method)
{
	MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRMesh_tC8CCF74C623CDFCC17BC7A839A8267ED7F8045CE*>(__this + _offset);
	MRMesh_set_mesh_m309154D17919B6DEE61A08C47C24A2B377A287DE(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MARS.Data.MRPlane
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_pinvoke(const MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1& unmarshaled, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___vertices_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vertices' of type 'MRPlane'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vertices_6Exception, NULL);
}
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_pinvoke_back(const MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_pinvoke& marshaled, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1& unmarshaled)
{
	Exception_t* ___vertices_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vertices' of type 'MRPlane'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vertices_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRPlane
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_pinvoke_cleanup(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.MRPlane
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_com(const MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1& unmarshaled, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_com& marshaled)
{
	Exception_t* ___vertices_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vertices' of type 'MRPlane'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vertices_6Exception, NULL);
}
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_com_back(const MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_com& marshaled, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1& unmarshaled)
{
	Exception_t* ___vertices_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vertices' of type 'MRPlane'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vertices_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.MRPlane
IL2CPP_EXTERN_C void MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshal_com_cleanup(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_marshaled_com& marshaled)
{
}
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRPlane::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRPlane_get_id_mF28C215D1D606A31F1A9F0AC986C47D95BFCE867 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_ID; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___m_ID_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ID; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRPlane_get_id_mF28C215D1D606A31F1A9F0AC986C47D95BFCE867_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MRPlane_get_id_mF28C215D1D606A31F1A9F0AC986C47D95BFCE867(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_id_mDB12C0BD826797A9D39731AA3B5FD6CD6E7BBC44 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_ID = value; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___m_ID_1 = L_0;
		// set { m_ID = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRPlane_set_id_mDB12C0BD826797A9D39731AA3B5FD6CD6E7BBC44_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MRPlane_set_id_mDB12C0BD826797A9D39731AA3B5FD6CD6E7BBC44(_thisAdjusted, ___0_value, method);
}
// Unity.MARS.Data.MarsPlaneAlignment Unity.MARS.Data.MRPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRPlane_get_alignment_mA27D487D81722DB5C2F1183F44CA86697DD824FD (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Alignment; }
		int32_t L_0 = __this->___m_Alignment_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Alignment; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MRPlane_get_alignment_mA27D487D81722DB5C2F1183F44CA86697DD824FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRPlane_get_alignment_mA27D487D81722DB5C2F1183F44CA86697DD824FD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::set_alignment(Unity.MARS.Data.MarsPlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_alignment_mE4D4DA91516C21063493B8027698365CE1CDDB66 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Alignment = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Alignment_2 = L_0;
		// set { m_Alignment = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRPlane_set_alignment_mE4D4DA91516C21063493B8027698365CE1CDDB66_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MRPlane_set_alignment_mE4D4DA91516C21063493B8027698365CE1CDDB66(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MRPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Pose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_pose_m5095515C9A4DB84FAB857C98BD8308546F701131 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Pose = value; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_Pose_3 = L_0;
		// set { m_Pose = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRPlane_set_pose_m5095515C9A4DB84FAB857C98BD8308546F701131_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MRPlane_set_pose_m5095515C9A4DB84FAB857C98BD8308546F701131(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Unity.MARS.Data.MRPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Center; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Center; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_center_m13F130D91AA997411D59727F3540F23993726E7B (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Center = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Center_4 = L_0;
		// set { m_Center = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRPlane_set_center_m13F130D91AA997411D59727F3540F23993726E7B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MRPlane_set_center_m13F130D91AA997411D59727F3540F23993726E7B(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2 Unity.MARS.Data.MRPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Extents; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Extents_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Extents; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::set_extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane_set_extents_mCA62219A3764257FF514582EDC8920A6CE1F748F (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Extents = value; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_Extents_5 = L_0;
		// set { m_Extents = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void MRPlane_set_extents_mCA62219A3764257FF514582EDC8920A6CE1F748F_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	MRPlane_set_extents_mCA62219A3764257FF514582EDC8920A6CE1F748F(_thisAdjusted, ___0_value, method);
}
// System.String Unity.MARS.Data.MRPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRPlane_ToString_mF129468A3271B12F4675D7D2C242E7C9D3B29673 (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128B98C2573F57B66C37CA835D0BFBA7B7C54AAE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format(str, m_ID, m_Extents, m_Pose);
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___m_ID_1;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1 = L_0;
		RuntimeObject* L_2 = Box(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var, &L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___m_Extents_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = __this->___m_Pose_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = L_6;
		RuntimeObject* L_8 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral128B98C2573F57B66C37CA835D0BFBA7B7C54AAE, L_2, L_5, L_8, NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		String_t* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* MRPlane_ToString_mF129468A3271B12F4675D7D2C242E7C9D3B29673_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MRPlane_ToString_mF129468A3271B12F4675D7D2C242E7C9D3B29673(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.MARS.Data.MRPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRPlane_GetHashCode_m3B5100419126C9DC9E7863C065184052A692F52A (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override int GetHashCode() { return m_ID.GetHashCode(); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* L_0 = (&__this->___m_ID_1);
		int32_t L_1;
		L_1 = MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80(L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// public override int GetHashCode() { return m_ID.GetHashCode(); }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MRPlane_GetHashCode_m3B5100419126C9DC9E7863C065184052A692F52A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRPlane_GetHashCode_m3B5100419126C9DC9E7863C065184052A692F52A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRPlane::Equals(Unity.MARS.Data.MRPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRPlane_Equals_m7A7A097A03700B47D9D7B025ED67DCF49A8D7FCC (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool Equals(MRPlane other) { return m_ID.Equals(other.m_ID); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* L_0 = (&__this->___m_ID_1);
		MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1 L_1 = ___0_other;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_2 = L_1.___m_ID_1;
		bool L_3;
		L_3 = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// public bool Equals(MRPlane other) { return m_ID.Equals(other.m_ID); }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool MRPlane_Equals_m7A7A097A03700B47D9D7B025ED67DCF49A8D7FCC_AdjustorThunk (RuntimeObject* __this, MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1 ___0_other, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRPlane_Equals_m7A7A097A03700B47D9D7B025ED67DCF49A8D7FCC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// UnityEngine.Bounds Unity.MARS.Data.MRPlane::GetWorldBounds(Unity.MARS.Providers.IUsesCameraOffset,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 MRPlane_GetWorldBounds_m34263928D234283C449C3F3D48A91FF1D565C68A (MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* __this, RuntimeObject* ___0_cameraOffset, float ___1_minBound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float G_B4_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		// var worldPose = cameraOffset.ApplyOffsetToPose(pose);
		RuntimeObject* L_0 = ___0_cameraOffset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = IUsesCameraOffsetMethods_ApplyOffsetToPose_m3AF799CE778D6F2BD86AB70A78BB296D0437FE6C(L_0, L_1, NULL);
		V_0 = L_2;
		// var worldCenter = worldPose.position + worldPose.rotation * center;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		V_1 = L_9;
		// var size = new Vector3(extents.x * 0.5f, 0, extents.y * 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D(__this, NULL);
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = MRPlane_get_extents_mBD5A23835FDF5A19AD7F8F5CBFE415D5D8B3F83D(__this, NULL);
		float L_13 = L_12.___y_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_multiply(L_11, (0.5f))), (0.0f), ((float)il2cpp_codegen_multiply(L_13, (0.5f))), NULL);
		// k_Corners[0] = size;
		il2cpp_codegen_runtime_class_init_inline(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ((MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields*)il2cpp_codegen_static_fields_for(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var))->___k_Corners_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		// size.x *= -1;
		float* L_16 = (&(&V_2)->___x_2);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// k_Corners[1] = size;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = ((MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields*)il2cpp_codegen_static_fields_for(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var))->___k_Corners_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_20);
		// var rotation = pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = L_21.___rotation_1;
		V_3 = L_22;
		// var position = pose.position + rotation * center;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23;
		L_23 = MRPlane_get_pose_m21CE2802C882CECB422462AC071B1182BC1EA04B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23.___position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = MRPlane_get_center_mEA69725F487AB33539123085D1CB1990458A7D3E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_27, NULL);
		V_4 = L_28;
		// size = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_29;
		// foreach (var corner in k_Corners)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = ((MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields*)il2cpp_codegen_static_fields_for(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var))->___k_Corners_0;
		V_5 = L_30;
		V_6 = 0;
		goto IL_0191;
	}

IL_00c1:
	{
		// foreach (var corner in k_Corners)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = V_5;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		// var localVertex = rotation * corner + position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_38, NULL);
		V_8 = L_39;
		// localVertex = cameraOffset.ApplyOffsetToPosition(localVertex) - worldCenter;
		RuntimeObject* L_40 = ___0_cameraOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = IUsesCameraOffsetMethods_ApplyOffsetToPosition_mDAC0AE1DA8AEAB9EA8E6CF16F3843FA80967758D(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_43, NULL);
		V_8 = L_44;
		// var val = localVertex.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_8;
		float L_46 = L_45.___x_2;
		V_9 = L_46;
		// var absVal = val > 0 ? val : -val;
		float L_47 = V_9;
		if ((((float)L_47) > ((float)(0.0f))))
		{
			goto IL_0105;
		}
	}
	{
		float L_48 = V_9;
		G_B4_0 = ((-L_48));
		goto IL_0107;
	}

IL_0105:
	{
		float L_49 = V_9;
		G_B4_0 = L_49;
	}

IL_0107:
	{
		V_10 = G_B4_0;
		// if (absVal > size.x)
		float L_50 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_2;
		float L_52 = L_51.___x_2;
		V_11 = (bool)((((float)L_50) > ((float)L_52))? 1 : 0);
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		// size.x = absVal;
		float L_54 = V_10;
		(&V_2)->___x_2 = L_54;
	}

IL_0122:
	{
		// val = localVertex.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_8;
		float L_56 = L_55.___y_3;
		V_9 = L_56;
		// absVal = val > 0 ? val : -val;
		float L_57 = V_9;
		if ((((float)L_57) > ((float)(0.0f))))
		{
			goto IL_0139;
		}
	}
	{
		float L_58 = V_9;
		G_B9_0 = ((-L_58));
		goto IL_013b;
	}

IL_0139:
	{
		float L_59 = V_9;
		G_B9_0 = L_59;
	}

IL_013b:
	{
		V_10 = G_B9_0;
		// if (absVal > size.y)
		float L_60 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_2;
		float L_62 = L_61.___y_3;
		V_12 = (bool)((((float)L_60) > ((float)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_0156;
		}
	}
	{
		// size.y = absVal;
		float L_64 = V_10;
		(&V_2)->___y_3 = L_64;
	}

IL_0156:
	{
		// val = localVertex.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_8;
		float L_66 = L_65.___z_4;
		V_9 = L_66;
		// absVal = val > 0 ? val : -val;
		float L_67 = V_9;
		if ((((float)L_67) > ((float)(0.0f))))
		{
			goto IL_016d;
		}
	}
	{
		float L_68 = V_9;
		G_B14_0 = ((-L_68));
		goto IL_016f;
	}

IL_016d:
	{
		float L_69 = V_9;
		G_B14_0 = L_69;
	}

IL_016f:
	{
		V_10 = G_B14_0;
		// if (absVal > size.z)
		float L_70 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_2;
		float L_72 = L_71.___z_4;
		V_13 = (bool)((((float)L_70) > ((float)L_72))? 1 : 0);
		bool L_73 = V_13;
		if (!L_73)
		{
			goto IL_018a;
		}
	}
	{
		// size.z = absVal;
		float L_74 = V_10;
		(&V_2)->___z_4 = L_74;
	}

IL_018a:
	{
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0191:
	{
		// foreach (var corner in k_Corners)
		int32_t L_76 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = V_5;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_00c1;
		}
	}
	{
		// size *= 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, (2.0f), NULL);
		V_2 = L_79;
		// if (size.x < minBound)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_2;
		float L_81 = L_80.___x_2;
		float L_82 = ___1_minBound;
		V_14 = (bool)((((float)L_81) < ((float)L_82))? 1 : 0);
		bool L_83 = V_14;
		if (!L_83)
		{
			goto IL_01bf;
		}
	}
	{
		// size.x = minBound;
		float L_84 = ___1_minBound;
		(&V_2)->___x_2 = L_84;
	}

IL_01bf:
	{
		// if (size.y < minBound)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_2;
		float L_86 = L_85.___y_3;
		float L_87 = ___1_minBound;
		V_15 = (bool)((((float)L_86) < ((float)L_87))? 1 : 0);
		bool L_88 = V_15;
		if (!L_88)
		{
			goto IL_01d6;
		}
	}
	{
		// size.y = minBound;
		float L_89 = ___1_minBound;
		(&V_2)->___y_3 = L_89;
	}

IL_01d6:
	{
		// if (size.z < minBound)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_2;
		float L_91 = L_90.___z_4;
		float L_92 = ___1_minBound;
		V_16 = (bool)((((float)L_91) < ((float)L_92))? 1 : 0);
		bool L_93 = V_16;
		if (!L_93)
		{
			goto IL_01ed;
		}
	}
	{
		// size.z = minBound;
		float L_94 = ___1_minBound;
		(&V_2)->___z_4 = L_94;
	}

IL_01ed:
	{
		// return new Bounds(worldCenter, size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_97;
		memset((&L_97), 0, sizeof(L_97));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_97), L_95, L_96, /*hidden argument*/NULL);
		V_17 = L_97;
		goto IL_01f8;
	}

IL_01f8:
	{
		// }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_98 = V_17;
		return L_98;
	}
}
IL2CPP_EXTERN_C  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 MRPlane_GetWorldBounds_m34263928D234283C449C3F3D48A91FF1D565C68A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_cameraOffset, float ___1_minBound, const RuntimeMethod* method)
{
	MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1*>(__this + _offset);
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 _returnValue;
	_returnValue = MRPlane_GetWorldBounds_m34263928D234283C449C3F3D48A91FF1D565C68A(_thisAdjusted, ___0_cameraOffset, ___1_minBound, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRPlane__cctor_m503F8FF8365E75060C3065ACF8093A558EBAB45B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Vector3[] k_Corners = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		((MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields*)il2cpp_codegen_static_fields_for(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var))->___k_Corners_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_StaticFields*)il2cpp_codegen_static_fields_for(MRPlane_t07CAA9F8EED37897F0E5D384F9D214955051D8B1_il2cpp_TypeInfo_var))->___k_Corners_0), (void*)L_0);
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
// Unity.MARS.Data.MarsTrackableId Unity.MARS.Data.MRReferencePoint::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 _returnValue;
	_returnValue = MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRReferencePoint::set_id(Unity.MARS.Data.MarsTrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1_AdjustorThunk (RuntimeObject* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose Unity.MARS.Data.MRReferencePoint::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRReferencePoint_get_pose_m1F293EE5B941455D47899F72462F1A99A9CE8440 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRReferencePoint_get_pose_m1F293EE5B941455D47899F72462F1A99A9CE8440_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = MRReferencePoint_get_pose_m1F293EE5B941455D47899F72462F1A99A9CE8440_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRReferencePoint::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3_inline(_thisAdjusted, ___0_value, method);
}
// Unity.MARS.Data.MARSTrackingState Unity.MARS.Data.MRReferencePoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRReferencePoint_get_trackingState_mA73687985077281066221E39932C521BB18EA0F0 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public MARSTrackingState trackingState { get; set; }
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MRReferencePoint_get_trackingState_mA73687985077281066221E39932C521BB18EA0F0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRReferencePoint_get_trackingState_mA73687985077281066221E39932C521BB18EA0F0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MARS.Data.MRReferencePoint::set_trackingState(Unity.MARS.Data.MARSTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public MARSTrackingState trackingState { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.MARS.Data.MRReferencePoint::.ctor(UnityEngine.Pose,Unity.MARS.Data.MARSTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRReferencePoint__ctor_m2932EAD2F631CB4FC083B2E8AE3695588D82A38F (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, int32_t ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MRReferencePoint(Pose pose, MARSTrackingState state = MARSTrackingState.Unknown) : this()
		il2cpp_codegen_initobj(__this, sizeof(MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71));
		// id = MarsTrackableId.Create();
		il2cpp_codegen_runtime_class_init_inline(MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1_il2cpp_TypeInfo_var);
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MarsTrackableId_Create_mF53BA3C0B4804C8132D2F72DCE9AB13DC5C9AC0F(NULL);
		MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1_inline(__this, L_0, NULL);
		// trackingState = state;
		int32_t L_1 = ___1_state;
		MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F_inline(__this, L_1, NULL);
		// this.pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___0_pose;
		MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MRReferencePoint__ctor_m2932EAD2F631CB4FC083B2E8AE3695588D82A38F_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, int32_t ___1_state, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	MRReferencePoint__ctor_m2932EAD2F631CB4FC083B2E8AE3695588D82A38F(_thisAdjusted, ___0_pose, ___1_state, method);
}
// System.Int32 Unity.MARS.Data.MRReferencePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MRReferencePoint_GetHashCode_m82D9B5477DA1732DB4F1D2503FA197432E84CC54 (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MarsTrackableId_GetHashCode_mBA6DB8D581212FD9FA3D763DAED7A9FAD107BB80((&V_0), NULL);
		V_1 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// public override int GetHashCode() { return id.GetHashCode(); }
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MRReferencePoint_GetHashCode_m82D9B5477DA1732DB4F1D2503FA197432E84CC54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MRReferencePoint_GetHashCode_m82D9B5477DA1732DB4F1D2503FA197432E84CC54(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.MARS.Data.MRReferencePoint::Equals(Unity.MARS.Data.MRReferencePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRReferencePoint_Equals_m49AF814416374EAF1C35D9E1BB05DF19D3413C4C (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71 ___0_other, const RuntimeMethod* method) 
{
	MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// public bool Equals(MRReferencePoint other) { return id.Equals(other.id); }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0;
		L_0 = MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline(__this, NULL);
		V_0 = L_0;
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_1;
		L_1 = MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline((&___0_other), NULL);
		bool L_2;
		L_2 = MarsTrackableId_Equals_m7FD4B658D62B30C30F1425015CB8E8E1177F4EBA((&V_0), L_1, NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// public bool Equals(MRReferencePoint other) { return id.Equals(other.id); }
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MRReferencePoint_Equals_m49AF814416374EAF1C35D9E1BB05DF19D3413C4C_AdjustorThunk (RuntimeObject* __this, MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71 ___0_other, const RuntimeMethod* method)
{
	MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71*>(__this + _offset);
	bool _returnValue;
	_returnValue = MRReferencePoint_Equals_m49AF814416374EAF1C35D9E1BB05DF19D3413C4C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MARS.Data.PointCloudData
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_pinvoke(const PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D& unmarshaled, PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Identifiers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Identifiers' of type 'PointCloudData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Identifiers_0Exception, NULL);
}
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_pinvoke_back(const PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_pinvoke& marshaled, PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D& unmarshaled)
{
	Exception_t* ___Identifiers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Identifiers' of type 'PointCloudData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Identifiers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.PointCloudData
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_pinvoke_cleanup(PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MARS.Data.PointCloudData
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_com(const PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D& unmarshaled, PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_com& marshaled)
{
	Exception_t* ___Identifiers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Identifiers' of type 'PointCloudData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Identifiers_0Exception, NULL);
}
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_com_back(const PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_com& marshaled, PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D& unmarshaled)
{
	Exception_t* ___Identifiers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Identifiers' of type 'PointCloudData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Identifiers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MARS.Data.PointCloudData
IL2CPP_EXTERN_C void PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshal_com_cleanup(PointCloudData_t4A1CF048CE73F487BA103EEA7B4D8B121AB9933D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_Multicast(LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* currentDelegate = reinterpret_cast<LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_success, ___1_responseCode, ___2_texture, ___3_payload, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_OpenInst(LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_responseCode, ___2_texture, ___3_payload, method);
}
void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_OpenStatic(LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_responseCode, ___2_texture, ___3_payload, method);
}
void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_OpenStaticInvoker(LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	InvokerActionInvoker4< bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_success, ___1_responseCode, ___2_texture, ___3_payload);
}
void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_ClosedStaticInvoker(LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_success, ___1_responseCode, ___2_texture, ___3_payload);
}
// System.Void Unity.MARS.Data.LoadTextureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTextureCallback__ctor_mD1E83C435D3F1E8C3D3235F6D88301D69FF57954 (LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B_Multicast;
}
// System.Void Unity.MARS.Data.LoadTextureCallback::Invoke(System.Boolean,System.Int64,UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTextureCallback_Invoke_m70FC508654C6ACEE0CAA802266332F688F876E7B (LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, int64_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_responseCode, ___2_texture, ___3_payload, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.MARS.Data.LoadTextureCallback::BeginInvoke(System.Boolean,System.Int64,UnityEngine.Texture2D,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadTextureCallback_BeginInvoke_mE221DDC458AEEB6F8D539293804890275928EBF1 (LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, bool ___0_success, int64_t ___1_responseCode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_success);
	__d_args[1] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___1_responseCode);
	__d_args[2] = ___2_texture;
	__d_args[3] = ___3_payload;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Unity.MARS.Data.LoadTextureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTextureCallback_EndInvoke_mCC7DC2AEF09EF34813B7CA596D2DF7B9A10D56D3 (LoadTextureCallback_tFAC75D6CC5B5C0466D51FE8B83F6DC2B3CDA3905* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_Multicast(ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* currentDelegate = reinterpret_cast<ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_upload, ___1_download, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_OpenInst(ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_upload, ___1_download, method);
}
void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_OpenStatic(ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_upload, ___1_download, method);
}
void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_OpenStaticInvoker(ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_upload, ___1_download);
}
void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_ClosedStaticInvoker(ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_upload, ___1_download);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2 (ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_upload, ___1_download);

}
// System.Void Unity.MARS.Data.ProgressCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressCallback__ctor_m1AEA6179A925CA1A901AC078F20BCE29A7EE32A6 (ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF_Multicast;
}
// System.Void Unity.MARS.Data.ProgressCallback::Invoke(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressCallback_Invoke_mDBFB2757389B6FC80C15C311ACA856B8406EF6BF (ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_upload, ___1_download, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.MARS.Data.ProgressCallback::BeginInvoke(System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProgressCallback_BeginInvoke_m9AEF8A843B9A55AD94909076ACD9C46C2F17F794 (ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, float ___0_upload, float ___1_download, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_upload);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_download);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.MARS.Data.ProgressCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressCallback_EndInvoke_m3F1A38719FC10FA42A77B9856B2BE682B5937C5D (ProgressCallback_tEA83032142179984663B624D7E8AC239C32CCEB2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
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
// System.Void Unity.MARS.Data.IProvidesTraitsMethods::LogTraitProviderError(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvidesTraitsMethods_LogTraitProviderError_mBDE1F34317ABE3277B4DB853C58A55F7B95A9229 (Type_t* ___0_traitType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C9097C11EB0CDF9658A3061B4906ED001FFF535);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B25559F6A3D7C88BFD21ECAFA98C855C4299DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError($"No trait provider exists for type {traitType.FullName}. Make sure there is a " +
		//                "Condition or Relation defined that uses this trait type.");
		Type_t* L_0 = ___0_traitType;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3C9097C11EB0CDF9658A3061B4906ED001FFF535, L_1, _stringLiteral70B25559F6A3D7C88BFD21ECAFA98C855C4299DB, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		// }
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
// System.String Unity.MARS.Data.SerializedTraitRequirement::get_TraitName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public string TraitName => m_TraitName;
		String_t* L_0 = __this->___m_TraitName_0;
		return L_0;
	}
}
// System.Boolean Unity.MARS.Data.SerializedTraitRequirement::get_Required()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public bool Required => m_Required;
		bool L_0 = __this->___m_Required_2;
		return L_0;
	}
}
// System.String Unity.MARS.Data.SerializedTraitRequirement::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeName => m_TypeName;
		String_t* L_0 = __this->___m_TypeName_1;
		return L_0;
	}
}
// System.Void Unity.MARS.Data.SerializedTraitRequirement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedTraitRequirement__ctor_m107000A6B46218D22B4F6AE599E7DB4E55EFE5B9 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public SerializedTraitRequirement() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public SerializedTraitRequirement() { }
		return;
	}
}
// System.Void Unity.MARS.Data.SerializedTraitRequirement::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedTraitRequirement__ctor_mB1CA704496B0B4C7616ECA70C44042D1B0D4C41F (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, String_t* ___0_traitName, String_t* ___1_assemblyQualifiedTypeName, bool ___2_required, const RuntimeMethod* method) 
{
	{
		// public SerializedTraitRequirement(string traitName, string assemblyQualifiedTypeName, bool required = true)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_TraitName = traitName;
		String_t* L_0 = ___0_traitName;
		__this->___m_TraitName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TraitName_0), (void*)L_0);
		// m_TypeName = assemblyQualifiedTypeName;
		String_t* L_1 = ___1_assemblyQualifiedTypeName;
		__this->___m_TypeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TypeName_1), (void*)L_1);
		// m_Required = required;
		bool L_2 = ___2_required;
		__this->___m_Required_2 = L_2;
		// }
		return;
	}
}
// System.Void Unity.MARS.Data.SerializedTraitRequirement::.ctor(Unity.MARS.Query.TraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedTraitRequirement__ctor_mCB329B04844AB4ECA4D1B1A9B10AC2EB0F9D2DC4 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* ___0_requirement, const RuntimeMethod* method) 
{
	{
		// public SerializedTraitRequirement(TraitRequirement requirement)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_TraitName = requirement.TraitName;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_0 = ___0_requirement;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TraitRequirement_get_TraitName_m55B9C34C00B80FD98E543A60502DFD2432A0B074(L_0, NULL);
		__this->___m_TraitName_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TraitName_0), (void*)L_1);
		// m_TypeName = requirement.Type.AssemblyQualifiedName;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_2 = ___0_requirement;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = TraitRequirement_get_Type_mEBA4A7C619C8E12CA840C1808A29C14335E99AC2(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->___m_TypeName_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TypeName_1), (void*)L_4);
		// m_Required = requirement.Required;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_5 = ___0_requirement;
		NullCheck(L_5);
		bool L_6 = L_5->___Required_0;
		__this->___m_Required_2 = L_6;
		// }
		return;
	}
}
// System.Boolean Unity.MARS.Data.SerializedTraitRequirement::Equals(Unity.MARS.Data.SerializedTraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedTraitRequirement_Equals_m8925F7DD93FEA742EB9472A9C1BBDE3FC7B9AEBC (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (ReferenceEquals(null, other))
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0043;
	}

IL_000d:
	{
		// if (ReferenceEquals(this, other))
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_2 = ___0_other;
		V_2 = (bool)((((RuntimeObject*)(SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569*)__this) == ((RuntimeObject*)(SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569*)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_0019:
	{
		// return string.Equals(m_TraitName, other.TraitName) && string.Equals(TypeName, other.TypeName);
		String_t* L_4 = __this->___m_TraitName_0;
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline(L_5, NULL);
		bool L_7;
		L_7 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_8;
		L_8 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(__this, NULL);
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_9 = ___0_other;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(L_9, NULL);
		bool L_11;
		L_11 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_8, L_10, NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0040;
	}

IL_003f:
	{
		G_B7_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B7_0;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Unity.MARS.Data.SerializedTraitRequirement::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializedTraitRequirement_GetHashCode_m5D88B02553AC0C51549C5108A2106D568BB6226E (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (TraitName.GetHashCode() * 397) ^ TypeName.GetHashCode();
		String_t* L_0;
		L_0 = SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		String_t* L_2;
		L_2 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		goto IL_0022;
	}

IL_0022:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.MARS.Data.SerializedTraitRequirement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_ToString_m711BCEEFA26DD76C2A8F5A5DC3E1777CD0E3BEE5 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C945050B544C3CEF12A4D3D681756769325C196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A9A87BB25BE5C8E1B19AD8D192A0E734A5609A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"trait: '{TraitName}', type: {TypeName}";
		String_t* L_0;
		L_0 = SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline(__this, NULL);
		String_t* L_1;
		L_1 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral0C945050B544C3CEF12A4D3D681756769325C196, L_0, _stringLiteral42A9A87BB25BE5C8E1B19AD8D192A0E734A5609A, L_1, NULL);
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void Unity.MARS.Data.TraitDefinition::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, String_t* ___0_traitName, Type_t* ___1_type, const RuntimeMethod* method) 
{
	{
		// public TraitDefinition(string traitName, Type type)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// TraitName = traitName;
		String_t* L_0 = ___0_traitName;
		__this->___TraitName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TraitName_0), (void*)L_0);
		// Type = type;
		Type_t* L_1 = ___1_type;
		__this->___Type_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_1), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean Unity.MARS.Data.TraitDefinition::Equals(Unity.MARS.Data.TraitDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraitDefinition_Equals_mAA35192DB430AFEF3DE220A02EF08C2EF55BCE59 (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (ReferenceEquals(null, other))
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0043;
	}

IL_000d:
	{
		// if (ReferenceEquals(this, other))
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = ___0_other;
		V_2 = (bool)((((RuntimeObject*)(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)__this) == ((RuntimeObject*)(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_0019:
	{
		// return string.Equals(TraitName, other.TraitName) && Type == other.Type;
		String_t* L_4 = __this->___TraitName_0;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6 = L_5->___TraitName_0;
		bool L_7;
		L_7 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		Type_t* L_8 = __this->___Type_1;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_9 = ___0_other;
		NullCheck(L_9);
		Type_t* L_10 = L_9->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0040;
	}

IL_003f:
	{
		G_B7_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B7_0;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean Unity.MARS.Data.TraitDefinition::Equals(Unity.MARS.Query.TraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraitDefinition_Equals_mF623CEB9F27CAD0EEA05863A23329AE032E1E240 (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (obj == null)
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_000d:
	{
		// return obj.TraitName == TraitName && obj.Type == Type;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_2 = ___0_obj;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TraitRequirement_get_TraitName_m55B9C34C00B80FD98E543A60502DFD2432A0B074(L_2, NULL);
		String_t* L_4 = __this->___TraitName_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_6 = ___0_obj;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = TraitRequirement_get_Type_mEBA4A7C619C8E12CA840C1808A29C14335E99AC2(L_6, NULL);
		Type_t* L_8 = __this->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 0;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Int32 Unity.MARS.Data.TraitDefinition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraitDefinition_GetHashCode_m2F20146134FC5954D5FBE076F0845D9BC9E4D91F (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (TraitName.GetHashCode() * 397) ^ Type.GetHashCode();
		String_t* L_0 = __this->___TraitName_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t* L_2 = __this->___Type_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		goto IL_0022;
	}

IL_0022:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.MARS.Data.TraitDefinition::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraitDefinition_ToString_m4AA8C9505E58E53DA277519A91E4B02959239AA6 (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public override string ToString() { return $"{TraitName} - {Type.Name}"; }
		String_t* L_0 = __this->___TraitName_0;
		Type_t* L_1 = __this->___Type_1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_2, NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// public override string ToString() { return $"{TraitName} - {Type.Name}"; }
		String_t* L_4 = V_0;
		return L_4;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MARS.Query.TraitDefinitions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitDefinitions__cctor_m1BBEA9865A0F39ECD9709CDF36CE73D49051D8E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AE2658B6A3CF65B723B59C775DCF2B5DBC36441);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80F4D997AC7C308A04E53745671EE1631B8D7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494AD09FB78D890531756ECEC4DFF5C8D22B267D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B8D324687C24872968A15276C954F913457113);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C959292ACE557A7911726798B51F6178228E0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73449D68E41F8415CE7CFE4B9EF15ADCFD227ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F5C93D7D1A75B619CA6EB5616A6123A15789FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9640A4BB52A367750B30EF6205902E8ED977782B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3D2BE4F8DB5A38B000A1ADAA7C55276E258718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BAB32E57D7DF89CA22BE69BA99B62F96CF56CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE81B368AB56379B7A403D362DD0D8AAA9C8F178B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TraitDefinition Pose = new TraitDefinition(TraitNames.Pose, typeof(Pose));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_2, _stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F, L_1, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Pose_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Pose_0), (void*)L_2);
		// public static readonly TraitDefinition Point = new TraitDefinition(TraitNames.Point, typeof(Vector3));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_5 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_5, _stringLiteral61B8D324687C24872968A15276C954F913457113, L_4, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Point_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Point_1), (void*)L_5);
		// public static readonly TraitDefinition Bounds2D = new TraitDefinition(TraitNames.Bounds2D, typeof(Vector2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_8 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_8, _stringLiteral9640A4BB52A367750B30EF6205902E8ED977782B, L_7, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Bounds2D_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Bounds2D_2), (void*)L_8);
		// public static readonly TraitDefinition Alignment = new TraitDefinition(TraitNames.Alignment, typeof(int));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_11 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_11, _stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA, L_10, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Alignment_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Alignment_3), (void*)L_11);
		// public static readonly TraitDefinition GeoCoordinate = new TraitDefinition(TraitNames.Geolocation, typeof(Vector2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_14 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_14, _stringLiteral73449D68E41F8415CE7CFE4B9EF15ADCFD227ED3, L_13, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___GeoCoordinate_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___GeoCoordinate_4), (void*)L_14);
		// public static readonly TraitDefinition HeightAboveFloor = new TraitDefinition(TraitNames.HeightAboveFloor, typeof(float));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_17 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_17, _stringLiteral0E80F4D997AC7C308A04E53745671EE1631B8D7D, L_16, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___HeightAboveFloor_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___HeightAboveFloor_5), (void*)L_17);
		// public static readonly TraitDefinition Plane = new TraitDefinition(TraitNames.Plane, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_20 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_20, _stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00, L_19, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Plane_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Plane_6), (void*)L_20);
		// public static readonly TraitDefinition Face = new TraitDefinition(TraitNames.Face, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_23 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_23, _stringLiteralAB3D2BE4F8DB5A38B000A1ADAA7C55276E258718, L_22, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Face_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Face_7), (void*)L_23);
		// public static readonly TraitDefinition Floor = new TraitDefinition(TraitNames.Floor, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_26 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_26, _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F, L_25, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Floor_8 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Floor_8), (void*)L_26);
		// public static readonly TraitDefinition Environment = new TraitDefinition(TraitNames.Environment, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_29 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_29, _stringLiteral80F5C93D7D1A75B619CA6EB5616A6123A15789FF, L_28, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Environment_9 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Environment_9), (void*)L_29);
		// public static readonly TraitDefinition User = new TraitDefinition(TraitNames.User, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_32 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_32, _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, L_31, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___User_10 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___User_10), (void*)L_32);
		// public static readonly TraitDefinition InView = new TraitDefinition(TraitNames.InView, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_35 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_35, _stringLiteralD3BAB32E57D7DF89CA22BE69BA99B62F96CF56CF, L_34, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___InView_11 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___InView_11), (void*)L_35);
		// public static readonly TraitDefinition DisplayFlat = new TraitDefinition(TraitNames.DisplayFlat, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_38 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_38, _stringLiteral0AE2658B6A3CF65B723B59C775DCF2B5DBC36441, L_37, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___DisplayFlat_12 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___DisplayFlat_12), (void*)L_38);
		// public static readonly TraitDefinition DisplaySpatial = new TraitDefinition(TraitNames.DisplaySpatial, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_41 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_41, _stringLiteral494AD09FB78D890531756ECEC4DFF5C8D22B267D, L_40, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___DisplaySpatial_13 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___DisplaySpatial_13), (void*)L_41);
		// public static readonly TraitDefinition Marker = new TraitDefinition(TraitNames.Marker, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_44 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_44, _stringLiteral67C959292ACE557A7911726798B51F6178228E0F, L_43, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Marker_14 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Marker_14), (void*)L_44);
		// public static readonly TraitDefinition MarkerId = new TraitDefinition(TraitNames.MarkerId, typeof(string));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_47 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_47, _stringLiteralE81B368AB56379B7A403D362DD0D8AAA9C8F178B, L_46, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___MarkerId_15 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___MarkerId_15), (void*)L_47);
		// public static readonly TraitDefinition TrackingState = new TraitDefinition(TraitNames.TrackingState, typeof(int));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_50 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_50, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, L_49, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___TrackingState_16 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___TrackingState_16), (void*)L_50);
		// public static readonly TraitDefinition Body = new TraitDefinition(TraitNames.Body, typeof(bool));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_53 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_53, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493, L_52, NULL);
		((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Body_17 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_StaticFields*)il2cpp_codegen_static_fields_for(TraitDefinitions_t3BFC8D19C0C025EBE890035F7F8BC8641B17D425_il2cpp_TypeInfo_var))->___Body_17), (void*)L_53);
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
// System.String Unity.MARS.Query.TraitRequirement::get_TraitName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraitRequirement_get_TraitName_m55B9C34C00B80FD98E543A60502DFD2432A0B074 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) 
{
	{
		// public string TraitName => Definition.TraitName;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = __this->___Definition_1;
		NullCheck(L_0);
		String_t* L_1 = L_0->___TraitName_0;
		return L_1;
	}
}
// System.Type Unity.MARS.Query.TraitRequirement::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TraitRequirement_get_Type_mEBA4A7C619C8E12CA840C1808A29C14335E99AC2 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type => Definition.Type;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = __this->___Definition_1;
		NullCheck(L_0);
		Type_t* L_1 = L_0->___Type_1;
		return L_1;
	}
}
// System.Void Unity.MARS.Query.TraitRequirement::.ctor(System.String,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitRequirement__ctor_m90B077E4B83AF1DA9E607A7F26DC67C66A2F8A25 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, String_t* ___0_traitName, Type_t* ___1_type, bool ___2_required, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new TraitDefinition(traitName, type), required) { }
		String_t* L_0 = ___0_traitName;
		Type_t* L_1 = ___1_type;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)il2cpp_codegen_object_new(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TraitDefinition__ctor_mC2118E16F9D4A114784032F46291D2A342A4CE8D(L_2, L_0, L_1, NULL);
		bool L_3 = ___2_required;
		TraitRequirement__ctor_m965522B16EBCF57F7151044C37E463D61715C680(__this, L_2, L_3, NULL);
		// : this(new TraitDefinition(traitName, type), required) { }
		return;
	}
}
// System.Void Unity.MARS.Query.TraitRequirement::.ctor(Unity.MARS.Data.TraitDefinition,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraitRequirement__ctor_m965522B16EBCF57F7151044C37E463D61715C680 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_definition, bool ___1_required, const RuntimeMethod* method) 
{
	{
		// public TraitRequirement(TraitDefinition definition, bool required = true)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Definition = definition;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = ___0_definition;
		__this->___Definition_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Definition_1), (void*)L_0);
		// Required = required;
		bool L_1 = ___1_required;
		__this->___Required_0 = L_1;
		// }
		return;
	}
}
// Unity.MARS.Query.TraitRequirement Unity.MARS.Query.TraitRequirement::FromSerialized(Unity.MARS.Data.SerializedTraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* TraitRequirement_FromSerialized_m29BF01750CAD11BD98984850C76970B601273911 (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* ___0_requirement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitRequirement_FromSerialized_m29BF01750CAD11BD98984850C76970B601273911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095BF313E0560B989F26D34ADC221C4C1F9BB76E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD4547EEDA716D7ABB45F1D2443B6BFD56E52EC);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var type = Type.GetType(requirement.TypeName);
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_0 = ___0_requirement;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = il2cpp_codegen_get_type(L_1, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, TraitRequirement_FromSerialized_m29BF01750CAD11BD98984850C76970B601273911_RuntimeMethod_var);
		V_0 = L_2;
		// if (type == null && requirement.Required)
		Type_t* L_3 = V_0;
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, (Type_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_5 = ___0_requirement;
		NullCheck(L_5);
		bool L_6;
		L_6 = SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3_inline(L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// if (requirement.Required)
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_8 = ___0_requirement;
		NullCheck(L_8);
		bool L_9;
		L_9 = SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3_inline(L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.LogErrorFormat("Did not find a Type for required type name {0} - " +
		//     "you will get incorrect behavior / errors later!", requirement.TypeName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_13 = ___0_requirement;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral095BF313E0560B989F26D34ADC221C4C1F9BB76E, L_12, NULL);
		goto IL_0068;
	}

IL_004c:
	{
		// Debug.LogWarningFormat("Did not find a Type for optionally required type name {0} - " +
		//                 "optional Actions that rely on this will not work.", requirement.TypeName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_17 = ___0_requirement;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral0AD4547EEDA716D7ABB45F1D2443B6BFD56E52EC, L_16, NULL);
	}

IL_0068:
	{
		// return null;
		V_3 = (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)NULL;
		goto IL_0081;
	}

IL_006c:
	{
		// return new TraitRequirement(requirement.TraitName, type, requirement.Required);
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_19 = ___0_requirement;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline(L_19, NULL);
		Type_t* L_21 = V_0;
		SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* L_22 = ___0_requirement;
		NullCheck(L_22);
		bool L_23;
		L_23 = SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3_inline(L_22, NULL);
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_24 = (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)il2cpp_codegen_object_new(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		TraitRequirement__ctor_m90B077E4B83AF1DA9E607A7F26DC67C66A2F8A25(L_24, L_20, L_21, L_23, NULL);
		V_3 = L_24;
		goto IL_0081;
	}

IL_0081:
	{
		// }
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_25 = V_3;
		return L_25;
	}
}
// Unity.MARS.Data.TraitDefinition Unity.MARS.Query.TraitRequirement::op_Implicit(Unity.MARS.Query.TraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* TraitRequirement_op_Implicit_m6B17568F1DBA69C9EBFBD8BF2386FBA693B02B68 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* ___0_requirement, const RuntimeMethod* method) 
{
	TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* V_0 = NULL;
	{
		// public static implicit operator TraitDefinition(TraitRequirement requirement) { return requirement.Definition; }
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_0 = ___0_requirement;
		NullCheck(L_0);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_1 = L_0->___Definition_1;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static implicit operator TraitDefinition(TraitRequirement requirement) { return requirement.Definition; }
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = V_0;
		return L_2;
	}
}
// Unity.MARS.Query.TraitRequirement Unity.MARS.Query.TraitRequirement::op_Implicit(Unity.MARS.Data.TraitDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* TraitRequirement_op_Implicit_m0B8E6C670BF07A1CF6A70571AC998DB08BE37319 (TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_definition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* V_0 = NULL;
	{
		// public static implicit operator TraitRequirement(TraitDefinition definition) { return new TraitRequirement(definition); }
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = ___0_definition;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_1 = (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)il2cpp_codegen_object_new(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TraitRequirement__ctor_m965522B16EBCF57F7151044C37E463D61715C680(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator TraitRequirement(TraitDefinition definition) { return new TraitRequirement(definition); }
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.MARS.Query.TraitRequirement::Equals(Unity.MARS.Query.TraitRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraitRequirement_Equals_m3A87FE3639A45C9FE61817D41D56E5FD5D5C8782 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (ReferenceEquals(null, other))
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_003e;
	}

IL_000d:
	{
		// if (ReferenceEquals(this, other))
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_2 = ___0_other;
		V_2 = (bool)((((RuntimeObject*)(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)__this) == ((RuntimeObject*)(TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0*)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_003e;
	}

IL_0019:
	{
		// return Required == other.Required && Definition.Equals(other.Definition);
		bool L_4 = __this->___Required_0;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_5 = ___0_other;
		NullCheck(L_5);
		bool L_6 = L_5->___Required_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_003a;
		}
	}
	{
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_7 = __this->___Definition_1;
		TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* L_8 = ___0_other;
		NullCheck(L_8);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_9 = L_8->___Definition_1;
		NullCheck(L_7);
		bool L_10;
		L_10 = TraitDefinition_Equals_mAA35192DB430AFEF3DE220A02EF08C2EF55BCE59(L_7, L_9, NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_003b;
	}

IL_003a:
	{
		G_B7_0 = 0;
	}

IL_003b:
	{
		V_1 = (bool)G_B7_0;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean Unity.MARS.Query.TraitRequirement::Equals(Unity.MARS.Data.TraitDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraitRequirement_Equals_mDBB17009855ABED32B3C365F94632C109B59440A (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (other == null)
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_001c;
	}

IL_000d:
	{
		// return other.Equals(Definition);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = ___0_other;
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_3 = __this->___Definition_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = TraitDefinition_Equals_mAA35192DB430AFEF3DE220A02EF08C2EF55BCE59(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Int32 Unity.MARS.Query.TraitRequirement::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraitRequirement_GetHashCode_m15BCE6746CB905265B5E633F0A7CE369BD7DE24C (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// return (Required.GetHashCode() * 397) ^ (Definition != null ? Definition.GetHashCode() : 0);
		bool* L_0 = (&__this->___Required_0);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(L_0, NULL);
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_2 = __this->___Definition_1;
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)));
		if (L_2)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)));
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_001e:
	{
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_3 = __this->___Definition_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		V_0 = ((int32_t)(G_B3_1^G_B3_0));
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.String Unity.MARS.Query.TraitRequirement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraitRequirement_ToString_mDC8C5FA9515E3F0B2D9455D2B7A4A0FE4D9E7E27 (TraitRequirement_t73CA67730470EDB06F67E31408DA05F16ED5D9E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC44DACFC4328E9DD61AE6846C25FED3BA5076B31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public override string ToString() { return $"{Definition}, required: {Required}"; }
		TraitDefinition_t2E553126CA77047CB1E8FD26414CAA398196CAFC* L_0 = __this->___Definition_1;
		bool L_1 = __this->___Required_0;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC44DACFC4328E9DD61AE6846C25FED3BA5076B31, L_0, L_3, NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// public override string ToString() { return $"{Definition}, required: {Required}"; }
		String_t* L_5 = V_0;
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
// System.Void Unity.MARS.Attributes.EventAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute__ctor_m03C795B1CECB7BC5367AB554683B3729A19C996B (EventAttribute_tB0489156AA4A6385AC8BCA457820BF7E03542E22* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		// public EventAttribute(Type type)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.type = type;
		Type_t* L_0 = ___0_type;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* IUsesGeoLocationMethods_get_TryStartServiceFunction_m7BA7FADA0B4E8BFA770609616A3465B5F6A913FA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<bool> TryStartServiceFunction { private get; set; }
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryStartServiceFunctionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* IUsesGeoLocationMethods_get_TryGetGeoLocationAction_m0B3A81A49F1274E8C22DB262D7DDADA369F528D3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TryGetGeoLocationDelegate TryGetGeoLocationAction { private get; set; }
		TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CTryGetGeoLocationActionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TryGetGeoLocationDelegate_Invoke_m79A57588FC38929B8B003C0C075A906B055BC179_inline (TryGetGeoLocationDelegate_t5DC575530FF850F0FB0B5672D93AC7CB232BBA19* __this, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9* ___0_coordinate, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GeographicCoordinate_t7906C2633F5F9DB915C021FC915D83BBDB3A6AE9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_coordinate, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_SubscribeGeoLocationChangedAction_mE06113512E14F6A5AB12068587D01E5ECB2470C6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> SubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CSubscribeGeoLocationChangedActionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* IUsesGeoLocationMethods_get_UnsubscribeGeoLocationChangedAction_m0F08D5E8D5F752D7E756A8CA140C5E22643A4D07_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<Action<GeographicCoordinate>> UnsubscribeGeoLocationChangedAction { private get; set; }
		Action_1_t4DAC5C1578BEBE1996B8A1CE1719033DA7E833D7* L_0 = ((IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_StaticFields*)il2cpp_codegen_static_fields_for(IUsesGeoLocationMethods_t3DD815A80E392C6C28D3DF80A357EF884A4BCECA_il2cpp_TypeInfo_var))->___U3CUnsubscribeGeoLocationChangedActionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MarsBody_get_id_mD26A06192451A4A5DFBD394AAC6267044FAEC8D4_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_id_mCAA85035EBF1D41CAACD8E78EA3CF40D992E376D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MarsBody_get_pose_m2DD7429CB7C4068E3800BB03D0D94ECBCAB12CFB_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_pose_m2B813E28804790DD563760AE8F36AFD6F0AF386D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A MarsBody_get_BodyPose_m2E9679B17F05D8AB6EADB2854534E8DBEC594F3C_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public HumanPose BodyPose { get; set; }
		HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A L_0 = __this->___U3CBodyPoseU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_BodyPose_m859AD118517B9E32ACAA8B6B21929CF288063626_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public HumanPose BodyPose { get; set; }
		HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A L_0 = ___0_value;
		__this->___U3CBodyPoseU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBodyPoseU3Ek__BackingField_3))->___muscles_2), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MarsBody_get_Height_m5036D49E2D34BB7830444B6B99990F929667D526_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public float Height { get; set; }
		float L_0 = __this->___U3CHeightU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_Height_m0829D04A6A1DAB6EC7698F32653CF9F2AE039D6D_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Height { get; set; }
		float L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* MarsBody_get_BoneLengths_mE903398E065423E82E13AD52655F827851C0FBA8_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, const RuntimeMethod* method) 
{
	{
		// public List<float> BoneLengths { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___U3CBoneLengthsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarsBody_set_BoneLengths_mDB0FAEC3FEC88C38745F6EFF2056F2B779E296DF_inline (MarsBody_t83FFE0DF975993A1AB580F0351D6A61657990D45* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<float> BoneLengths { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_value;
		__this->___U3CBoneLengthsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBoneLengthsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId1_m50642C6D19722D629281AB9765006218A02E2CA1_inline (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	{
		// public ulong subId1 => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MarsTrackableId_get_subId2_m80BA679C20EBB0B9840CBEA0353164F926F4766C_inline (MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1* __this, const RuntimeMethod* method) 
{
	{
		// public ulong subId2 => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRBody_get_id_mD7EEC8830DA75CD035BC0488E7555A439EE6EFB9_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_id_m9F7AFDFB0D095EDC9715E093087820BAF0037386_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRBody_get_pose_m825A277EF64F42CD7190CD293CB9953CE8DE7FA7_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_pose_m8400EAA37E0ECDD7A45C4689173E144B248470AD_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* MRBody_get_landmarkPoses_m9988464268A08FCA3A7EA3457845CE18DE973F56_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Pose> landmarkPoses { get; set; }
		Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* L_0 = __this->___U3ClandmarkPosesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_landmarkPoses_m240B231BDEA04E63C048E2D7B58E8A15347EAF13_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Pose> landmarkPoses { get; set; }
		Dictionary_2_t7F29254B8A5ACAC6286AFE2D4DA593E5F050D9D8* L_0 = ___0_value;
		__this->___U3ClandmarkPosesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClandmarkPosesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* MRBody_get_landmarkBounds_m86D8284B6D005B6F08433554A7DCE596B13CC637_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Rect> landmarkBounds { get; set; }
		Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* L_0 = __this->___U3ClandmarkBoundsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRBody_set_landmarkBounds_mF3B722F3C4099FC2D6B7BA60D2FCB4F6954198A2_inline (MRBody_t3FE5A70F9711FC7CE265FC2F79F0E8E4193FB9F8* __this, Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<MRBodyLandmark, Rect> landmarkBounds { get; set; }
		Dictionary_2_t497A0597276677967F031699F98F07F802B355E3* L_0 = ___0_value;
		__this->___U3ClandmarkBoundsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClandmarkBoundsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRHitTestResult_get_pose_m11E7DEAC66BC6F13134EB9FF5638FF0FC85D0B98_inline (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRHitTestResult_set_pose_mBC24AFE439823A8641AA86BFB90EE333CAF6948E_inline (MRHitTestResult_tC1728F966BAA5E4D13DFAEFC284FC3D73E1C3950* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MRMarker_get_trackingState_m2C89AFF16B744A853170A6EFC8CA376B198E50D9_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRMarker_set_trackingState_m4833888E9B780F15310C84F9D51C02B07F76CAC3_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_TrackingState = value;
		int32_t L_0 = ___0_value;
		__this->___m_TrackingState_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* MRMarker_get_texture_mF872FA95B80AD90F677856CFAF70654E056F08CD_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRMarker_set_texture_m045A485CC353A50AD1CDB2EA079E31C7F208D875_inline (MRMarker_tD2412B5ECCA5FF14F6B2D987C8B73E40A9BD18CD* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Texture = value;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_value;
		__this->___m_Texture_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 MRReferencePoint_get_id_m81F05699BD8E12DEA035941357C8326E8629478B_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_id_mF3E9010148A419FFA43D17AD5ABDD8CC4A7D8CF1_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MarsTrackableId id { get; set; }
		MarsTrackableId_tD331DA80CCB3AB5DF8212BBE7925BED08FC90DB1 L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MRReferencePoint_get_pose_m1F293EE5B941455D47899F72462F1A99A9CE8440_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_pose_m675856ABB02E6F3AEB5B97457601CE47AA62AAA3_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MRReferencePoint_get_trackingState_mA73687985077281066221E39932C521BB18EA0F0_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, const RuntimeMethod* method) 
{
	{
		// public MARSTrackingState trackingState { get; set; }
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRReferencePoint_set_trackingState_mA3FC1C9EC0FB6C361A687F8781404929D83C838F_inline (MRReferencePoint_t0F8909DF2CE2511C2961E274E918C0FD1AB1AA71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public MARSTrackingState trackingState { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TraitName_m9734347CDAA0EE487702B0C77E320A4DDAD154FB_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public string TraitName => m_TraitName;
		String_t* L_0 = __this->___m_TraitName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializedTraitRequirement_get_TypeName_m6AE0152CFE2C49C83AB86227415182BD02EDE528_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeName => m_TypeName;
		String_t* L_0 = __this->___m_TypeName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SerializedTraitRequirement_get_Required_m89565FCE1112606FD029E5C38DCAA971A45661F3_inline (SerializedTraitRequirement_t654C9178D94FC9885418C64A74CF355ACDAFD569* __this, const RuntimeMethod* method) 
{
	{
		// public bool Required => m_Required;
		bool L_0 = __this->___m_Required_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
