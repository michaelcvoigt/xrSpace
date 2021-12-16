#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Rufus31415.WebXR.WebXRInputSource>
struct UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Rufus31415.WebXR.WebXRGamepadButton[]
struct WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63;
// Rufus31415.WebXR.WebXRJoint[]
struct WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// GameClock
struct GameClock_t3491989A60A593F691A11A5894F2387EADC1D644;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Rufus31415.WebXR.SimpleWebXR
struct SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8;
// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Rufus31415.WebXR.WebXRGamepadButton
struct WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573;
// Rufus31415.WebXR.WebXRHand
struct WebXRHand_tE80322082AD122643034032253B96E631DA88233;
// Rufus31415.WebXR.WebXRInputEvent
struct WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2;
// Rufus31415.WebXR.WebXRInputSource
struct WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0;
// Rufus31415.WebXR.WebXRJoint
struct WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHand_tE80322082AD122643034032253B96E631DA88233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRInputSourceEventTypes_tCC2EC7DADC3770E9CCB94BDD0B1D6068DC5196D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRTargetRayModes_tB2089A0FE7A613B44825957658D71F7988CA3AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01B94D134B6CB3892E74BE95B521C09D285D326A;
IL2CPP_EXTERN_C String_t* _stringLiteral045B969526FAA752D247CE00957631440180E9D3;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1744D51B40A8A60C965F1F4733FF73B136DC5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817;
IL2CPP_EXTERN_C String_t* _stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD632CDF88B69548654C40D91F84430B497DFBC;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25B3D88716698D3A7C37BE568E46599AB866B85B;
IL2CPP_EXTERN_C String_t* _stringLiteral29D25C58D3639A08B86462F60AD1770CD00CC138;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D;
IL2CPP_EXTERN_C String_t* _stringLiteral35F95BE68CFC284B8822288DAE06C21A7AFFB3DA;
IL2CPP_EXTERN_C String_t* _stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2;
IL2CPP_EXTERN_C String_t* _stringLiteral48B71BBD7B1547E38402010DAA21829E8562F8FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4A38EC11DC1C955EA0CEE4C12FC60C052E80889D;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6B7873CA6051E6DB51EBB95A637EF32FDD3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2;
IL2CPP_EXTERN_C String_t* _stringLiteral539B4946F5FB95F1A9D1F03AF0FDDC283B47A99C;
IL2CPP_EXTERN_C String_t* _stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB;
IL2CPP_EXTERN_C String_t* _stringLiteral689E9205FE12F63C8F4E3F4B3F4F20D59D10C5A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral769EFBBF1B8BC01AC3A8E54AA622B0439BFBA03C;
IL2CPP_EXTERN_C String_t* _stringLiteral77CB7008750A68624D71AF5BC10AB4DC001E82BF;
IL2CPP_EXTERN_C String_t* _stringLiteral786AAFBF7F923DCB623CFA57698B7290B9193E5C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB0AC54CE0655D10AC367EF5CC0C1F42C9C8D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F17CFFC25FDAE5C422075BE32ABDCB2F48FDEA1;
IL2CPP_EXTERN_C String_t* _stringLiteral943BBAAC383E679194E396E759525D7F410A8D3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BD677A237E07AA8373E5181D4D6B989359ED2;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B0501DF6AE59C5AF63014DFC719F11BA30E487;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralC440A10462013AE2B0094DF5F10ABC8BE3D68BF1;
IL2CPP_EXTERN_C String_t* _stringLiteralC6619DBA24E44DB52AF363549B190FFC0D2C2CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C156DBE6BCA156195A9475459DC6CC9D332DE6;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF9834DDAFF7406CBC46AB43CE5CEE1BAB46EC4;
IL2CPP_EXTERN_C String_t* _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFFFF40DA2B5E73185C91557D29B2C75340ED6;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAC91091FCA3A2D07B6E8154AD6DE7F1D274735;
IL2CPP_EXTERN_C String_t* _stringLiteralDC05E72E99AEE97AAD00A64C33F251DB99624AF8;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C String_t* _stringLiteralF5486318099F1C793F2791E2B3E27F3575E4DB26;
IL2CPP_EXTERN_C String_t* _stringLiteralFEFC85190C88A700FEA175DD393D5557201D7F72;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_mAABEE61F4E386C3122237CE7525FCD630343E12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_m0DE0DF93095D2E33B3A5AD87CAB9C5812E737C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m4A092134AE879AE59E6D036DC823CBB22EFB41A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m3B1407A043A3EC9ED3B5AD3C463C7ECDEB184FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7774CDCDFD87E3C4D5508D6AA05DEB9B7E756D22_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63;
struct WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Rufus31415.WebXR.WebXRGamepadButton
struct WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573  : public RuntimeObject
{
	// System.Single Rufus31415.WebXR.WebXRGamepadButton::Value
	float ___Value_0;
	// System.Boolean Rufus31415.WebXR.WebXRGamepadButton::Touched
	bool ___Touched_1;
	// System.Boolean Rufus31415.WebXR.WebXRGamepadButton::Pressed
	bool ___Pressed_2;
};

// Rufus31415.WebXR.WebXRHand
struct WebXRHand_tE80322082AD122643034032253B96E631DA88233  : public RuntimeObject
{
	// System.Boolean Rufus31415.WebXR.WebXRHand::Available
	bool ___Available_0;
	// Rufus31415.WebXR.WebXRJoint[] Rufus31415.WebXR.WebXRHand::Joints
	WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* ___Joints_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<Rufus31415.WebXR.WebXRInputSource>
struct UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.CameraClearFlags
struct CameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202 
{
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.MaskingTypes
struct MaskingTypes_tF4913BE3D6A47C3AD642902F83C6C52B4A39D2B5 
{
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// Rufus31415.WebXR.WebXRHandedness
struct WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6 
{
	// System.Int32 Rufus31415.WebXR.WebXRHandedness::value__
	int32_t ___value___2;
};

// Rufus31415.WebXR.WebXRInputEvent
struct WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2  : public UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22
{
};

// Rufus31415.WebXR.WebXRJoint
struct WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE  : public RuntimeObject
{
	// UnityEngine.Vector3 Rufus31415.WebXR.WebXRJoint::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion Rufus31415.WebXR.WebXRJoint::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	// System.Single Rufus31415.WebXR.WebXRJoint::Radius
	float ___Radius_2;
};

// Rufus31415.WebXR.WebXRReferenceSpaces
struct WebXRReferenceSpaces_tEB093C866C2DFC657B82F1D5ECDBB40B82B29FC7 
{
	// System.Int32 Rufus31415.WebXR.WebXRReferenceSpaces::value__
	int32_t ___value___2;
};

// Rufus31415.WebXR.WebXRTargetRayModes
struct WebXRTargetRayModes_tB2089A0FE7A613B44825957658D71F7988CA3AC8 
{
	// System.Int32 Rufus31415.WebXR.WebXRTargetRayModes::value__
	int32_t ___value___2;
};

// Rufus31415.WebXR.SimpleWebXR/WebXRInputSourceEventTypes
struct WebXRInputSourceEventTypes_tCC2EC7DADC3770E9CCB94BDD0B1D6068DC5196D5 
{
	// System.Int32 Rufus31415.WebXR.SimpleWebXR/WebXRInputSourceEventTypes::value__
	int32_t ___value___2;
};

// Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes
struct WebXRViewEyes_t01FEE3C77FE8AABF8241D3FA7DBEA3CD89C22D20 
{
	// System.Int32 Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Rufus31415.WebXR.WebXRInputSource
struct WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0  : public RuntimeObject
{
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::Select
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Select_0;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::SelectStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SelectStart_1;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::SelectEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SelectEnd_2;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::Squeeze
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Squeeze_3;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::SqueezeStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SqueezeStart_4;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.WebXRInputSource::SqueezeEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SqueezeEnd_5;
	// System.Boolean Rufus31415.WebXR.WebXRInputSource::Available
	bool ___Available_7;
	// Rufus31415.WebXR.WebXRHandedness Rufus31415.WebXR.WebXRInputSource::Handedness
	int32_t ___Handedness_8;
	// System.Boolean Rufus31415.WebXR.WebXRInputSource::IsPositionTracked
	bool ___IsPositionTracked_9;
	// UnityEngine.Vector3 Rufus31415.WebXR.WebXRInputSource::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_10;
	// UnityEngine.Quaternion Rufus31415.WebXR.WebXRInputSource::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_11;
	// System.Int32 Rufus31415.WebXR.WebXRInputSource::AxesCount
	int32_t ___AxesCount_12;
	// System.Single[] Rufus31415.WebXR.WebXRInputSource::Axes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Axes_13;
	// System.Int32 Rufus31415.WebXR.WebXRInputSource::ButtonsCount
	int32_t ___ButtonsCount_14;
	// Rufus31415.WebXR.WebXRGamepadButton[] Rufus31415.WebXR.WebXRInputSource::Buttons
	WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* ___Buttons_15;
	// Rufus31415.WebXR.WebXRTargetRayModes Rufus31415.WebXR.WebXRInputSource::TargetRayMode
	int32_t ___TargetRayMode_16;
	// System.Boolean Rufus31415.WebXR.WebXRInputSource::Selected
	bool ___Selected_17;
	// System.Boolean Rufus31415.WebXR.WebXRInputSource::Squeezed
	bool ___Squeezed_18;
	// Rufus31415.WebXR.WebXRHand Rufus31415.WebXR.WebXRInputSource::Hand
	WebXRHand_tE80322082AD122643034032253B96E631DA88233* ___Hand_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GameClock
struct GameClock_t3491989A60A593F691A11A5894F2387EADC1D644  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro GameClock::timeText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___timeText_4;
	// TMPro.TextMeshPro GameClock::dateText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___dateText_5;
	// System.Single GameClock::gameRunTime
	float ___gameRunTime_6;
	// System.String GameClock::ampm
	String_t* ___ampm_7;
	// System.Single GameClock::minutes
	float ___minutes_8;
	// System.Single GameClock::hours
	float ___hours_9;
	// System.Int32 GameClock::day
	int32_t ___day_10;
	// System.Int32 GameClock::month
	int32_t ___month_11;
	// System.Int32 GameClock::year
	int32_t ___year_12;
	// System.Single GameClock::currentHours
	float ___currentHours_13;
	// System.Int32 GameClock::currentDay
	int32_t ___currentDay_14;
	// System.Int32 GameClock::currentMonth
	int32_t ___currentMonth_15;
	// System.Int32 GameClock::currentYear
	int32_t ___currentYear_16;
};

// Rufus31415.WebXR.SimpleWebXR
struct SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Rufus31415.WebXR.SimpleWebXR::HideStartButton
	bool ___HideStartButton_4;
	// UnityEngine.GUISkin Rufus31415.WebXR.SimpleWebXR::customSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___customSkin_5;
	// UnityEngine.GameObject Rufus31415.WebXR.SimpleWebXR::RightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RightHand_6;
	// UnityEngine.GameObject Rufus31415.WebXR.SimpleWebXR::LeftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LeftHand_7;
	// UnityEngine.GameObject Rufus31415.WebXR.SimpleWebXR::myEarth
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___myEarth_8;
	// Rufus31415.WebXR.WebXRReferenceSpaces Rufus31415.WebXR.SimpleWebXR::ReferenceSpace
	int32_t ___ReferenceSpace_9;
	// System.Single Rufus31415.WebXR.SimpleWebXR::FallbackUserHeight
	float ___FallbackUserHeight_10;
};

struct SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields
{
	// System.Boolean Rufus31415.WebXR.SimpleWebXR::<InSession>k__BackingField
	bool ___U3CInSessionU3Ek__BackingField_11;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.SimpleWebXR::SessionStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SessionStart_12;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.SimpleWebXR::SessionEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___SessionEnd_13;
	// Rufus31415.WebXR.WebXRInputSource Rufus31415.WebXR.SimpleWebXR::LeftInput
	WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___LeftInput_14;
	// Rufus31415.WebXR.WebXRInputSource Rufus31415.WebXR.SimpleWebXR::RightInput
	WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___RightInput_15;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSelect
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSelect_16;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSelectStart
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSelectStart_17;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSelectEnd
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSelectEnd_18;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSqueeze
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSqueeze_19;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSqueezeStart
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSqueezeStart_20;
	// Rufus31415.WebXR.WebXRInputEvent Rufus31415.WebXR.SimpleWebXR::InputSourceSqueezeEnd
	WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___InputSourceSqueezeEnd_21;
	// UnityEngine.Events.UnityEvent Rufus31415.WebXR.SimpleWebXR::InputSourcesChange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___InputSourcesChange_22;
	// UnityEngine.Vector3 Rufus31415.WebXR.SimpleWebXR::HitTestPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HitTestPosition_23;
	// UnityEngine.Quaternion Rufus31415.WebXR.SimpleWebXR::HitTestRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___HitTestRotation_24;
	// System.Boolean Rufus31415.WebXR.SimpleWebXR::_initialized
	bool ____initialized_25;
	// System.Single[] Rufus31415.WebXR.SimpleWebXR::_dataArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____dataArray_26;
	// System.Byte[] Rufus31415.WebXR.SimpleWebXR::_byteArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteArray_27;
	// System.Single[] Rufus31415.WebXR.SimpleWebXR::_handData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____handData_28;
	// Rufus31415.WebXR.WebXRReferenceSpaces Rufus31415.WebXR.SimpleWebXR::_referenceSpace
	int32_t ____referenceSpace_29;
	// System.Single Rufus31415.WebXR.SimpleWebXR::_fallbackUserHeight
	float ____fallbackUserHeight_30;
	// UnityEngine.Camera[] Rufus31415.WebXR.SimpleWebXR::_cameras
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____cameras_31;
	// System.Boolean Rufus31415.WebXR.SimpleWebXR::_shouldRestoreMainCameraProperties
	bool ____shouldRestoreMainCameraProperties_32;
	// UnityEngine.Color Rufus31415.WebXR.SimpleWebXR::_mainCameraBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____mainCameraBackgroundColor_33;
	// UnityEngine.CameraClearFlags Rufus31415.WebXR.SimpleWebXR::_mainCameraClearFlags
	int32_t ____mainCameraClearFlags_34;
	// UnityEngine.Matrix4x4 Rufus31415.WebXR.SimpleWebXR::_mainCameraProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____mainCameraProjectionMatrix_35;
	// UnityEngine.Rect Rufus31415.WebXR.SimpleWebXR::_mainCameraRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____mainCameraRect_36;
	// System.Single[] Rufus31415.WebXR.SimpleWebXR::_orientationArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____orientationArray_39;
	// System.Byte[] Rufus31415.WebXR.SimpleWebXR::_orientationInfo
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____orientationInfo_40;
	// System.Boolean Rufus31415.WebXR.SimpleWebXR::_orientationDeviceStarted
	bool ____orientationDeviceStarted_41;
};

// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SpinFree::spin
	bool ___spin_4;
	// System.Boolean SpinFree::spinParent
	bool ___spinParent_5;
	// System.Single SpinFree::speed
	float ___speed_6;
	// System.Boolean SpinFree::clockwise
	bool ___clockwise_7;
	// System.Single SpinFree::direction
	float ___direction_8;
	// System.Single SpinFree::directionChangeSpeed
	float ___directionChangeSpeed_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// UnityEngine.CanvasRenderer TMPro.TextMeshPro::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_274;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_275;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_276;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_277;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_278;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_279;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_280;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_281;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_282;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_302;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Rufus31415.WebXR.WebXRGamepadButton[]
struct WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* m_Items[1];

	inline WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Rufus31415.WebXR.WebXRJoint[]
struct WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* m_Items[1];

	inline WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void GameClock::ConvertTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_ConvertTime_m2DA044D2A14220F347032EFCB016374BE6259FE6 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) ;
// System.Void GameClock::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_Display_m8FF66A381C08D9E2D5AAF7E45F046D99F02191A5 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateWebXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateWebXR_mC0D40DDB73AF35F8BA70804DFC95F455CBD67225 (const RuntimeMethod* method) ;
// System.String Rufus31415.WebXR.SimpleWebXR::Stringify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleWebXR_Stringify_mF61DC3FC71B2408177225731089B2C7BFE7AE65A (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_InternalInSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806 (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsArSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsVrSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsVrSupported_m34C7F54764C56FFB535503B96FF8DD877978A3FE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_StartSession_m9E8356F05E9F38C480D40DF70D9BBCB7D1DA83C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InitWebXR(System.Single[],System.Int32,System.Byte[],System.Int32,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InitWebXR_m4133B55C32518F147897ED2F150171EC8CA4122A (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___dataArray0, int32_t ___length1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray2, int32_t ____byteArrayLength3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handDataArray4, int32_t ___handDataArrayLength5, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Rufus31415.WebXR.SimpleWebXR>()
inline SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* Object_FindObjectOfType_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_m0DE0DF93095D2E33B3A5AD87CAB9C5812E737C1E (const RuntimeMethod* method)
{
	return ((  SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// Rufus31415.WebXR.SimpleWebXR Rufus31415.WebXR.SimpleWebXR::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* SimpleWebXR_GetInstance_mF7E17097D73018D1F9BEF11A6296EEE6BE53AD4B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Rufus31415.WebXR.SimpleWebXR>()
inline SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* GameObject_AddComponent_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_mAABEE61F4E386C3122237CE7525FCD630343E12E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Rufus31415.WebXR.SimpleWebXR::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsArSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsArSupported_mDEB6C9318F1C4B3885B81E6B44B2BA95178730AF (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsVrSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsVrSupported_m6ED0228CFE70500C259B4D2F689C4A1A6D2B8CE1 (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsOVRMultiview2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsOVRMultiview2Supported_m42553FC63D5C146CE07D0179E2992657E75BC024 (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsOculusMultiviewSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsOculusMultiviewSupported_mF9C8B3E9711ED6180B4F3426C4E8FD49560F97FE (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalStartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalStartSession_m770055EC19C695874285EFCCA20308A08B6C0F7A (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalHitTestCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalHitTestCancel_mD4F5342F0D4B64873CD4CEFE95FA5F171449F0BB (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalEndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalEndSession_m761F7AB1C0540DDAEEBF694AF472A1D065FCCA09 (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalHitTestStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalHitTestStart_mDCE97F3E87C12EAE3DC51B003BBCF15814B04B5D (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateCamera(Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateCamera_m6AE168CE0912AF0537211F92AAC96AE93A38B4BB (int32_t ___eye0, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateInput(Rufus31415.WebXR.WebXRInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateInput_m6504E2414E9072F70E964A09FAB91B88B4B7F0E7 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___inputSource0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateHitTest_m9DB0AD3038638D0B716A10AC65408A68A27D179E (const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_InSession()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4_inline (const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::set_InSession(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleWebXR_set_InSession_mB6B03A226702FC9BE264B9AADD5DEDEF06DD220D_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single Rufus31415.WebXR.SimpleWebXR::get_UserHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleWebXR_get_UserHeight_m036B1DAE2FAAD1EC1F5CB5052406ADBECEF3B5BE (const RuntimeMethod* method) ;
// UnityEngine.Camera Rufus31415.WebXR.SimpleWebXR::get_LeftEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SimpleWebXR_get_LeftEye_mAB02615E7346327B1BAB79E87D1B48184EECA3BF (const RuntimeMethod* method) ;
// System.String Rufus31415.WebXR.SimpleWebXR::Stringify(UnityEngine.Camera,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleWebXR_Stringify_mFACD299DD7728EE8FD1A1F0BB0BABC1C2E1FBB22 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, String_t* ___name1, const RuntimeMethod* method) ;
// UnityEngine.Camera Rufus31415.WebXR.SimpleWebXR::get_RightEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SimpleWebXR_get_RightEye_m2FB35F84C033EFF599A034DB2836611D07521B2B (const RuntimeMethod* method) ;
// Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes Rufus31415.WebXR.SimpleWebXR::get_ViewEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleWebXR_get_ViewEye_m13B9E12D5982D33A64035830D84BD5F78284DF3F (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Camera>(T,UnityEngine.Transform)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Object_Instantiate_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m4A092134AE879AE59E6D036DC823CBB22EFB41A9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_mA74F538C124B391EF03C46A50CA7FF7B505B7602 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3592AA7AF3B2C809AAB02110B166B9A6F9263AD8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Rufus31415.WebXR.SimpleWebXR::ToUnityPosition(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Rufus31415.WebXR.SimpleWebXR::ToUnityRotation(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::RaiseInputSourceEvent(System.Byte,Rufus31415.WebXR.SimpleWebXR/WebXRInputSourceEventTypes,Rufus31415.WebXR.WebXRInputEvent,UnityEngine.Events.UnityEvent,Rufus31415.WebXR.WebXRInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7 (uint8_t ___mask0, int32_t ___type1, WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___webxrInputEvent2, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___unityEvent3, WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___inputSource4, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::CheckPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_CheckPan_mEC7A02C6D75A43E748595A7C6ECF827DD2532004 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Rufus31415.WebXR.WebXRInputSource>::Invoke(T0)
inline void UnityEvent_1_Invoke_m3B1407A043A3EC9ED3B5AD3C463C7ECDEB184FFA (UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22* __this, WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22*, WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_HitTestInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_HitTestInProgress_mCF6D46A8EBA78CD272A3D291F4F935EE212DF788 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalGetDeviceOrientation(System.Single[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalGetDeviceOrientation_m8C5AD00F78B833D465B5E0F2035EC2791950056C (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___orientationArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___orientationInfo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.WebXRInputSource::.ctor(Rufus31415.WebXR.WebXRHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRInputSource__ctor_m7ADE5CF9C11CC57668D7A3FD4FA5C0521D3EBE95 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.WebXRInputEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374 (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* __this, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.WebXRHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHand__ctor_mEFE6796E55705265CF59B7D5D4C00F6844AC02AC (WebXRHand_tE80322082AD122643034032253B96E631DA88233* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.WebXRGamepadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRGamepadButton__ctor_mBB3834A8D35FB830C41E9ABB61AD6B485CD4A600 (WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* __this, const RuntimeMethod* method) ;
// System.Void Rufus31415.WebXR.SimpleWebXR::HapticPulse(Rufus31415.WebXR.WebXRHandedness,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_HapticPulse_m69EB5C88533B76AD19441FDE9F16462FA097F31E (int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Rufus31415.WebXR.WebXRInputSource>::.ctor()
inline void UnityEvent_1__ctor_m7774CDCDFD87E3C4D5508D6AA05DEB9B7E756D22 (UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t31C888F8C44DDB8B9B493BBADBD76F323F2ACD22*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Rufus31415.WebXR.WebXRJoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRJoint__ctor_mC4692ADEB204562343F776923FCE904C16EB1656 (WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL InternalStartSession();
IL2CPP_EXTERN_C void DEFAULT_CALL InternalEndSession();
IL2CPP_EXTERN_C void DEFAULT_CALL InitWebXR(float*, int32_t, uint8_t*, int32_t, float*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL InternalIsArSupported();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL InternalIsVrSupported();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL InternalIsOVRMultiview2Supported();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL InternalIsOculusMultiviewSupported();
IL2CPP_EXTERN_C void DEFAULT_CALL InternalHitTestStart();
IL2CPP_EXTERN_C void DEFAULT_CALL InternalHitTestCancel();
IL2CPP_EXTERN_C void DEFAULT_CALL InternalGetDeviceOrientation(float*, uint8_t*);
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
// System.Void SpinFree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree_Update_m3301EFBD1B7DC6F06D34CCA773AFE993A7848A65 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// if (direction < 1f) {
		float L_0 = __this->___direction_8;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// direction += Time.deltaTime / (directionChangeSpeed / 2);
		float L_1 = __this->___direction_8;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_3 = __this->___directionChangeSpeed_9;
		__this->___direction_8 = ((float)il2cpp_codegen_add(L_1, ((float)(L_2/((float)(L_3/(2.0f)))))));
	}

IL_002c:
	{
		// if (spin) {
		bool L_4 = __this->___spin_4;
		if (!L_4)
		{
			goto IL_00fc;
		}
	}
	{
		// if (clockwise) {
		bool L_5 = __this->___clockwise_7;
		if (!L_5)
		{
			goto IL_0099;
		}
	}
	{
		// if (spinParent)
		bool L_6 = __this->___spinParent_5;
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		// transform.parent.transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_11 = __this->___speed_6;
		float L_12 = __this->___direction_8;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_9, L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), NULL);
		return;
	}

IL_0075:
	{
		// transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_16 = __this->___speed_6;
		float L_17 = __this->___direction_8;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_14, L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), NULL);
		return;
	}

IL_0099:
	{
		// if (spinParent)
		bool L_19 = __this->___spinParent_5;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// transform.parent.transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_23, NULL);
		float L_25 = __this->___speed_6;
		float L_26 = __this->___direction_8;
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_22, L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_25, L_26)), L_27)), NULL);
		return;
	}

IL_00d4:
	{
		// transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_29, NULL);
		float L_31 = __this->___speed_6;
		float L_32 = __this->___direction_8;
		float L_33;
		L_33 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_28, L_30, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, L_32)), L_33)), NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void SpinFree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree__ctor_m2D12C8C18B2F2680D0C70305FD030A1A68E0CBA5 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_6 = (10.0f);
		// public bool clockwise = true;
		__this->___clockwise_7 = (bool)1;
		// public float direction = 1f;
		__this->___direction_8 = (1.0f);
		// public float directionChangeSpeed = 2f;
		__this->___directionChangeSpeed_9 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_Start_m79176BA9DF7B64F72F2A51DD530A31DC121C103C (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF9834DDAFF7406CBC46AB43CE5CEE1BAB46EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ampm = "PM";
		__this->___ampm_7 = _stringLiteralCEF9834DDAFF7406CBC46AB43CE5CEE1BAB46EC4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ampm_7), (void*)_stringLiteralCEF9834DDAFF7406CBC46AB43CE5CEE1BAB46EC4);
		// currentDay = 16;
		__this->___currentDay_14 = ((int32_t)16);
		// currentMonth = 12;
		__this->___currentMonth_15 = ((int32_t)12);
		// currentYear = 2021;
		__this->___currentYear_16 = ((int32_t)2021);
		// dateText.text = currentMonth.ToString("00") + "/" + currentDay.ToString("00") + "/" + currentYear.ToString("00");
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___dateText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___currentMonth_15);
		String_t* L_4;
		L_4 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_3, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___currentDay_14);
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_7, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t* L_11 = (&__this->___currentYear_16);
		String_t* L_12;
		L_12 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_11, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_13);
		// }
		return;
	}
}
// System.Void GameClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_Update_mA820611A720ECCF1706EB1FB4199468299ACC418 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	{
		// gameRunTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___gameRunTime_6 = L_0;
		// ConvertTime();
		GameClock_ConvertTime_m2DA044D2A14220F347032EFCB016374BE6259FE6(__this, NULL);
		// }
		return;
	}
}
// System.Void GameClock::ConvertTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_ConvertTime_m2DA044D2A14220F347032EFCB016374BE6259FE6 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	{
		// minutes = Mathf.Floor(gameRunTime % 60);
		float L_0 = __this->___gameRunTime_6;
		float L_1;
		L_1 = floorf((fmodf(L_0, (60.0f))));
		__this->___minutes_8 = L_1;
		// hours = Mathf.Floor(gameRunTime / 60 % 12);
		float L_2 = __this->___gameRunTime_6;
		float L_3;
		L_3 = floorf((fmodf(((float)(L_2/(60.0f))), (12.0f))));
		__this->___hours_9 = L_3;
		// Display();
		GameClock_Display_m8FF66A381C08D9E2D5AAF7E45F046D99F02191A5(__this, NULL);
		// }
		return;
	}
}
// System.Void GameClock::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_Display_m8FF66A381C08D9E2D5AAF7E45F046D99F02191A5 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeText.text = hours.ToString("00") + ":" + minutes.ToString("00") + " " + ampm;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___timeText_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		float* L_3 = (&__this->___hours_9);
		String_t* L_4;
		L_4 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_3, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		float* L_7 = (&__this->___minutes_8);
		String_t* L_8;
		L_8 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_7, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = __this->___ampm_7;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_12);
		// dateText.text = currentMonth.ToString("00") + "/" + currentDay.ToString("00") + "/" + currentYear.ToString("00");
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_13 = __this->___dateText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		int32_t* L_16 = (&__this->___currentMonth_15);
		String_t* L_17;
		L_17 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_16, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		ArrayElementTypeCheck (L_18, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		int32_t* L_20 = (&__this->___currentDay_14);
		String_t* L_21;
		L_21 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_20, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		ArrayElementTypeCheck (L_22, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		int32_t* L_24 = (&__this->___currentYear_16);
		String_t* L_25;
		L_25 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_24, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_26);
		// }
		return;
	}
}
// System.Void GameClock::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock_Play_m7E10EF8B5FD483C623DD058C3FD30EA7696B243A (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C156DBE6BCA156195A9475459DC6CC9D332DE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// Debug.Log("Play Fired");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC8C156DBE6BCA156195A9475459DC6CC9D332DE6, NULL);
		// }
		return;
	}
}
// System.Void GameClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClock__ctor_m738A6CC25387D9293BC7049486079B25F2BDBF51 (GameClock_t3491989A60A593F691A11A5894F2387EADC1D644* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rufus31415.WebXR.SimpleWebXR::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_LateUpdate_mF14A80E845AE1973F47313D32D8E5A1B1833D1C6 (SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _referenceSpace = ReferenceSpace;
		int32_t L_0 = __this->___ReferenceSpace_9;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____referenceSpace_29 = L_0;
		// _fallbackUserHeight = FallbackUserHeight;
		float L_1 = __this->___FallbackUserHeight_10;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____fallbackUserHeight_30 = L_1;
		// UpdateWebXR();
		SimpleWebXR_UpdateWebXR_mC0D40DDB73AF35F8BA70804DFC95F455CBD67225(NULL);
		// }
		return;
	}
}
// System.String Rufus31415.WebXR.SimpleWebXR::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleWebXR_ToString_m4BE6925B3A723EE6649429324FBC7C1999DBF3AA (SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => Stringify();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SimpleWebXR_Stringify_mF61DC3FC71B2408177225731089B2C7BFE7AE65A(NULL);
		return L_0;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_OnGUI_mA4322874D1A9EC136B1EC6110F45E01DF11E14C2 (SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A38EC11DC1C955EA0CEE4C12FC60C052E80889D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral943BBAAC383E679194E396E759525D7F410A8D3B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* G_B7_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	String_t* G_B6_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	{
		// GUI.skin = customSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->___customSkin_5;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_0, NULL);
		// if (HideStartButton) return;
		bool L_1 = __this->___HideStartButton_4;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (HideStartButton) return;
		return;
	}

IL_0014:
	{
		// if (!InternalInSession)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806(NULL);
		if (L_2)
		{
			goto IL_00a3;
		}
	}
	{
		// var width = 550;
		V_0 = ((int32_t)550);
		// var height = 120;
		V_1 = ((int32_t)120);
		// if ((IsArSupported() || IsVrSupported()))
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F(NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SimpleWebXR_IsVrSupported_m34C7F54764C56FFB535503B96FF8DD877978A3FE(NULL);
		if (!L_4)
		{
			goto IL_007c;
		}
	}

IL_0035:
	{
		// if (GUI.Button(new Rect((Screen.width - width) / 2, Screen.height - (height*4), width, height), "Touch to Enter " + (IsArSupported() ? "AR" : "VR")))
		int32_t L_5;
		L_5 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), ((float)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, L_6))/2))), ((float)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, 4))))), ((float)L_9), ((float)L_10), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F(NULL);
		G_B6_0 = _stringLiteral943BBAAC383E679194E396E759525D7F410A8D3B;
		G_B6_1 = L_11;
		if (L_12)
		{
			G_B7_0 = _stringLiteral943BBAAC383E679194E396E759525D7F410A8D3B;
			G_B7_1 = L_11;
			goto IL_0065;
		}
	}
	{
		G_B8_0 = _stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_006a;
	}

IL_0065:
	{
		G_B8_0 = _stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_006a:
	{
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B8_1, G_B8_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(G_B8_2, L_13, NULL);
		if (!L_14)
		{
			goto IL_00a3;
		}
	}
	{
		// StartSession();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_StartSession_m9E8356F05E9F38C480D40DF70D9BBCB7D1DA83C0(NULL);
		return;
	}

IL_007c:
	{
		// GUI.Label(new Rect((Screen.width - width) / 2, Screen.height - (height*4), width, height), "WebXR is not supported on this device.");
		int32_t L_15;
		L_15 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		memset((&L_21), 0, sizeof(L_21));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_21), ((float)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, L_16))/2))), ((float)((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)il2cpp_codegen_multiply(L_18, 4))))), ((float)L_19), ((float)L_20), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_21, _stringLiteral4A38EC11DC1C955EA0CEE4C12FC60C052E80889D, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_InSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool InSession { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___U3CInSessionU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::set_InSession(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_set_InSession_mB6B03A226702FC9BE264B9AADD5DEDEF06DD220D (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool InSession { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___U3CInSessionU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single Rufus31415.WebXR.SimpleWebXR::get_UserHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleWebXR_get_UserHeight_m036B1DAE2FAAD1EC1F5CB5052406ADBECEF3B5BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float UserHeight => _dataArray[100];
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_1 = ((int32_t)100);
		float L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// UnityEngine.Camera Rufus31415.WebXR.SimpleWebXR::get_LeftEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SimpleWebXR_get_LeftEye_mAB02615E7346327B1BAB79E87D1B48184EECA3BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera LeftEye => _cameras[0];
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_1 = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// UnityEngine.Camera Rufus31415.WebXR.SimpleWebXR::get_RightEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SimpleWebXR_get_RightEye_m2FB35F84C033EFF599A034DB2836611D07521B2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera RightEye => _cameras[1];
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_1 = 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_HitTestInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_HitTestInProgress_mCF6D46A8EBA78CD272A3D291F4F935EE212DF788 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool HitTestInProgress => _byteArray[48] != 0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_1 = ((int32_t)48);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_HitTestSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_HitTestSupported_m31224FEB6687F51BF985FA087435546ED93C7BCB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool HitTestSupported => _byteArray[49] != 0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_1 = ((int32_t)49);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initialized) return;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____initialized_25;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (_initialized) return;
		return;
	}

IL_0008:
	{
		// InitWebXR(_dataArray, _dataArray.Length, _byteArray, _byteArray.Length, _handData, _handData.Length);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		SimpleWebXR_InitWebXR_m4133B55C32518F147897ED2F150171EC8CA4122A(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		// _initialized = true;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____initialized_25 = (bool)1;
		// }
		return;
	}
}
// Rufus31415.WebXR.WebXRInputSource Rufus31415.WebXR.SimpleWebXR::GetInput(Rufus31415.WebXR.WebXRHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* SimpleWebXR_GetInput_mF19FFAF42498A6E6E1EBB53EFF6E5E4B9B2BE634 (int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return handedness == WebXRHandedness.Left ? LeftInput : RightInput;
		int32_t L_0 = ___handedness0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		return L_1;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_2 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		return L_2;
	}
}
// Rufus31415.WebXR.SimpleWebXR Rufus31415.WebXR.SimpleWebXR::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* SimpleWebXR_GetInstance_mF7E17097D73018D1F9BEF11A6296EEE6BE53AD4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_m0DE0DF93095D2E33B3A5AD87CAB9C5812E737C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FindObjectOfType<SimpleWebXR>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_0;
		L_0 = Object_FindObjectOfType_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_m0DE0DF93095D2E33B3A5AD87CAB9C5812E737C1E(Object_FindObjectOfType_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_m0DE0DF93095D2E33B3A5AD87CAB9C5812E737C1E_RuntimeMethod_var);
		return L_0;
	}
}
// Rufus31415.WebXR.SimpleWebXR Rufus31415.WebXR.SimpleWebXR::EnsureInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* SimpleWebXR_EnsureInstance_mA6EC24E1BD83D4C92B41B365935E4D2A6F436BEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_mAABEE61F4E386C3122237CE7525FCD630343E12E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01B94D134B6CB3892E74BE95B521C09D285D326A);
		s_Il2CppMethodInitialized = true;
	}
	SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* V_0 = NULL;
	{
		// var xr = GetInstance();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_0;
		L_0 = SimpleWebXR_GetInstance_mF7E17097D73018D1F9BEF11A6296EEE6BE53AD4B(NULL);
		V_0 = L_0;
		// if (xr) return xr;
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (xr) return xr;
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		// var newGameObject = new GameObject("WebXR");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral01B94D134B6CB3892E74BE95B521C09D285D326A, NULL);
		// return newGameObject.AddComponent<SimpleWebXR>();
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_5;
		L_5 = GameObject_AddComponent_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_mAABEE61F4E386C3122237CE7525FCD630343E12E(L_4, GameObject_AddComponent_TisSimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_mAABEE61F4E386C3122237CE7525FCD630343E12E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsArSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// return InternalIsArSupported();
		bool L_0;
		L_0 = SimpleWebXR_InternalIsArSupported_mDEB6C9318F1C4B3885B81E6B44B2BA95178730AF(NULL);
		return L_0;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsVrSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsVrSupported_m34C7F54764C56FFB535503B96FF8DD877978A3FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// return InternalIsVrSupported();
		bool L_0;
		L_0 = SimpleWebXR_InternalIsVrSupported_m6ED0228CFE70500C259B4D2F689C4A1A6D2B8CE1(NULL);
		return L_0;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsMultiview2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsMultiview2Supported_m50631B19164AE4F37AE929C78805005AB0B1214E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// return InternalIsOVRMultiview2Supported();
		bool L_0;
		L_0 = SimpleWebXR_InternalIsOVRMultiview2Supported_m42553FC63D5C146CE07D0179E2992657E75BC024(NULL);
		return L_0;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::IsOculusMultiviewSampledSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_IsOculusMultiviewSampledSupported_mE9378E7AA480ADEEB895B5DA931BF33C5A595413 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// return InternalIsOculusMultiviewSupported();
		bool L_0;
		L_0 = SimpleWebXR_InternalIsOculusMultiviewSupported_mF9C8B3E9711ED6180B4F3426C4E8FD49560F97FE(NULL);
		return L_0;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_StartSession_m9E8356F05E9F38C480D40DF70D9BBCB7D1DA83C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// if (InternalInSession) return;
		bool L_0;
		L_0 = SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (InternalInSession) return;
		return;
	}

IL_000d:
	{
		// InternalStartSession();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_InternalStartSession_m770055EC19C695874285EFCCA20308A08B6C0F7A(NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::EndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_EndSession_m6C5D5CDD5792ADF3A08C42323E633A25CCB6716A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!InternalInSession) return;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!InternalInSession) return;
		return;
	}

IL_0008:
	{
		// InternalHitTestCancel();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_InternalHitTestCancel_mD4F5342F0D4B64873CD4CEFE95FA5F171449F0BB(NULL);
		// InternalEndSession();
		SimpleWebXR_InternalEndSession_m761F7AB1C0540DDAEEBF694AF472A1D065FCCA09(NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::HitTestStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_HitTestStart_mBA9CA0D92B15C926F3A79215591FF2F9EA8DB596 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// InternalHitTestStart();
		SimpleWebXR_InternalHitTestStart_mDCE97F3E87C12EAE3DC51B003BBCF15814B04B5D(NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::HitTestCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_HitTestCancel_m69C9D13EEA7FB398BA51098C7AFE7F2452FF8F23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_Initialize_m4F318842651DECDD1C19E7C49E01845D194C9BBA(NULL);
		// InternalHitTestCancel();
		SimpleWebXR_InternalHitTestCancel_mD4F5342F0D4B64873CD4CEFE95FA5F171449F0BB(NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateWebXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateWebXR_mC0D40DDB73AF35F8BA70804DFC95F455CBD67225 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateCamera(WebXRViewEyes.Left);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_UpdateCamera_m6AE168CE0912AF0537211F92AAC96AE93A38B4BB(1, NULL);
		// UpdateCamera(WebXRViewEyes.Right);
		SimpleWebXR_UpdateCamera_m6AE168CE0912AF0537211F92AAC96AE93A38B4BB(2, NULL);
		// UpdateInput(LeftInput);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		SimpleWebXR_UpdateInput_m6504E2414E9072F70E964A09FAB91B88B4B7F0E7(L_0, NULL);
		// UpdateInput(RightInput);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		SimpleWebXR_UpdateInput_m6504E2414E9072F70E964A09FAB91B88B4B7F0E7(L_1, NULL);
		// LeftInput.Available = _byteArray[44] != 0;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_2 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_4 = ((int32_t)44);
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		L_2->___Available_7 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		// RightInput.Available = _byteArray[45] != 0;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_6 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_8 = ((int32_t)45);
		uint8_t L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		L_6->___Available_7 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		// if (_byteArray[3] != 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// InputSourcesChange.Invoke();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourcesChange_22;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_13, NULL);
		// _byteArray[3] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)0);
	}

IL_0065:
	{
		// UpdateHitTest();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_UpdateHitTest_m9DB0AD3038638D0B716A10AC65408A68A27D179E(NULL);
		// if (InternalInSession && !InSession) //New session detected
		bool L_15;
		L_15 = SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806(NULL);
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4_inline(NULL);
		if (L_16)
		{
			goto IL_0089;
		}
	}
	{
		// InSession = true;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_set_InSession_mB6B03A226702FC9BE264B9AADD5DEDEF06DD220D_inline((bool)1, NULL);
		// SessionStart.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionStart_12;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_17, NULL);
		return;
	}

IL_0089:
	{
		// else if (InSession && !InternalInSession) // End of session detected
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4_inline(NULL);
		if (!L_18)
		{
			goto IL_00a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806(NULL);
		if (L_19)
		{
			goto IL_00a7;
		}
	}
	{
		// InSession = false;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_set_InSession_mB6B03A226702FC9BE264B9AADD5DEDEF06DD220D_inline((bool)0, NULL);
		// SessionEnd.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionEnd_13;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_20, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::HapticPulse(Rufus31415.WebXR.WebXRHandedness,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_HapticPulse_m69EB5C88533B76AD19441FDE9F16462FA097F31E (int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dataArray[101 + (int)hand] = intensity;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_1 = ___hand0;
		float L_2 = ___intensity1;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)101), (int32_t)L_1))), (float)L_2);
		// _dataArray[103 + (int)hand] = duration;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_4 = ___hand0;
		float L_5 = ___duration2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)103), (int32_t)L_4))), (float)L_5);
		// }
		return;
	}
}
// System.String Rufus31415.WebXR.SimpleWebXR::Stringify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleWebXR_Stringify_mF61DC3FC71B2408177225731089B2C7BFE7AE65A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35F95BE68CFC284B8822288DAE06C21A7AFFB3DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B0501DF6AE59C5AF63014DFC719F11BA30E487);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAC91091FCA3A2D07B6E8154AD6DE7F1D274735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEFC85190C88A700FEA175DD393D5557201D7F72);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	StringBuilder_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	StringBuilder_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t* G_B6_1 = NULL;
	StringBuilder_t* G_B6_2 = NULL;
	StringBuilder_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	StringBuilder_t* G_B9_1 = NULL;
	StringBuilder_t* G_B9_2 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		// sb.Append("In session : ");
		StringBuilder_t* L_1 = L_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralFEFC85190C88A700FEA175DD393D5557201D7F72, NULL);
		// sb.AppendLine(InSession ? "Yes" : "No");
		StringBuilder_t* L_3 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4_inline(NULL);
		G_B1_0 = L_3;
		G_B1_1 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_3;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0025:
	{
		StringBuilder_t* L_5;
		L_5 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B3_1, G_B3_0, NULL);
		// sb.Append("AR supported : ");
		StringBuilder_t* L_6 = G_B3_2;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral35F95BE68CFC284B8822288DAE06C21A7AFFB3DA, NULL);
		// sb.AppendLine(IsArSupported() ? "Yes" : "No");
		StringBuilder_t* L_8 = L_6;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F(NULL);
		G_B4_0 = L_8;
		G_B4_1 = L_8;
		if (L_9)
		{
			G_B5_0 = L_8;
			G_B5_1 = L_8;
			goto IL_0046;
		}
	}
	{
		G_B6_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004b;
	}

IL_0046:
	{
		G_B6_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004b:
	{
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B6_1, G_B6_0, NULL);
		// sb.Append("VR supported : ");
		StringBuilder_t* L_11 = G_B6_2;
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralB6B0501DF6AE59C5AF63014DFC719F11BA30E487, NULL);
		// sb.AppendLine(IsVrSupported() ? "Yes" : "No");
		StringBuilder_t* L_13 = L_11;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = SimpleWebXR_IsVrSupported_m34C7F54764C56FFB535503B96FF8DD877978A3FE(NULL);
		G_B7_0 = L_13;
		G_B7_1 = L_13;
		if (L_14)
		{
			G_B8_0 = L_13;
			G_B8_1 = L_13;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0071;
	}

IL_006c:
	{
		G_B9_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0071:
	{
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B9_1, G_B9_0, NULL);
		// sb.Append("User height : ");
		StringBuilder_t* L_16 = G_B9_2;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralDAAC91091FCA3A2D07B6E8154AD6DE7F1D274735, NULL);
		// sb.AppendLine(UserHeight.ToString("0.0"));
		StringBuilder_t* L_18 = L_16;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = SimpleWebXR_get_UserHeight_m036B1DAE2FAAD1EC1F5CB5052406ADBECEF3B5BE(NULL);
		V_0 = L_19;
		String_t* L_20;
		L_20 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_18, L_20, NULL);
		// sb.AppendLine(Stringify(LeftEye, "left"));
		StringBuilder_t* L_22 = L_18;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = SimpleWebXR_get_LeftEye_mAB02615E7346327B1BAB79E87D1B48184EECA3BF(NULL);
		String_t* L_24;
		L_24 = SimpleWebXR_Stringify_mFACD299DD7728EE8FD1A1F0BB0BABC1C2E1FBB22(L_23, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_22, L_24, NULL);
		// sb.AppendLine(Stringify(RightEye, "right"));
		StringBuilder_t* L_26 = L_22;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27;
		L_27 = SimpleWebXR_get_RightEye_m2FB35F84C033EFF599A034DB2836611D07521B2B(NULL);
		String_t* L_28;
		L_28 = SimpleWebXR_Stringify_mFACD299DD7728EE8FD1A1F0BB0BABC1C2E1FBB22(L_27, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_26, L_28, NULL);
		// sb.Append(LeftInput.ToString());
		StringBuilder_t* L_30 = L_26;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_31 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_32, NULL);
		// sb.Append(RightInput.ToString());
		StringBuilder_t* L_34 = L_30;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_35 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		// return sb.ToString();
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		return L_38;
	}
}
// Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes Rufus31415.WebXR.SimpleWebXR::get_ViewEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleWebXR_get_ViewEye_m13B9E12D5982D33A64035830D84BD5F78284DF3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static WebXRViewEyes ViewEye => (WebXRViewEyes)_byteArray[0];
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(L_2);
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::get_InternalInSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_get_InternalInSession_mCFACE9888E4D3BDD7398E7A5DC9C01207574B806 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool InternalInSession => _byteArray[0] != 0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateCamera(Rufus31415.WebXR.SimpleWebXR/WebXRViewEyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateCamera_m6AE168CE0912AF0537211F92AAC96AE93A38B4BB (int32_t ___eye0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m4A092134AE879AE59E6D036DC823CBB22EFB41A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F6B7873CA6051E6DB51EBB95A637EF32FDD3DFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77CB7008750A68624D71AF5BC10AB4DC001E82BF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var id = (eye == WebXRViewEyes.Left) ? 0 : 1;
		int32_t L_0 = ___eye0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 0;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		// if ((ViewEye & eye) != eye)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SimpleWebXR_get_ViewEye_m13B9E12D5982D33A64035830D84BD5F78284DF3F(NULL);
		int32_t L_2 = ___eye0;
		int32_t L_3 = ___eye0;
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) == ((int32_t)L_3)))
		{
			goto IL_0084;
		}
	}
	{
		// if (_cameras[id])
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_4 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		// if (eye == WebXRViewEyes.Left) // don't destroy main camera
		int32_t L_9 = ___eye0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		// if (_shouldRestoreMainCameraProperties)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_10 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____shouldRestoreMainCameraProperties_32;
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		// Camera.main.backgroundColor = _mainCameraBackgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraBackgroundColor_33;
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_11, L_12, NULL);
		// Camera.main.clearFlags = _mainCameraClearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_14 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraClearFlags_34;
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_13, L_14, NULL);
		// Camera.main.projectionMatrix = _mainCameraProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraProjectionMatrix_35;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_15, L_16, NULL);
		// Camera.main.rect = _mainCameraRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraRect_36;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_17, L_18, NULL);
		goto IL_007b;
	}

IL_006a:
	{
		// Destroy(_cameras[id].gameObject);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_19 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_23, NULL);
	}

IL_007b:
	{
		// _cameras[id] = null;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_24 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_25 = V_0;
		ArrayElementTypeCheck (L_24, NULL);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
	}

IL_0083:
	{
		// return;
		return;
	}

IL_0084:
	{
		// if (!_cameras[id])
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_26 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_29, NULL);
		if (L_30)
		{
			goto IL_01ae;
		}
	}
	{
		// if (id > 0)
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00f9;
		}
	}
	{
		// _cameras[id] = Instantiate(Camera.main, Camera.main.gameObject.transform.parent);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_32 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_33 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34;
		L_34 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35;
		L_35 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = Object_Instantiate_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m4A092134AE879AE59E6D036DC823CBB22EFB41A9(L_34, L_38, Object_Instantiate_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m4A092134AE879AE59E6D036DC823CBB22EFB41A9_RuntimeMethod_var);
		ArrayElementTypeCheck (L_32, L_39);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)L_39);
		// _cameras[id].name = "WebXRCamera_" + id;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_40 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_41 = V_0;
		int32_t L_42 = L_41;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral77CB7008750A68624D71AF5BC10AB4DC001E82BF, L_44, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_43, L_45, NULL);
		// _cameras[id].depth = Camera.main.depth - 1;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_46 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_47 = V_0;
		int32_t L_48 = L_47;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50;
		L_50 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_51;
		L_51 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_50, NULL);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_49, ((float)il2cpp_codegen_subtract(L_51, (1.0f))), NULL);
		goto IL_0175;
	}

IL_00f9:
	{
		// _shouldRestoreMainCameraProperties = false;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____shouldRestoreMainCameraProperties_32 = (bool)0;
		// if (Camera.main)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_52;
		L_52 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_52, NULL);
		if (!L_53)
		{
			goto IL_015b;
		}
	}
	{
		// _cameras[0] = Camera.main;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_54 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_55;
		L_55 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)L_55);
		// _shouldRestoreMainCameraProperties = true;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____shouldRestoreMainCameraProperties_32 = (bool)1;
		// _mainCameraBackgroundColor = Camera.main.backgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_56;
		L_56 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57;
		L_57 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_56, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraBackgroundColor_33 = L_57;
		// _mainCameraClearFlags = Camera.main.clearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_58;
		L_58 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_59;
		L_59 = Camera_get_clearFlags_mA74F538C124B391EF03C46A50CA7FF7B505B7602(L_58, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraClearFlags_34 = L_59;
		// _mainCameraProjectionMatrix = Camera.main.projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_60;
		L_60 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_61;
		L_61 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_60, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraProjectionMatrix_35 = L_61;
		// _mainCameraRect = Camera.main.rect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_62;
		L_62 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_63;
		L_63 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_62, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____mainCameraRect_36 = L_63;
		goto IL_0175;
	}

IL_015b:
	{
		// var go = new GameObject("WebXRCamera_0");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_64, _stringLiteral4F6B7873CA6051E6DB51EBB95A637EF32FDD3DFB, NULL);
		V_4 = L_64;
		// _cameras[0] = go.AddComponent<Camera>();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_65 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_67;
		L_67 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_66, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)L_67);
	}

IL_0175:
	{
		// if (IsArSupported())
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = SimpleWebXR_IsArSupported_mB11D6AF732E4002850B8C27754FEFB96F653BC6F(NULL);
		if (!L_68)
		{
			goto IL_01ae;
		}
	}
	{
		// _cameras[id].clearFlags = CameraClearFlags.SolidColor;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_69 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_70 = V_0;
		int32_t L_71 = L_70;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_72, 2, NULL);
		// _cameras[id].backgroundColor = new Color(0, 0, 0, 0);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_73 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		memset((&L_77), 0, sizeof(L_77));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_77), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_76, L_77, NULL);
	}

IL_01ae:
	{
		// var floatStartId = id * 27;
		int32_t L_78 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_78, ((int32_t)27)));
		// var rect = new Rect(_dataArray[floatStartId + 23], _dataArray[floatStartId + 24], _dataArray[floatStartId + 25], _dataArray[floatStartId + 26]);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_80 = V_1;
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, ((int32_t)23)));
		float L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_84 = V_1;
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)24)));
		float L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_88 = V_1;
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)25)));
		float L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_91 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_92 = V_1;
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, ((int32_t)26)));
		float L_94 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), L_82, L_86, L_90, L_94, NULL);
		// if (id > 0)
		int32_t L_95 = V_0;
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_022d;
		}
	}
	{
		// if (_cameras[0] && _cameras[0].rect == rect)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_96 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_97 = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_98 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_98, NULL);
		if (!L_99)
		{
			goto IL_021b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_100 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_101 = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_102 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_103;
		L_103 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_102, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_104 = V_2;
		bool L_105;
		L_105 = Rect_op_Equality_m3592AA7AF3B2C809AAB02110B166B9A6F9263AD8(L_103, L_104, NULL);
		if (!L_105)
		{
			goto IL_021b;
		}
	}
	{
		// _cameras[id].gameObject.SetActive(false);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_106 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_107 = V_0;
		int32_t L_108 = L_107;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110;
		L_110 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_109, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_110, (bool)0, NULL);
		// return;
		return;
	}

IL_021b:
	{
		// _cameras[id].gameObject.SetActive(true);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_111 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_114 = (L_111)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_114, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_115, (bool)1, NULL);
	}

IL_022d:
	{
		// _cameras[id].rect = rect;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_116 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_117 = V_0;
		int32_t L_118 = L_117;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_119 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_120 = V_2;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_119, L_120, NULL);
		// var pm = new Matrix4x4();
		il2cpp_codegen_initobj((&V_3), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// pm.m00 = _dataArray[floatStartId + 0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_121 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_122 = V_1;
		int32_t L_123 = L_122;
		float L_124 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		(&V_3)->___m00_0 = L_124;
		// pm.m01 = _dataArray[floatStartId + 4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_126 = V_1;
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 4));
		float L_128 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		(&V_3)->___m01_4 = L_128;
		// pm.m02 = _dataArray[floatStartId + 8];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_130 = V_1;
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 8));
		float L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		(&V_3)->___m02_8 = L_132;
		// pm.m03 = _dataArray[floatStartId + 12];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_133 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_134 = V_1;
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, ((int32_t)12)));
		float L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		(&V_3)->___m03_12 = L_136;
		// pm.m10 = _dataArray[floatStartId + 1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_137 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_138 = V_1;
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		float L_140 = (L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		(&V_3)->___m10_1 = L_140;
		// pm.m11 = _dataArray[floatStartId + 5];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_141 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_142 = V_1;
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_142, 5));
		float L_144 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		(&V_3)->___m11_5 = L_144;
		// pm.m12 = _dataArray[floatStartId + 9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_145 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_146 = V_1;
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(L_146, ((int32_t)9)));
		float L_148 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147));
		(&V_3)->___m12_9 = L_148;
		// pm.m13 = _dataArray[floatStartId + 13];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_149 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_150 = V_1;
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, ((int32_t)13)));
		float L_152 = (L_149)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		(&V_3)->___m13_13 = L_152;
		// pm.m20 = _dataArray[floatStartId + 2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_153 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_154 = V_1;
		int32_t L_155 = ((int32_t)il2cpp_codegen_add(L_154, 2));
		float L_156 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_155));
		(&V_3)->___m20_2 = L_156;
		// pm.m21 = _dataArray[floatStartId + 6];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_157 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_158 = V_1;
		int32_t L_159 = ((int32_t)il2cpp_codegen_add(L_158, 6));
		float L_160 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		(&V_3)->___m21_6 = L_160;
		// pm.m22 = _dataArray[floatStartId + 10];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_161 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_162 = V_1;
		int32_t L_163 = ((int32_t)il2cpp_codegen_add(L_162, ((int32_t)10)));
		float L_164 = (L_161)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		(&V_3)->___m22_10 = L_164;
		// pm.m23 = _dataArray[floatStartId + 14];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_165 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_166 = V_1;
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, ((int32_t)14)));
		float L_168 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		(&V_3)->___m23_14 = L_168;
		// pm.m30 = _dataArray[floatStartId + 3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_169 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_170 = V_1;
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 3));
		float L_172 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		(&V_3)->___m30_3 = L_172;
		// pm.m31 = _dataArray[floatStartId + 7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_173 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_174 = V_1;
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_174, 7));
		float L_176 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_175));
		(&V_3)->___m31_7 = L_176;
		// pm.m32 = _dataArray[floatStartId + 11];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_177 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_178 = V_1;
		int32_t L_179 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)11)));
		float L_180 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		(&V_3)->___m32_11 = L_180;
		// pm.m33 = _dataArray[floatStartId + 15];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_181 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_182 = V_1;
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, ((int32_t)15)));
		float L_184 = (L_181)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_183));
		(&V_3)->___m33_15 = L_184;
		// _cameras[id].projectionMatrix = pm;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_185 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_186 = V_0;
		int32_t L_187 = L_186;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_188 = (L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_189 = V_3;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_188, L_189, NULL);
		// _cameras[id].transform.localPosition = ToUnityPosition(_dataArray[floatStartId + 16], _dataArray[floatStartId + 17], _dataArray[floatStartId + 18]);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_190 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_191 = V_0;
		int32_t L_192 = L_191;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_193 = (L_190)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_192));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_194;
		L_194 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_193, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_195 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_196 = V_1;
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, ((int32_t)16)));
		float L_198 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_199 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_200 = V_1;
		int32_t L_201 = ((int32_t)il2cpp_codegen_add(L_200, ((int32_t)17)));
		float L_202 = (L_199)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_201));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_203 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_204 = V_1;
		int32_t L_205 = ((int32_t)il2cpp_codegen_add(L_204, ((int32_t)18)));
		float L_206 = (L_203)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA(L_198, L_202, L_206, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_194, L_207, NULL);
		// _cameras[id].transform.localRotation = ToUnityRotation(_dataArray[floatStartId + 19], _dataArray[floatStartId + 20], _dataArray[floatStartId + 21], _dataArray[floatStartId + 22]);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_208 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31;
		int32_t L_209 = V_0;
		int32_t L_210 = L_209;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_211 = (L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_211, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_213 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_214 = V_1;
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, ((int32_t)19)));
		float L_216 = (L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_215));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_217 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_218 = V_1;
		int32_t L_219 = ((int32_t)il2cpp_codegen_add(L_218, ((int32_t)20)));
		float L_220 = (L_217)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_219));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_221 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_222 = V_1;
		int32_t L_223 = ((int32_t)il2cpp_codegen_add(L_222, ((int32_t)21)));
		float L_224 = (L_221)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_223));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_225 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_226 = V_1;
		int32_t L_227 = ((int32_t)il2cpp_codegen_add(L_226, ((int32_t)22)));
		float L_228 = (L_225)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_227));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_229;
		L_229 = SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907(L_216, L_220, L_224, L_228, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_212, L_229, NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateInput(Rufus31415.WebXR.WebXRInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateInput_m6504E2414E9072F70E964A09FAB91B88B4B7F0E7 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___inputSource0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// var floatStartId = (int)inputSource.Handedness * 23 + 54;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_0 = ___inputSource0;
		int32_t L_1 = L_0->___Handedness_8;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)23))), ((int32_t)54)));
		// var byteStartId = (int)inputSource.Handedness * 20 + 4;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_2 = ___inputSource0;
		int32_t L_3 = L_2->___Handedness_8;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)20))), 4));
		// inputSource.Position = ToUnityPosition(_dataArray[floatStartId + 0], _dataArray[floatStartId + 1], _dataArray[floatStartId + 2]);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_4 = ___inputSource0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		float L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		float L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA(L_8, L_12, L_16, NULL);
		L_4->___Position_10 = L_17;
		// inputSource.Rotation = ToUnityRotation(_dataArray[floatStartId + 3], _dataArray[floatStartId + 4], _dataArray[floatStartId + 5], _dataArray[floatStartId + 6]);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_18 = ___inputSource0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_20 = V_0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 3));
		float L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_24 = V_0;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 4));
		float L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 5));
		float L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_32 = V_0;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 6));
		float L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907(L_22, L_26, L_30, L_34, NULL);
		L_18->___Rotation_11 = L_35;
		// inputSource.IsPositionTracked = (_byteArray[byteStartId + 0] != 0);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_36 = ___inputSource0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		L_36->___IsPositionTracked_9 = (bool)((!(((uint32_t)L_40) <= ((uint32_t)0)))? 1 : 0);
		// var eventId = (int)inputSource.Handedness + 1;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_41 = ___inputSource0;
		int32_t L_42 = L_41->___Handedness_8;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, 1));
		// var mask = _byteArray[eventId];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = L_46;
		// if (mask != 0)
		uint8_t L_47 = V_3;
		if (!L_47)
		{
			goto IL_010c;
		}
	}
	{
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.Select, InputSourceSelect, inputSource.Select, inputSource);
		uint8_t L_48 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_49 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelect_16;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_50 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_51 = L_50->___Select_0;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_52 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_48, ((int32_t)16), L_49, L_51, L_52, NULL);
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.SelectEnd, InputSourceSelectEnd, inputSource.SelectEnd, inputSource);
		uint8_t L_53 = V_3;
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_54 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectEnd_18;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_55 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_56 = L_55->___SelectEnd_2;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_57 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_53, ((int32_t)32), L_54, L_56, L_57, NULL);
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.SelectStart, InputSourceSelectStart, inputSource.SelectStart, inputSource);
		uint8_t L_58 = V_3;
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_59 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectStart_17;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_60 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_61 = L_60->___SelectStart_1;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_62 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_58, 8, L_59, L_61, L_62, NULL);
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.Squeeze, InputSourceSqueeze, inputSource.Squeeze, inputSource);
		uint8_t L_63 = V_3;
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_64 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueeze_19;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_65 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_66 = L_65->___Squeeze_3;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_67 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_63, 2, L_64, L_66, L_67, NULL);
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.SqueezeEnd, InputSourceSqueezeEnd, inputSource.SqueezeEnd, inputSource);
		uint8_t L_68 = V_3;
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_69 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeEnd_21;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_70 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_71 = L_70->___SqueezeEnd_5;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_72 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_68, 4, L_69, L_71, L_72, NULL);
		// RaiseInputSourceEvent(mask, WebXRInputSourceEventTypes.SqueezeStart, InputSourceSqueezeStart, inputSource.SqueezeStart, inputSource);
		uint8_t L_73 = V_3;
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_74 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeStart_20;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_75 = ___inputSource0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_76 = L_75->___SqueezeStart_4;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_77 = ___inputSource0;
		SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7(L_73, 1, L_74, L_76, L_77, NULL);
		// _byteArray[eventId] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_79 = V_2;
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)0);
	}

IL_010c:
	{
		// inputSource.TargetRayMode = (WebXRTargetRayModes)_byteArray[byteStartId + 1];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_80 = ___inputSource0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_82 = V_1;
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		uint8_t L_84 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		L_80->___TargetRayMode_16 = L_84;
		// inputSource.AxesCount = _byteArray[byteStartId + 2];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_85 = ___inputSource0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_87 = V_1;
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 2));
		uint8_t L_89 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		L_85->___AxesCount_12 = L_89;
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		V_5 = 0;
		goto IL_014a;
	}

IL_012f:
	{
		// inputSource.Axes[i] = _dataArray[floatStartId + 7 + i];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_90 = ___inputSource0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_91 = L_90->___Axes_13;
		int32_t L_92 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_93 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_94 = V_0;
		int32_t L_95 = V_5;
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_94, 7)), L_95));
		float L_97 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92), (float)L_97);
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_014a:
	{
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		int32_t L_99 = V_5;
		if ((((int32_t)L_99) < ((int32_t)8)))
		{
			goto IL_012f;
		}
	}
	{
		// inputSource.ButtonsCount = _byteArray[byteStartId + 3];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_100 = ___inputSource0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_102 = V_1;
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 3));
		uint8_t L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		L_100->___ButtonsCount_14 = L_104;
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		V_6 = 0;
		goto IL_01af;
	}

IL_0163:
	{
		// var button = inputSource.Buttons[i];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_105 = ___inputSource0;
		WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* L_106 = L_105->___Buttons_15;
		int32_t L_107 = V_6;
		int32_t L_108 = L_107;
		WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		// button.Value = _dataArray[floatStartId + 15 + i];
		WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* L_110 = L_109;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_111 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_112 = V_0;
		int32_t L_113 = V_6;
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_112, ((int32_t)15))), L_113));
		float L_115 = (L_111)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		L_110->___Value_0 = L_115;
		// button.Touched = _byteArray[byteStartId + 4 + i] != 0;
		WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* L_116 = L_110;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_118 = V_1;
		int32_t L_119 = V_6;
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_118, 4)), L_119));
		uint8_t L_121 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
		L_116->___Touched_1 = (bool)((!(((uint32_t)L_121) <= ((uint32_t)0)))? 1 : 0);
		// button.Pressed = _byteArray[byteStartId + 12 + i] != 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		int32_t L_123 = V_1;
		int32_t L_124 = V_6;
		int32_t L_125 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_123, ((int32_t)12))), L_124));
		uint8_t L_126 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		L_116->___Pressed_2 = (bool)((!(((uint32_t)L_126) <= ((uint32_t)0)))? 1 : 0);
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		int32_t L_127 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_01af:
	{
		// for (int i = 0; i < WebXRInputSource.AXES_BUTTON_COUNT; i++)
		int32_t L_128 = V_6;
		if ((((int32_t)L_128) < ((int32_t)8)))
		{
			goto IL_0163;
		}
	}
	{
		// var handAvailable = 0 != _byteArray[46 + (int)inputSource.Handedness];
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_130 = ___inputSource0;
		int32_t L_131 = L_130->___Handedness_8;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(((int32_t)46), (int32_t)L_131));
		uint8_t L_133 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		V_4 = (bool)((!(((uint32_t)L_133) <= ((uint32_t)0)))? 1 : 0);
		// inputSource.Hand.Available = handAvailable;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_134 = ___inputSource0;
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_135 = L_134->___Hand_19;
		bool L_136 = V_4;
		L_135->___Available_0 = L_136;
		// if (handAvailable)
		bool L_137 = V_4;
		if (!L_137)
		{
			goto IL_027d;
		}
	}
	{
		// for (int j = 0; j < 25; j++)
		V_7 = 0;
		goto IL_0274;
	}

IL_01e4:
	{
		// var i = (int)inputSource.Handedness * 200 + j * 8;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_138 = ___inputSource0;
		int32_t L_139 = L_138->___Handedness_8;
		int32_t L_140 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_139, ((int32_t)200))), ((int32_t)il2cpp_codegen_multiply(L_140, 8))));
		// var joint = inputSource.Hand.Joints[j];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_141 = ___inputSource0;
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_142 = L_141->___Hand_19;
		WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* L_143 = L_142->___Joints_1;
		int32_t L_144 = V_7;
		int32_t L_145 = L_144;
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_146 = (L_143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		// joint.Position = ToUnityPosition(_handData[i], _handData[i + 1], _handData[i + 2]);
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_147 = L_146;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_148 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_149 = V_8;
		int32_t L_150 = L_149;
		float L_151 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_152 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_153 = V_8;
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_153, 1));
		float L_155 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_156 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_157 = V_8;
		int32_t L_158 = ((int32_t)il2cpp_codegen_add(L_157, 2));
		float L_159 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA(L_151, L_155, L_159, NULL);
		L_147->___Position_0 = L_160;
		// joint.Rotation = ToUnityRotation(_handData[i + 3], _handData[i + 4], _handData[i + 5], _handData[i + 6]);
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_161 = L_147;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_162 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_163 = V_8;
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 3));
		float L_165 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_164));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_166 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_167 = V_8;
		int32_t L_168 = ((int32_t)il2cpp_codegen_add(L_167, 4));
		float L_169 = (L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_168));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_170 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_171 = V_8;
		int32_t L_172 = ((int32_t)il2cpp_codegen_add(L_171, 5));
		float L_173 = (L_170)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_174 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_175 = V_8;
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 6));
		float L_177 = (L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_178;
		L_178 = SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907(L_165, L_169, L_173, L_177, NULL);
		L_161->___Rotation_1 = L_178;
		// joint.Radius = _handData[i + 7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_179 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28;
		int32_t L_180 = V_8;
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 7));
		float L_182 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		L_161->___Radius_2 = L_182;
		// for (int j = 0; j < 25; j++)
		int32_t L_183 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_0274:
	{
		// for (int j = 0; j < 25; j++)
		int32_t L_184 = V_7;
		if ((((int32_t)L_184) < ((int32_t)((int32_t)25))))
		{
			goto IL_01e4;
		}
	}

IL_027d:
	{
		// CheckPan();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_CheckPan_mEC7A02C6D75A43E748595A7C6ECF827DD2532004(NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::CheckPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_CheckPan_mEC7A02C6D75A43E748595A7C6ECF827DD2532004 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var xr = GetInstance();
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_0;
		L_0 = SimpleWebXR_GetInstance_mF7E17097D73018D1F9BEF11A6296EEE6BE53AD4B(NULL);
		V_0 = L_0;
		// var axe2 = SimpleWebXR.LeftInput.Axes[2] + SimpleWebXR.RightInput.Axes[2];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1->___Axes_13;
		int32_t L_3 = 2;
		float L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_5 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = L_5->___Axes_13;
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((float)il2cpp_codegen_add(L_4, L_8));
		// var axe3 = SimpleWebXR.LeftInput.Axes[3] + SimpleWebXR.RightInput.Axes[3];
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_9 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9->___Axes_13;
		int32_t L_11 = 3;
		float L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_13 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = L_13->___Axes_13;
		int32_t L_15 = 3;
		float L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = ((float)il2cpp_codegen_add(L_12, L_16));
		// if (axe3 != 0)
		float L_17 = V_2;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00b1;
		}
	}
	{
		// if(axe3 > 0)
		float L_18 = V_2;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		// var scaleChange = new Vector3(-0.01f, -0.01f, -0.01f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (-0.00999999978f), (-0.00999999978f), (-0.00999999978f), NULL);
		// xr.myEarth.transform.localScale += scaleChange;
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_19 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___myEarth_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_24, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_25, NULL);
		goto IL_00b1;
	}

IL_007e:
	{
		// var scaleChange = new Vector3(0.01f, 0.01f, 0.01f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), (0.00999999978f), (0.00999999978f), (0.00999999978f), NULL);
		// xr.myEarth.transform.localScale += scaleChange;
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_26 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___myEarth_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_31, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_29, L_32, NULL);
	}

IL_00b1:
	{
		// if (axe2 != 0)
		float L_33 = V_1;
		if ((((float)L_33) == ((float)(0.0f))))
		{
			goto IL_00eb;
		}
	}
	{
		// xr.myEarth.transform.RotateAround(xr.myEarth.transform.position, Vector3.up, Time.deltaTime * NOMINAL_ROTATION_SPEED * axe2);
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_34 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___myEarth_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* L_37 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37->___myEarth_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_42;
		L_42 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_43 = V_1;
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_36, L_40, L_41, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_42, (10.0f))), L_43)), NULL);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateHand(Rufus31415.WebXR.WebXRHand,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateHand_m576756004AEEA04023D99F964DD8A0DEE7C1C51A (WebXRHand_tE80322082AD122643034032253B96E631DA88233* ___hand0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handObject1, const RuntimeMethod* method) 
{
	{
		// handObject.transform.position = hand.Joints[0].Position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___handObject1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_2 = ___hand0;
		WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* L_3 = L_2->___Joints_1;
		int32_t L_4 = 0;
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___Position_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// handObject.transform.rotation = hand.Joints[0].Rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___handObject1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_9 = ___hand0;
		WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* L_10 = L_9->___Joints_1;
		int32_t L_11 = 0;
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___Rotation_1;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_13, NULL);
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::RaiseInputSourceEvent(System.Byte,Rufus31415.WebXR.SimpleWebXR/WebXRInputSourceEventTypes,Rufus31415.WebXR.WebXRInputEvent,UnityEngine.Events.UnityEvent,Rufus31415.WebXR.WebXRInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_RaiseInputSourceEvent_mADAB1C60124B0F56839CF77CC72521C0D9E3F1E7 (uint8_t ___mask0, int32_t ___type1, WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* ___webxrInputEvent2, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___unityEvent3, WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* ___inputSource4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3B1407A043A3EC9ED3B5AD3C463C7ECDEB184FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRInputSourceEventTypes_tCC2EC7DADC3770E9CCB94BDD0B1D6068DC5196D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (((WebXRInputSourceEventTypes)mask & type) == type)
		uint8_t L_0 = ___mask0;
		int32_t L_1 = ___type1;
		int32_t L_2 = ___type1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((uint32_t)L_2))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_3 = ___type1;
		if ((((int32_t)L_3) > ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = ___type1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___type1;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0045;
	}

IL_0014:
	{
		int32_t L_6 = ___type1;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_7 = ___type1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_0045;
	}

IL_001f:
	{
		// inputSource.Selected = true;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_8 = ___inputSource4;
		L_8->___Selected_17 = (bool)1;
		// break;
		goto IL_0045;
	}

IL_0029:
	{
		// inputSource.Selected = false;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_9 = ___inputSource4;
		L_9->___Selected_17 = (bool)0;
		// break;
		goto IL_0045;
	}

IL_0033:
	{
		// inputSource.Squeezed = true;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_10 = ___inputSource4;
		L_10->___Squeezed_18 = (bool)1;
		// break;
		goto IL_0045;
	}

IL_003d:
	{
		// inputSource.Squeezed = false;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_11 = ___inputSource4;
		L_11->___Squeezed_18 = (bool)0;
	}

IL_0045:
	{
		// unityEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = ___unityEvent3;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// webxrInputEvent.Invoke(inputSource);
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_13 = ___webxrInputEvent2;
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_14 = ___inputSource4;
		UnityEvent_1_Invoke_m3B1407A043A3EC9ED3B5AD3C463C7ECDEB184FFA(L_13, L_14, UnityEvent_1_Invoke_m3B1407A043A3EC9ED3B5AD3C463C7ECDEB184FFA_RuntimeMethod_var);
		// Debug.Log($"{inputSource.Handedness} : {type}");
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_15 = ___inputSource4;
		int32_t L_16 = L_15->___Handedness_8;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = ___type1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(WebXRInputSourceEventTypes_tCC2EC7DADC3770E9CCB94BDD0B1D6068DC5196D5_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D, L_18, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::UpdateHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_UpdateHitTest_m9DB0AD3038638D0B716A10AC65408A68A27D179E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HitTestInProgress)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SimpleWebXR_get_HitTestInProgress_mCF6D46A8EBA78CD272A3D291F4F935EE212DF788(NULL);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		// HitTestPosition = ToUnityPosition(_dataArray[105], _dataArray[106], _dataArray[107]);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_2 = ((int32_t)105);
		float L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_5 = ((int32_t)106);
		float L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_8 = ((int32_t)107);
		float L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA(L_3, L_6, L_9, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___HitTestPosition_23 = L_10;
		// HitTestRotation = ToUnityRotation(_dataArray[108], _dataArray[109], _dataArray[110], _dataArray[111]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_12 = ((int32_t)108);
		float L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_15 = ((int32_t)109);
		float L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_18 = ((int32_t)110);
		float L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		int32_t L_21 = ((int32_t)111);
		float L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907(L_13, L_16, L_19, L_22, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___HitTestRotation_24 = L_23;
	}

IL_0053:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Rufus31415.WebXR.SimpleWebXR::ToUnityPosition(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleWebXR_ToUnityPosition_m08BBBFF1E8231620A6C02736ECABF74E3E554CCA (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// float yOffset = 0;
		V_0 = (0.0f);
		// if (_referenceSpace == WebXRReferenceSpaces.LocalFloor)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____referenceSpace_29;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// yOffset = UserHeight <= 0 ? _fallbackUserHeight : UserHeight;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = SimpleWebXR_get_UserHeight_m036B1DAE2FAAD1EC1F5CB5052406ADBECEF3B5BE(NULL);
		if ((((float)L_1) <= ((float)(0.0f))))
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = SimpleWebXR_get_UserHeight_m036B1DAE2FAAD1EC1F5CB5052406ADBECEF3B5BE(NULL);
		G_B4_0 = L_2;
		goto IL_0026;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		float L_3 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____fallbackUserHeight_30;
		G_B4_0 = L_3;
	}

IL_0026:
	{
		V_0 = G_B4_0;
	}

IL_0027:
	{
		// return new Vector3(x, y + yOffset, -z);
		float L_4 = ___x0;
		float L_5 = ___y1;
		float L_6 = V_0;
		float L_7 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_4, ((float)il2cpp_codegen_add(L_5, L_6)), ((-L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Quaternion Rufus31415.WebXR.SimpleWebXR::ToUnityRotation(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// return new Quaternion(-x, -y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_4), ((-L_0)), ((-L_1)), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalStartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalStartSession_m770055EC19C695874285EFCCA20308A08B6C0F7A (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InternalStartSession)();

}
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalEndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalEndSession_m761F7AB1C0540DDAEEBF694AF472A1D065FCCA09 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InternalEndSession)();

}
// System.Void Rufus31415.WebXR.SimpleWebXR::InitWebXR(System.Single[],System.Int32,System.Byte[],System.Int32,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InitWebXR_m4133B55C32518F147897ED2F150171EC8CA4122A (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___dataArray0, int32_t ___length1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray2, int32_t ____byteArrayLength3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handDataArray4, int32_t ___handDataArrayLength5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int32_t, uint8_t*, int32_t, float*, int32_t);

	// Marshaling of parameter '___dataArray0' to native representation
	float* ____dataArray0_marshaled = NULL;
	if (___dataArray0 != NULL)
	{
		____dataArray0_marshaled = reinterpret_cast<float*>((___dataArray0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___byteArray2' to native representation
	uint8_t* ____byteArray2_marshaled = NULL;
	if (___byteArray2 != NULL)
	{
		____byteArray2_marshaled = reinterpret_cast<uint8_t*>((___byteArray2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___handDataArray4' to native representation
	float* ____handDataArray4_marshaled = NULL;
	if (___handDataArray4 != NULL)
	{
		____handDataArray4_marshaled = reinterpret_cast<float*>((___handDataArray4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitWebXR)(____dataArray0_marshaled, ___length1, ____byteArray2_marshaled, ____byteArrayLength3, ____handDataArray4_marshaled, ___handDataArrayLength5);

}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsArSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsArSupported_mDEB6C9318F1C4B3885B81E6B44B2BA95178730AF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(InternalIsArSupported)();

	return static_cast<bool>(returnValue);
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsVrSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsVrSupported_m6ED0228CFE70500C259B4D2F689C4A1A6D2B8CE1 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(InternalIsVrSupported)();

	return static_cast<bool>(returnValue);
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsOVRMultiview2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsOVRMultiview2Supported_m42553FC63D5C146CE07D0179E2992657E75BC024 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(InternalIsOVRMultiview2Supported)();

	return static_cast<bool>(returnValue);
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::InternalIsOculusMultiviewSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_InternalIsOculusMultiviewSupported_mF9C8B3E9711ED6180B4F3426C4E8FD49560F97FE (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(InternalIsOculusMultiviewSupported)();

	return static_cast<bool>(returnValue);
}
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalHitTestStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalHitTestStart_mDCE97F3E87C12EAE3DC51B003BBCF15814B04B5D (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InternalHitTestStart)();

}
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalHitTestCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalHitTestCancel_mD4F5342F0D4B64873CD4CEFE95FA5F171449F0BB (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InternalHitTestCancel)();

}
// System.Void Rufus31415.WebXR.SimpleWebXR::InternalGetDeviceOrientation(System.Single[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR_InternalGetDeviceOrientation_m8C5AD00F78B833D465B5E0F2035EC2791950056C (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___orientationArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___orientationInfo1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, uint8_t*);

	// Marshaling of parameter '___orientationArray0' to native representation
	float* ____orientationArray0_marshaled = NULL;
	if (___orientationArray0 != NULL)
	{
		____orientationArray0_marshaled = reinterpret_cast<float*>((___orientationArray0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___orientationInfo1' to native representation
	uint8_t* ____orientationInfo1_marshaled = NULL;
	if (___orientationInfo1 != NULL)
	{
		____orientationInfo1_marshaled = reinterpret_cast<uint8_t*>((___orientationInfo1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InternalGetDeviceOrientation)(____orientationArray0_marshaled, ____orientationInfo1_marshaled);

}
// System.String Rufus31415.WebXR.SimpleWebXR::Stringify(UnityEngine.Camera,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleWebXR_Stringify_mFACD299DD7728EE8FD1A1F0BB0BABC1C2E1FBB22 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral045B969526FAA752D247CE00957631440180E9D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1744D51B40A8A60C965F1F4733FF73B136DC5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B3D88716698D3A7C37BE568E46599AB866B85B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB0AC54CE0655D10AC367EF5CC0C1F42C9C8D9F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		// sb.Append(name);
		StringBuilder_t* L_3 = L_2;
		String_t* L_4 = ___name1;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		// sb.AppendLine("eye : ");
		StringBuilder_t* L_6 = L_3;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, _stringLiteral045B969526FAA752D247CE00957631440180E9D3, NULL);
		// sb.Append("  Position :");
		StringBuilder_t* L_8 = L_6;
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral7DB0AC54CE0655D10AC367EF5CC0C1F42C9C8D9F, NULL);
		// sb.AppendLine(camera.transform.position.ToString());
		StringBuilder_t* L_10 = L_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = ___camera0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_10, L_14, NULL);
		// sb.Append("  Rotation :");
		StringBuilder_t* L_16 = L_10;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral25B3D88716698D3A7C37BE568E46599AB866B85B, NULL);
		// sb.AppendLine(camera.transform.rotation.eulerAngles.ToString());
		StringBuilder_t* L_18 = L_16;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = ___camera0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		V_1 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_18, L_23, NULL);
		// return sb.ToString();
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		return L_25;
	}

IL_0087:
	{
		// else return $"No {name} eye";
		String_t* L_26 = ___name1;
		String_t* L_27;
		L_27 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB, L_26, _stringLiteral0D1744D51B40A8A60C965F1F4733FF73B136DC5B, NULL);
		return L_27;
	}
}
// System.Boolean Rufus31415.WebXR.SimpleWebXR::GetDeviceOrientation(System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleWebXR_GetDeviceOrientation_m74EA40CBFB35DA8E01AFA8306738BA2DF1FDEB3E (float* ___alpha0, float* ___beta1, float* ___gamma2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_orientationDeviceStarted)
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationDeviceStarted_41;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// InternalGetDeviceOrientation(_orientationArray, _orientationInfo);
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationInfo_40;
		SimpleWebXR_InternalGetDeviceOrientation_m8C5AD00F78B833D465B5E0F2035EC2791950056C(L_1, L_2, NULL);
		// _orientationDeviceStarted = true;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationDeviceStarted_41 = (bool)1;
	}

IL_001c:
	{
		// alpha = _orientationArray[0];
		float* L_3 = ___alpha0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39;
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		*((float*)L_3) = (float)L_6;
		// beta = _orientationArray[1];
		float* L_7 = ___beta1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39;
		int32_t L_9 = 1;
		float L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		*((float*)L_7) = (float)L_10;
		// gamma = _orientationArray[2];
		float* L_11 = ___gamma2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39;
		int32_t L_13 = 2;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		*((float*)L_11) = (float)L_14;
		// return _orientationInfo[0] != 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationInfo_40;
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		return (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Single[] Rufus31415.WebXR.SimpleWebXR::get_SimulatedDataArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* SimpleWebXR_get_SimulatedDataArray_mF070097736C6602D0CC8FE97A01A1A40DC9F1E22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float[] SimulatedDataArray => _dataArray;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26;
		return L_0;
	}
}
// System.Byte[] Rufus31415.WebXR.SimpleWebXR::get_SimulatedByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SimpleWebXR_get_SimulatedByteArray_mB415AC74F9EF4B805C83D37B43B212E5183B9103 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static byte[] SimulatedByteArray => _byteArray;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27;
		return L_0;
	}
}
// UnityEngine.Quaternion Rufus31415.WebXR.SimpleWebXR::SimulatedToUnityRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimpleWebXR_SimulatedToUnityRotation_m5CA6AA1D145ED13E2BDD559F6E127C61E1094928 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ToUnityRotation(q.x, q.y, q.z, q.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___q0;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___q0;
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___q0;
		float L_7 = L_6.___w_3;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = SimpleWebXR_ToUnityRotation_m2BE6903D0CA9C5407A1B4785A6E850F7CC93E907(L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR__ctor_mB0AF49B2E2C8191AD0720AFCDBF0B8924F9E059A (SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8* __this, const RuntimeMethod* method) 
{
	{
		// public float FallbackUserHeight = 1.8f;
		__this->___FallbackUserHeight_10 = (1.79999995f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Rufus31415.WebXR.SimpleWebXR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleWebXR__cctor_m86F91077A806600D1E5D45DEA4C8321C900EBFCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly UnityEvent SessionStart = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionStart_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionStart_12), (void*)L_0);
		// public static readonly UnityEvent SessionEnd = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionEnd_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___SessionEnd_13), (void*)L_1);
		// public static readonly WebXRInputSource LeftInput = new WebXRInputSource(WebXRHandedness.Left);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_2 = (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0*)il2cpp_codegen_object_new(WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0_il2cpp_TypeInfo_var);
		WebXRInputSource__ctor_m7ADE5CF9C11CC57668D7A3FD4FA5C0521D3EBE95(L_2, 0, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___LeftInput_14), (void*)L_2);
		// public static readonly WebXRInputSource RightInput = new WebXRInputSource(WebXRHandedness.Right);
		WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* L_3 = (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0*)il2cpp_codegen_object_new(WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0_il2cpp_TypeInfo_var);
		WebXRInputSource__ctor_m7ADE5CF9C11CC57668D7A3FD4FA5C0521D3EBE95(L_3, 1, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___RightInput_15), (void*)L_3);
		// public static readonly WebXRInputEvent InputSourceSelect = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_4 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_4, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelect_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelect_16), (void*)L_4);
		// public static readonly WebXRInputEvent InputSourceSelectStart = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_5 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_5, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectStart_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectStart_17), (void*)L_5);
		// public static readonly WebXRInputEvent InputSourceSelectEnd = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_6 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_6, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectEnd_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSelectEnd_18), (void*)L_6);
		// public static readonly WebXRInputEvent InputSourceSqueeze = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_7 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_7, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueeze_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueeze_19), (void*)L_7);
		// public static readonly WebXRInputEvent InputSourceSqueezeStart = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_8 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_8, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeStart_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeStart_20), (void*)L_8);
		// public static readonly WebXRInputEvent InputSourceSqueezeEnd = new WebXRInputEvent();
		WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* L_9 = (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2*)il2cpp_codegen_object_new(WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2_il2cpp_TypeInfo_var);
		WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374(L_9, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeEnd_21 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourceSqueezeEnd_21), (void*)L_9);
		// public static readonly UnityEvent InputSourcesChange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_10, NULL);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourcesChange_22 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___InputSourcesChange_22), (void*)L_10);
		// private static bool _initialized = false;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____initialized_25 = (bool)0;
		// private static readonly float[] _dataArray = new float[112];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)112));
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____dataArray_26), (void*)L_11);
		// private static readonly byte[] _byteArray = new byte[50];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50));
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____byteArray_27), (void*)L_12);
		// private static readonly float[] _handData = new float[8 * 25 * 2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)400));
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____handData_28), (void*)L_13);
		// private static readonly Camera[] _cameras = new Camera[2];
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_14 = (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)SZArrayNew(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var, (uint32_t)2);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____cameras_31), (void*)L_14);
		// private static readonly float[] _orientationArray = new float[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationArray_39), (void*)L_15);
		// private static readonly byte[] _orientationInfo = new byte[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationInfo_40 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationInfo_40), (void*)L_16);
		// private static bool _orientationDeviceStarted = false;
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->____orientationDeviceStarted_41 = (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rufus31415.WebXR.WebXRInputSource::.ctor(Rufus31415.WebXR.WebXRHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRInputSource__ctor_m7ADE5CF9C11CC57668D7A3FD4FA5C0521D3EBE95 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHand_tE80322082AD122643034032253B96E631DA88233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public readonly UnityEvent Select = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___Select_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Select_0), (void*)L_0);
		// public readonly UnityEvent SelectStart = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___SelectStart_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectStart_1), (void*)L_1);
		// public readonly UnityEvent SelectEnd = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___SelectEnd_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectEnd_2), (void*)L_2);
		// public readonly UnityEvent Squeeze = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___Squeeze_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Squeeze_3), (void*)L_3);
		// public readonly UnityEvent SqueezeStart = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		__this->___SqueezeStart_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SqueezeStart_4), (void*)L_4);
		// public readonly UnityEvent SqueezeEnd = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_5, NULL);
		__this->___SqueezeEnd_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SqueezeEnd_5), (void*)L_5);
		// public readonly float[] Axes = new float[AXES_BUTTON_COUNT];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Axes_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Axes_13), (void*)L_6);
		// public readonly WebXRGamepadButton[] Buttons = new WebXRGamepadButton[AXES_BUTTON_COUNT];
		WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* L_7 = (WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63*)(WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63*)SZArrayNew(WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Buttons_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buttons_15), (void*)L_7);
		// public readonly WebXRHand Hand = new WebXRHand();
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_8 = (WebXRHand_tE80322082AD122643034032253B96E631DA88233*)il2cpp_codegen_object_new(WebXRHand_tE80322082AD122643034032253B96E631DA88233_il2cpp_TypeInfo_var);
		WebXRHand__ctor_mEFE6796E55705265CF59B7D5D4C00F6844AC02AC(L_8, NULL);
		__this->___Hand_19 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hand_19), (void*)L_8);
		// public WebXRInputSource(WebXRHandedness handedness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Handedness = handedness;
		int32_t L_9 = ___handedness0;
		__this->___Handedness_8 = L_9;
		// for (int i = 0; i < AXES_BUTTON_COUNT; i++) Buttons[i] = new WebXRGamepadButton();
		V_0 = 0;
		goto IL_0087;
	}

IL_0076:
	{
		// for (int i = 0; i < AXES_BUTTON_COUNT; i++) Buttons[i] = new WebXRGamepadButton();
		WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* L_10 = __this->___Buttons_15;
		int32_t L_11 = V_0;
		WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* L_12 = (WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573*)il2cpp_codegen_object_new(WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573_il2cpp_TypeInfo_var);
		WebXRGamepadButton__ctor_mBB3834A8D35FB830C41E9ABB61AD6B485CD4A600(L_12, NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573*)L_12);
		// for (int i = 0; i < AXES_BUTTON_COUNT; i++) Buttons[i] = new WebXRGamepadButton();
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < AXES_BUTTON_COUNT; i++) Buttons[i] = new WebXRGamepadButton();
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0076;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rufus31415.WebXR.WebXRInputSource::HapticPulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRInputSource_HapticPulse_mF5ED88CBE71D5A2DCCA3D31BE265CFAF64660111 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* __this, float ___intensity0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SimpleWebXR.HapticPulse(Handedness, intensity, duration);
		int32_t L_0 = __this->___Handedness_8;
		float L_1 = ___intensity0;
		float L_2 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		SimpleWebXR_HapticPulse_m69EB5C88533B76AD19441FDE9F16462FA097F31E(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String Rufus31415.WebXR.WebXRInputSource::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRInputSource_ToString_mDFF9968494E423442395C503949C489E1F1BAAA0 (WebXRInputSource_tB9CDF7E06D4283F12D9F7B5F3F99404A8B872BE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRTargetRayModes_tB2089A0FE7A613B44825957658D71F7988CA3AC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD632CDF88B69548654C40D91F84430B497DFBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29D25C58D3639A08B86462F60AD1770CD00CC138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539B4946F5FB95F1A9D1F03AF0FDDC283B47A99C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689E9205FE12F63C8F4E3F4B3F4F20D59D10C5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral769EFBBF1B8BC01AC3A8E54AA622B0439BFBA03C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral786AAFBF7F923DCB623CFA57698B7290B9193E5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F17CFFC25FDAE5C422075BE32ABDCB2F48FDEA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BD677A237E07AA8373E5181D4D6B989359ED2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC440A10462013AE2B0094DF5F10ABC8BE3D68BF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6619DBA24E44DB52AF363549B190FFC0D2C2CE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC05E72E99AEE97AAD00A64C33F251DB99624AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	StringBuilder_t* G_B8_0 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	StringBuilder_t* G_B9_1 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.Append(Handedness);
		StringBuilder_t* L_1 = V_0;
		int32_t L_2 = __this->___Handedness_8;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(WebXRHandedness_tA36B4ABC4439458753F1E4C064E89C853A9535A6_il2cpp_TypeInfo_var, &L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_1, L_4, NULL);
		// sb.AppendLine("controller");
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, _stringLiteral769EFBBF1B8BC01AC3A8E54AA622B0439BFBA03C, NULL);
		// sb.Append("  Available : ");
		StringBuilder_t* L_8 = V_0;
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral8F17CFFC25FDAE5C422075BE32ABDCB2F48FDEA1, NULL);
		// sb.AppendLine(Available ? "Yes" : "No");
		StringBuilder_t* L_10 = V_0;
		bool L_11 = __this->___Available_7;
		G_B1_0 = L_10;
		if (L_11)
		{
			G_B2_0 = L_10;
			goto IL_0040;
		}
	}
	{
		G_B3_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B3_1 = G_B1_0;
		goto IL_0045;
	}

IL_0040:
	{
		G_B3_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B3_1 = G_B2_0;
	}

IL_0045:
	{
		StringBuilder_t* L_12;
		L_12 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B3_1, G_B3_0, NULL);
		// sb.Append("  Mode : ");
		StringBuilder_t* L_13 = V_0;
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralC6619DBA24E44DB52AF363549B190FFC0D2C2CE5, NULL);
		// sb.AppendLine(TargetRayMode.ToString());
		StringBuilder_t* L_15 = V_0;
		int32_t* L_16 = (&__this->___TargetRayMode_16);
		Il2CppFakeBox<int32_t> L_17(WebXRTargetRayModes_tB2089A0FE7A613B44825957658D71F7988CA3AC8_il2cpp_TypeInfo_var, L_16);
		String_t* L_18;
		L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_15, L_18, NULL);
		// if (IsPositionTracked)
		bool L_20 = __this->___IsPositionTracked_9;
		if (!L_20)
		{
			goto IL_00c9;
		}
	}
	{
		// sb.Append("  Position : ");
		StringBuilder_t* L_21 = V_0;
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral689E9205FE12F63C8F4E3F4B3F4F20D59D10C5A2, NULL);
		// sb.AppendLine(Position.ToString());
		StringBuilder_t* L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___Position_10);
		String_t* L_25;
		L_25 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE(L_24, NULL);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_23, L_25, NULL);
		// sb.Append("  Rotation : ");
		StringBuilder_t* L_27 = V_0;
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteralC440A10462013AE2B0094DF5F10ABC8BE3D68BF1, NULL);
		// sb.AppendLine(Rotation.eulerAngles.ToString());
		StringBuilder_t* L_29 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_30 = (&__this->___Rotation_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_30, NULL);
		V_1 = L_31;
		String_t* L_32;
		L_32 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_29, L_32, NULL);
		goto IL_00d5;
	}

IL_00c9:
	{
		// else sb.AppendLine("  No position info");
		StringBuilder_t* L_34 = V_0;
		StringBuilder_t* L_35;
		L_35 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_34, _stringLiteralA37BD677A237E07AA8373E5181D4D6B989359ED2, NULL);
	}

IL_00d5:
	{
		// sb.Append("  Hand : ");
		StringBuilder_t* L_36 = V_0;
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteral1DD632CDF88B69548654C40D91F84430B497DFBC, NULL);
		// sb.AppendLine(Hand.Available ? "Yes" : "No");
		StringBuilder_t* L_38 = V_0;
		WebXRHand_tE80322082AD122643034032253B96E631DA88233* L_39 = __this->___Hand_19;
		bool L_40 = L_39->___Available_0;
		G_B7_0 = L_38;
		if (L_40)
		{
			G_B8_0 = L_38;
			goto IL_00f6;
		}
	}
	{
		G_B9_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B9_1 = G_B7_0;
		goto IL_00fb;
	}

IL_00f6:
	{
		G_B9_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B9_1 = G_B8_0;
	}

IL_00fb:
	{
		StringBuilder_t* L_41;
		L_41 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B9_1, G_B9_0, NULL);
		// sb.AppendLine("  Axes :");
		StringBuilder_t* L_42 = V_0;
		StringBuilder_t* L_43;
		L_43 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_42, _stringLiteral786AAFBF7F923DCB623CFA57698B7290B9193E5C, NULL);
		// if (AxesCount > 0)
		int32_t L_44 = __this->___AxesCount_12;
		if ((((int32_t)L_44) <= ((int32_t)0)))
		{
			goto IL_0178;
		}
	}
	{
		// for (int i = 0; i < Math.Min(AxesCount, Axes.Length); i++)
		V_2 = 0;
		goto IL_0160;
	}

IL_011a:
	{
		// sb.Append("    [");
		StringBuilder_t* L_45 = V_0;
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, _stringLiteralDC05E72E99AEE97AAD00A64C33F251DB99624AF8, NULL);
		// sb.Append(i);
		StringBuilder_t* L_47 = V_0;
		int32_t L_48 = V_2;
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_47, L_48, NULL);
		// sb.Append("] : ");
		StringBuilder_t* L_50 = V_0;
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, _stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F, NULL);
		// sb.Append((int)(100 * Axes[i]));
		StringBuilder_t* L_52 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = __this->___Axes_13;
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		float L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_52, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((100.0f), L_56))), NULL);
		// sb.AppendLine("%");
		StringBuilder_t* L_58 = V_0;
		StringBuilder_t* L_59;
		L_59 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_58, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		// for (int i = 0; i < Math.Min(AxesCount, Axes.Length); i++)
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0160:
	{
		// for (int i = 0; i < Math.Min(AxesCount, Axes.Length); i++)
		int32_t L_61 = V_2;
		int32_t L_62 = __this->___AxesCount_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = __this->___Axes_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_62, ((int32_t)(((RuntimeArray*)L_63)->max_length)), NULL);
		if ((((int32_t)L_61) < ((int32_t)L_64)))
		{
			goto IL_011a;
		}
	}
	{
		goto IL_0184;
	}

IL_0178:
	{
		// else sb.AppendLine("    None");
		StringBuilder_t* L_65 = V_0;
		StringBuilder_t* L_66;
		L_66 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_65, _stringLiteral29D25C58D3639A08B86462F60AD1770CD00CC138, NULL);
	}

IL_0184:
	{
		// sb.AppendLine("  Buttons :");
		StringBuilder_t* L_67 = V_0;
		StringBuilder_t* L_68;
		L_68 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_67, _stringLiteral539B4946F5FB95F1A9D1F03AF0FDDC283B47A99C, NULL);
		// if (ButtonsCount > 0)
		int32_t L_69 = __this->___ButtonsCount_14;
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_01ed;
		}
	}
	{
		// for (int i = 0; i < Math.Min(ButtonsCount, Buttons.Length); i++)
		V_3 = 0;
		goto IL_01d5;
	}

IL_019d:
	{
		// sb.Append("    [");
		StringBuilder_t* L_70 = V_0;
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, _stringLiteralDC05E72E99AEE97AAD00A64C33F251DB99624AF8, NULL);
		// sb.Append(i);
		StringBuilder_t* L_72 = V_0;
		int32_t L_73 = V_3;
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_72, L_73, NULL);
		// sb.Append("] : ");
		StringBuilder_t* L_75 = V_0;
		StringBuilder_t* L_76;
		L_76 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_75, _stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F, NULL);
		// sb.AppendLine(Buttons[i].ToString());
		StringBuilder_t* L_77 = V_0;
		WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* L_78 = __this->___Buttons_15;
		int32_t L_79 = V_3;
		int32_t L_80 = L_79;
		WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		String_t* L_82;
		L_82 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_81);
		StringBuilder_t* L_83;
		L_83 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_77, L_82, NULL);
		// for (int i = 0; i < Math.Min(ButtonsCount, Buttons.Length); i++)
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01d5:
	{
		// for (int i = 0; i < Math.Min(ButtonsCount, Buttons.Length); i++)
		int32_t L_85 = V_3;
		int32_t L_86 = __this->___ButtonsCount_14;
		WebXRGamepadButtonU5BU5D_t4BA82712938188570C865E8FC37D5508A6DE9E63* L_87 = __this->___Buttons_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_86, ((int32_t)(((RuntimeArray*)L_87)->max_length)), NULL);
		if ((((int32_t)L_85) < ((int32_t)L_88)))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_01f9;
	}

IL_01ed:
	{
		// else sb.AppendLine("    None");
		StringBuilder_t* L_89 = V_0;
		StringBuilder_t* L_90;
		L_90 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_89, _stringLiteral29D25C58D3639A08B86462F60AD1770CD00CC138, NULL);
	}

IL_01f9:
	{
		// return sb.ToString();
		StringBuilder_t* L_91 = V_0;
		String_t* L_92;
		L_92 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_91);
		return L_92;
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
// System.String Rufus31415.WebXR.WebXRGamepadButton::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRGamepadButton_ToString_mF403A37C31457A70A05847D097214B5D02FB8C97 (WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48B71BBD7B1547E38402010DAA21829E8562F8FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFFFF40DA2B5E73185C91557D29B2C75340ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5486318099F1C793F2791E2B3E27F3575E4DB26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// return $"{(Touched ? (Pressed ? "Touched and pressed" : "Touched") : (Pressed ? "Pressed" : "Released"))} - {(int)(100 * Value)}%";
		bool L_0 = __this->___Touched_1;
		G_B1_0 = _stringLiteralD6EFFFF40DA2B5E73185C91557D29B2C75340ED6;
		if (L_0)
		{
			G_B4_0 = _stringLiteralD6EFFFF40DA2B5E73185C91557D29B2C75340ED6;
			goto IL_0023;
		}
	}
	{
		bool L_1 = __this->___Pressed_2;
		G_B2_0 = G_B1_0;
		if (L_1)
		{
			G_B3_0 = G_B1_0;
			goto IL_001c;
		}
	}
	{
		G_B7_0 = _stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2;
		G_B7_1 = G_B2_0;
		goto IL_0037;
	}

IL_001c:
	{
		G_B7_0 = _stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2;
		G_B7_1 = G_B3_0;
		goto IL_0037;
	}

IL_0023:
	{
		bool L_2 = __this->___Pressed_2;
		G_B5_0 = G_B4_0;
		if (L_2)
		{
			G_B6_0 = G_B4_0;
			goto IL_0032;
		}
	}
	{
		G_B7_0 = _stringLiteral48B71BBD7B1547E38402010DAA21829E8562F8FF;
		G_B7_1 = G_B5_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B7_0 = _stringLiteralF5486318099F1C793F2791E2B3E27F3575E4DB26;
		G_B7_1 = G_B6_0;
	}

IL_0037:
	{
		float L_3 = __this->___Value_0;
		int32_t L_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((100.0f), L_3)));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B7_1, G_B7_0, L_5, NULL);
		return L_6;
	}
}
// System.Void Rufus31415.WebXR.WebXRGamepadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRGamepadButton__ctor_mBB3834A8D35FB830C41E9ABB61AD6B485CD4A600 (WebXRGamepadButton_tCB5F20B23878868F45FFFC88FB74162F22CC7573* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rufus31415.WebXR.WebXRInputEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRInputEvent__ctor_mA25A518313974F5CCF2A22A3F2D2C89927E94374 (WebXRInputEvent_t0935517504234FA6AE34655B93BBBB4C31070CA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7774CDCDFD87E3C4D5508D6AA05DEB9B7E756D22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7774CDCDFD87E3C4D5508D6AA05DEB9B7E756D22(__this, UnityEvent_1__ctor_m7774CDCDFD87E3C4D5508D6AA05DEB9B7E756D22_RuntimeMethod_var);
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
// System.Void Rufus31415.WebXR.WebXRJoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRJoint__ctor_mC4692ADEB204562343F776923FCE904C16EB1656 (WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* __this, const RuntimeMethod* method) 
{
	{
		// public float Radius = float.NaN;
		__this->___Radius_2 = (std::numeric_limits<float>::quiet_NaN());
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
// System.Void Rufus31415.WebXR.WebXRHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHand__ctor_mEFE6796E55705265CF59B7D5D4C00F6844AC02AC (WebXRHand_tE80322082AD122643034032253B96E631DA88233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public readonly WebXRJoint[] Joints = new WebXRJoint[JOINT_COUNT];
		WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* L_0 = (WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E*)(WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E*)SZArrayNew(WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->___Joints_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Joints_1), (void*)L_0);
		// public WebXRHand()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// for (int i = 0; i < JOINT_COUNT; i++) Joints[i] = new WebXRJoint();
		V_0 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		// for (int i = 0; i < JOINT_COUNT; i++) Joints[i] = new WebXRJoint();
		WebXRJointU5BU5D_t7BE4B87B03E196E9B421C39E599122ECCFE0637E* L_1 = __this->___Joints_1;
		int32_t L_2 = V_0;
		WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE* L_3 = (WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE*)il2cpp_codegen_object_new(WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE_il2cpp_TypeInfo_var);
		WebXRJoint__ctor_mC4692ADEB204562343F776923FCE904C16EB1656(L_3, NULL);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (WebXRJoint_t2A4DDC64AC86D5EAC909041876D109500E7EF4EE*)L_3);
		// for (int i = 0; i < JOINT_COUNT; i++) Joints[i] = new WebXRJoint();
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < JOINT_COUNT; i++) Joints[i] = new WebXRJoint();
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)25))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleWebXR_get_InSession_mFD2BBB222D464D01D01161E7B824A771BBB30FA4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool InSession { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		bool L_0 = ((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___U3CInSessionU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleWebXR_set_InSession_mB6B03A226702FC9BE264B9AADD5DEDEF06DD220D_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool InSession { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var);
		((SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleWebXR_tD9ADB04409E61DA3766D1B564F2C273B6FF8DCE8_il2cpp_TypeInfo_var))->___U3CInSessionU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
