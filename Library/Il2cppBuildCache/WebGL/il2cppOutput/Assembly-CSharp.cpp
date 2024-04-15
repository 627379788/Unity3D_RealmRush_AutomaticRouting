#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>
struct Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>
struct Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4F3658A59DE14CFE59A306F3FB2BBCB9250479A5;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector2Int,Node>
struct KeyCollection_tA884E2E271AC01E9F3D504310D92554F9C36AEFA;
// System.Collections.Generic.List`1<Node>
struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Queue`1<Node>
struct Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector2Int,Node>
struct ValueCollection_tFE582D0EF6C05FB5B6BA9CC68819E42601F22DB5;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector2Int,Node>[]
struct EntryU5BU5D_tB3B3BD12E0537E30DADD275A9C2A9CDE6FAC91B3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// Node[]
struct NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// Bank
struct Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// CoordinateLabeler
struct CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0;
// EnemyMove
struct EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GridManager
struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectPool
struct ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Pathfinder
struct Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// TargetLocator
struct TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2;
// Tower
struct Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// EnemyMove/<FollowPath>d__9
struct U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ObjectPool/<SpawnEnemy>d__7
struct U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D;
// Tower/<Build>d__3
struct U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m1FC2A769ED5E795761A417D332E40EB8398D7B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBD10DDD819EFDAD884781D85B3768AC482743B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE38350112C2FC866C75F39F216B7F1A33984F23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m529959986F8200786472A7221FAD2A177BDFFA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA2684D873EBFD0E98D6E59097C52E0F4AE16D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m702FD1A0CF04C5B6851043E39C8F5B9BC4908F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m45509418B129B5E99060F1F6B34F12D1D0AB9177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mC0616ED21E2B42553B9EA3E3897363B14D996B7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE9988BAF9B7CD5EC8586D90E7B5A45EFC0A3D3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m61F416478BC0E9743700C8CB3EA92717511EFDC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m97BFD8E82652F4A3D2A6A6CB2D821955F227ECCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m551D0D668FCEB84413B395ED194ACF37B3B05D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m120E5F946E1B3A0ECDBDA8052888CC6BDF7BE0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m5B5AEE902BF69E7F646DAD780241D160392895A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildU3Ed__3_System_Collections_IEnumerator_Reset_mC83CBEDFC52D57F8332C736F77047859C65341B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFollowPathU3Ed__9_System_Collections_IEnumerator_Reset_m0317E9EAD0774232BCF36CF3DA0F023041E0606C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemyU3Ed__7_System_Collections_IEnumerator_Reset_mDF9A999DA17BACD551A10C00307C315BDFFC7B81_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>
struct Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB3B3BD12E0537E30DADD275A9C2A9CDE6FAC91B3* ___entries_1;
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
	KeyCollection_tA884E2E271AC01E9F3D504310D92554F9C36AEFA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFE582D0EF6C05FB5B6BA9CC68819E42601F22DB5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___entries_1)); }
	inline EntryU5BU5D_tB3B3BD12E0537E30DADD275A9C2A9CDE6FAC91B3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB3B3BD12E0537E30DADD275A9C2A9CDE6FAC91B3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB3B3BD12E0537E30DADD275A9C2A9CDE6FAC91B3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___keys_7)); }
	inline KeyCollection_tA884E2E271AC01E9F3D504310D92554F9C36AEFA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA884E2E271AC01E9F3D504310D92554F9C36AEFA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA884E2E271AC01E9F3D504310D92554F9C36AEFA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ___values_8)); }
	inline ValueCollection_tFE582D0EF6C05FB5B6BA9CC68819E42601F22DB5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFE582D0EF6C05FB5B6BA9CC68819E42601F22DB5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFE582D0EF6C05FB5B6BA9CC68819E42601F22DB5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Node>
struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____items_1)); }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* get__items_1() const { return ____items_1; }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Node>
struct Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____array_0)); }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* get__array_0() const { return ____array_0; }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ObjectPool/<SpawnEnemy>d__7
struct U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D  : public RuntimeObject
{
public:
	// System.Int32 ObjectPool/<SpawnEnemy>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectPool/<SpawnEnemy>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ObjectPool ObjectPool/<SpawnEnemy>d__7::<>4__this
	ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D, ___U3CU3E4__this_2)); }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Tower/<Build>d__3
struct U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624  : public RuntimeObject
{
public:
	// System.Int32 Tower/<Build>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tower/<Build>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tower Tower/<Build>d__3::<>4__this
	Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Tower/<Build>d__3::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
	// UnityEngine.Transform Tower/<Build>d__3::<child>5__3
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CchildU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624, ___U3CU3E4__this_2)); }
	inline Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchildU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624, ___U3CchildU3E5__3_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CchildU3E5__3_4() const { return ___U3CchildU3E5__3_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CchildU3E5__3_4() { return &___U3CchildU3E5__3_4; }
	inline void set_U3CchildU3E5__3_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CchildU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchildU3E5__3_4), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Node>
struct Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___list_0)); }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * get_list_0() const { return ___list_0; }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___current_3)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_current_3() const { return ___current_3; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
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


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
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

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>
struct KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512, ___key_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_key_0() const { return ___key_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512, ___value_1)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_value_1() const { return ___value_1; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>
struct KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114, ___key_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_key_0() const { return ___key_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0  : public RuntimeObject
{
public:
	// UnityEngine.Vector2Int Node::coordinates
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates_0;
	// System.Boolean Node::isWalkable
	bool ___isWalkable_1;
	// System.Boolean Node::isExplored
	bool ___isExplored_2;
	// System.Boolean Node::isPath
	bool ___isPath_3;
	// Node Node::connectedTo
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___connectedTo_4;

public:
	inline static int32_t get_offset_of_coordinates_0() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___coordinates_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_coordinates_0() const { return ___coordinates_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_coordinates_0() { return &___coordinates_0; }
	inline void set_coordinates_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___coordinates_0 = value;
	}

	inline static int32_t get_offset_of_isWalkable_1() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___isWalkable_1)); }
	inline bool get_isWalkable_1() const { return ___isWalkable_1; }
	inline bool* get_address_of_isWalkable_1() { return &___isWalkable_1; }
	inline void set_isWalkable_1(bool value)
	{
		___isWalkable_1 = value;
	}

	inline static int32_t get_offset_of_isExplored_2() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___isExplored_2)); }
	inline bool get_isExplored_2() const { return ___isExplored_2; }
	inline bool* get_address_of_isExplored_2() { return &___isExplored_2; }
	inline void set_isExplored_2(bool value)
	{
		___isExplored_2 = value;
	}

	inline static int32_t get_offset_of_isPath_3() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___isPath_3)); }
	inline bool get_isPath_3() const { return ___isPath_3; }
	inline bool* get_address_of_isPath_3() { return &___isPath_3; }
	inline void set_isPath_3(bool value)
	{
		___isPath_3 = value;
	}

	inline static int32_t get_offset_of_connectedTo_4() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___connectedTo_4)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_connectedTo_4() const { return ___connectedTo_4; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_connectedTo_4() { return &___connectedTo_4; }
	inline void set_connectedTo_4(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___connectedTo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedTo_4), (void*)value);
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.SendMessageOptions
struct SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EnemyMove/<FollowPath>d__9
struct U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537  : public RuntimeObject
{
public:
	// System.Int32 EnemyMove/<FollowPath>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyMove/<FollowPath>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemyMove EnemyMove/<FollowPath>d__9::<>4__this
	EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * ___U3CU3E4__this_2;
	// System.Int32 EnemyMove/<FollowPath>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.Vector3 EnemyMove/<FollowPath>d__9::<startPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__3_4;
	// UnityEngine.Vector3 EnemyMove/<FollowPath>d__9::<endPosition>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendPositionU3E5__4_5;
	// System.Single EnemyMove/<FollowPath>d__9::<travelPercent>5__5
	float ___U3CtravelPercentU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CU3E4__this_2)); }
	inline EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CstartPositionU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__3_4() const { return ___U3CstartPositionU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__3_4() { return &___U3CstartPositionU3E5__3_4; }
	inline void set_U3CstartPositionU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CendPositionU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CendPositionU3E5__4_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendPositionU3E5__4_5() const { return ___U3CendPositionU3E5__4_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendPositionU3E5__4_5() { return &___U3CendPositionU3E5__4_5; }
	inline void set_U3CendPositionU3E5__4_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendPositionU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CtravelPercentU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537, ___U3CtravelPercentU3E5__5_6)); }
	inline float get_U3CtravelPercentU3E5__5_6() const { return ___U3CtravelPercentU3E5__5_6; }
	inline float* get_address_of_U3CtravelPercentU3E5__5_6() { return &___U3CtravelPercentU3E5__5_6; }
	inline void set_U3CtravelPercentU3E5__5_6(float value)
	{
		___U3CtravelPercentU3E5__5_6 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>
struct Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85, ___dictionary_0)); }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85, ___current_3)); }
	inline KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>
struct Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560, ___dictionary_0)); }
	inline Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560, ___current_3)); }
	inline KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
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


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Bank
struct Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Bank::startBalance
	int32_t ___startBalance_4;
	// System.Int32 Bank::currentBalance
	int32_t ___currentBalance_5;
	// TMPro.TMP_Text Bank::tmpText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___tmpText_6;

public:
	inline static int32_t get_offset_of_startBalance_4() { return static_cast<int32_t>(offsetof(Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF, ___startBalance_4)); }
	inline int32_t get_startBalance_4() const { return ___startBalance_4; }
	inline int32_t* get_address_of_startBalance_4() { return &___startBalance_4; }
	inline void set_startBalance_4(int32_t value)
	{
		___startBalance_4 = value;
	}

	inline static int32_t get_offset_of_currentBalance_5() { return static_cast<int32_t>(offsetof(Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF, ___currentBalance_5)); }
	inline int32_t get_currentBalance_5() const { return ___currentBalance_5; }
	inline int32_t* get_address_of_currentBalance_5() { return &___currentBalance_5; }
	inline void set_currentBalance_5(int32_t value)
	{
		___currentBalance_5 = value;
	}

	inline static int32_t get_offset_of_tmpText_6() { return static_cast<int32_t>(offsetof(Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF, ___tmpText_6)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_tmpText_6() const { return ___tmpText_6; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_tmpText_6() { return &___tmpText_6; }
	inline void set_tmpText_6(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___tmpText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tmpText_6), (void*)value);
	}
};


// CoordinateLabeler
struct CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color CoordinateLabeler::defaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___defaultColor_4;
	// UnityEngine.Color CoordinateLabeler::blockedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___blockedColor_5;
	// UnityEngine.Color CoordinateLabeler::exporedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___exporedColor_6;
	// UnityEngine.Color CoordinateLabeler::pathColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pathColor_7;
	// TMPro.TextMeshPro CoordinateLabeler::label
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___label_8;
	// UnityEngine.Vector2Int CoordinateLabeler::coordinates
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates_9;
	// GridManager CoordinateLabeler::gridManager
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___gridManager_10;

public:
	inline static int32_t get_offset_of_defaultColor_4() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___defaultColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_defaultColor_4() const { return ___defaultColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_defaultColor_4() { return &___defaultColor_4; }
	inline void set_defaultColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___defaultColor_4 = value;
	}

	inline static int32_t get_offset_of_blockedColor_5() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___blockedColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_blockedColor_5() const { return ___blockedColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_blockedColor_5() { return &___blockedColor_5; }
	inline void set_blockedColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___blockedColor_5 = value;
	}

	inline static int32_t get_offset_of_exporedColor_6() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___exporedColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_exporedColor_6() const { return ___exporedColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_exporedColor_6() { return &___exporedColor_6; }
	inline void set_exporedColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___exporedColor_6 = value;
	}

	inline static int32_t get_offset_of_pathColor_7() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___pathColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pathColor_7() const { return ___pathColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pathColor_7() { return &___pathColor_7; }
	inline void set_pathColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pathColor_7 = value;
	}

	inline static int32_t get_offset_of_label_8() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___label_8)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_label_8() const { return ___label_8; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_label_8() { return &___label_8; }
	inline void set_label_8(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_8), (void*)value);
	}

	inline static int32_t get_offset_of_coordinates_9() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___coordinates_9)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_coordinates_9() const { return ___coordinates_9; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_coordinates_9() { return &___coordinates_9; }
	inline void set_coordinates_9(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___coordinates_9 = value;
	}

	inline static int32_t get_offset_of_gridManager_10() { return static_cast<int32_t>(offsetof(CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C, ___gridManager_10)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_gridManager_10() const { return ___gridManager_10; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_gridManager_10() { return &___gridManager_10; }
	inline void set_gridManager_10(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___gridManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridManager_10), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Enemy::goladReward
	int32_t ___goladReward_4;
	// System.Int32 Enemy::goladPenalty
	int32_t ___goladPenalty_5;
	// Bank Enemy::bank
	Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * ___bank_6;

public:
	inline static int32_t get_offset_of_goladReward_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___goladReward_4)); }
	inline int32_t get_goladReward_4() const { return ___goladReward_4; }
	inline int32_t* get_address_of_goladReward_4() { return &___goladReward_4; }
	inline void set_goladReward_4(int32_t value)
	{
		___goladReward_4 = value;
	}

	inline static int32_t get_offset_of_goladPenalty_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___goladPenalty_5)); }
	inline int32_t get_goladPenalty_5() const { return ___goladPenalty_5; }
	inline int32_t* get_address_of_goladPenalty_5() { return &___goladPenalty_5; }
	inline void set_goladPenalty_5(int32_t value)
	{
		___goladPenalty_5 = value;
	}

	inline static int32_t get_offset_of_bank_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bank_6)); }
	inline Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * get_bank_6() const { return ___bank_6; }
	inline Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF ** get_address_of_bank_6() { return &___bank_6; }
	inline void set_bank_6(Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * value)
	{
		___bank_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bank_6), (void*)value);
	}
};


// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 EnemyHealth::maxHitPoints
	int32_t ___maxHitPoints_4;
	// System.Int32 EnemyHealth::difficultyRamp
	int32_t ___difficultyRamp_5;
	// System.Int32 EnemyHealth::currentHitPoints
	int32_t ___currentHitPoints_6;
	// Enemy EnemyHealth::enemy
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy_7;

public:
	inline static int32_t get_offset_of_maxHitPoints_4() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___maxHitPoints_4)); }
	inline int32_t get_maxHitPoints_4() const { return ___maxHitPoints_4; }
	inline int32_t* get_address_of_maxHitPoints_4() { return &___maxHitPoints_4; }
	inline void set_maxHitPoints_4(int32_t value)
	{
		___maxHitPoints_4 = value;
	}

	inline static int32_t get_offset_of_difficultyRamp_5() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___difficultyRamp_5)); }
	inline int32_t get_difficultyRamp_5() const { return ___difficultyRamp_5; }
	inline int32_t* get_address_of_difficultyRamp_5() { return &___difficultyRamp_5; }
	inline void set_difficultyRamp_5(int32_t value)
	{
		___difficultyRamp_5 = value;
	}

	inline static int32_t get_offset_of_currentHitPoints_6() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___currentHitPoints_6)); }
	inline int32_t get_currentHitPoints_6() const { return ___currentHitPoints_6; }
	inline int32_t* get_address_of_currentHitPoints_6() { return &___currentHitPoints_6; }
	inline void set_currentHitPoints_6(int32_t value)
	{
		___currentHitPoints_6 = value;
	}

	inline static int32_t get_offset_of_enemy_7() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___enemy_7)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_enemy_7() const { return ___enemy_7; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_enemy_7() { return &___enemy_7; }
	inline void set_enemy_7(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___enemy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_7), (void*)value);
	}
};


// EnemyMove
struct EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyMove::speed
	float ___speed_4;
	// System.Collections.Generic.List`1<Node> EnemyMove::paths
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * ___paths_5;
	// Enemy EnemyMove::enemy
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy_6;
	// Pathfinder EnemyMove::pathfinder
	Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * ___pathfinder_7;
	// GridManager EnemyMove::gridManager
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___gridManager_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_paths_5() { return static_cast<int32_t>(offsetof(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F, ___paths_5)); }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * get_paths_5() const { return ___paths_5; }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F ** get_address_of_paths_5() { return &___paths_5; }
	inline void set_paths_5(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * value)
	{
		___paths_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paths_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_6() { return static_cast<int32_t>(offsetof(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F, ___enemy_6)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_enemy_6() const { return ___enemy_6; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_enemy_6() { return &___enemy_6; }
	inline void set_enemy_6(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___enemy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_6), (void*)value);
	}

	inline static int32_t get_offset_of_pathfinder_7() { return static_cast<int32_t>(offsetof(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F, ___pathfinder_7)); }
	inline Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * get_pathfinder_7() const { return ___pathfinder_7; }
	inline Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 ** get_address_of_pathfinder_7() { return &___pathfinder_7; }
	inline void set_pathfinder_7(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * value)
	{
		___pathfinder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathfinder_7), (void*)value);
	}

	inline static int32_t get_offset_of_gridManager_8() { return static_cast<int32_t>(offsetof(EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F, ___gridManager_8)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_gridManager_8() const { return ___gridManager_8; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_gridManager_8() { return &___gridManager_8; }
	inline void set_gridManager_8(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___gridManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridManager_8), (void*)value);
	}
};


// GridManager
struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2Int GridManager::gridSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridSize_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::grid
	Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * ___grid_5;
	// System.Int32 GridManager::worldGridSize
	int32_t ___worldGridSize_6;

public:
	inline static int32_t get_offset_of_gridSize_4() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gridSize_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_gridSize_4() const { return ___gridSize_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_gridSize_4() { return &___gridSize_4; }
	inline void set_gridSize_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___gridSize_4 = value;
	}

	inline static int32_t get_offset_of_grid_5() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___grid_5)); }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * get_grid_5() const { return ___grid_5; }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 ** get_address_of_grid_5() { return &___grid_5; }
	inline void set_grid_5(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * value)
	{
		___grid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldGridSize_6() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___worldGridSize_6)); }
	inline int32_t get_worldGridSize_6() const { return ___worldGridSize_6; }
	inline int32_t* get_address_of_worldGridSize_6() { return &___worldGridSize_6; }
	inline void set_worldGridSize_6(int32_t value)
	{
		___worldGridSize_6 = value;
	}
};


// ObjectPool
struct ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ObjectPool::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_4;
	// System.Single ObjectPool::spawnTime
	float ___spawnTime_5;
	// System.Int32 ObjectPool::poolSize
	int32_t ___poolSize_6;
	// UnityEngine.GameObject[] ObjectPool::pool
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___pool_7;

public:
	inline static int32_t get_offset_of_enemy_4() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___enemy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_4() const { return ___enemy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_4() { return &___enemy_4; }
	inline void set_enemy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnTime_5() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___spawnTime_5)); }
	inline float get_spawnTime_5() const { return ___spawnTime_5; }
	inline float* get_address_of_spawnTime_5() { return &___spawnTime_5; }
	inline void set_spawnTime_5(float value)
	{
		___spawnTime_5 = value;
	}

	inline static int32_t get_offset_of_poolSize_6() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___poolSize_6)); }
	inline int32_t get_poolSize_6() const { return ___poolSize_6; }
	inline int32_t* get_address_of_poolSize_6() { return &___poolSize_6; }
	inline void set_poolSize_6(int32_t value)
	{
		___poolSize_6 = value;
	}

	inline static int32_t get_offset_of_pool_7() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___pool_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_pool_7() const { return ___pool_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_pool_7() { return &___pool_7; }
	inline void set_pool_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___pool_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_7), (void*)value);
	}
};


// Pathfinder
struct Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2Int Pathfinder::startCoordinates
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___startCoordinates_4;
	// UnityEngine.Vector2Int Pathfinder::destinationCoordinates
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___destinationCoordinates_5;
	// Node Pathfinder::startNode
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___startNode_6;
	// Node Pathfinder::destinationNode
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___destinationNode_7;
	// Node Pathfinder::currentSearchNode
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___currentSearchNode_8;
	// System.Collections.Generic.Queue`1<Node> Pathfinder::frontier
	Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * ___frontier_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> Pathfinder::reached
	Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * ___reached_10;
	// UnityEngine.Vector2Int[] Pathfinder::directions
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ___directions_11;
	// GridManager Pathfinder::gridManager
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___gridManager_12;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> Pathfinder::grid
	Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * ___grid_13;

public:
	inline static int32_t get_offset_of_startCoordinates_4() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___startCoordinates_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_startCoordinates_4() const { return ___startCoordinates_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_startCoordinates_4() { return &___startCoordinates_4; }
	inline void set_startCoordinates_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___startCoordinates_4 = value;
	}

	inline static int32_t get_offset_of_destinationCoordinates_5() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___destinationCoordinates_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_destinationCoordinates_5() const { return ___destinationCoordinates_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_destinationCoordinates_5() { return &___destinationCoordinates_5; }
	inline void set_destinationCoordinates_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___destinationCoordinates_5 = value;
	}

	inline static int32_t get_offset_of_startNode_6() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___startNode_6)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_startNode_6() const { return ___startNode_6; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_startNode_6() { return &___startNode_6; }
	inline void set_startNode_6(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___startNode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startNode_6), (void*)value);
	}

	inline static int32_t get_offset_of_destinationNode_7() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___destinationNode_7)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_destinationNode_7() const { return ___destinationNode_7; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_destinationNode_7() { return &___destinationNode_7; }
	inline void set_destinationNode_7(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___destinationNode_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destinationNode_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentSearchNode_8() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___currentSearchNode_8)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_currentSearchNode_8() const { return ___currentSearchNode_8; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_currentSearchNode_8() { return &___currentSearchNode_8; }
	inline void set_currentSearchNode_8(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___currentSearchNode_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSearchNode_8), (void*)value);
	}

	inline static int32_t get_offset_of_frontier_9() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___frontier_9)); }
	inline Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * get_frontier_9() const { return ___frontier_9; }
	inline Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F ** get_address_of_frontier_9() { return &___frontier_9; }
	inline void set_frontier_9(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * value)
	{
		___frontier_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frontier_9), (void*)value);
	}

	inline static int32_t get_offset_of_reached_10() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___reached_10)); }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * get_reached_10() const { return ___reached_10; }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 ** get_address_of_reached_10() { return &___reached_10; }
	inline void set_reached_10(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * value)
	{
		___reached_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reached_10), (void*)value);
	}

	inline static int32_t get_offset_of_directions_11() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___directions_11)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get_directions_11() const { return ___directions_11; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of_directions_11() { return &___directions_11; }
	inline void set_directions_11(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		___directions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directions_11), (void*)value);
	}

	inline static int32_t get_offset_of_gridManager_12() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___gridManager_12)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_gridManager_12() const { return ___gridManager_12; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_gridManager_12() { return &___gridManager_12; }
	inline void set_gridManager_12(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___gridManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_grid_13() { return static_cast<int32_t>(offsetof(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540, ___grid_13)); }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * get_grid_13() const { return ___grid_13; }
	inline Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 ** get_address_of_grid_13() { return &___grid_13; }
	inline void set_grid_13(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * value)
	{
		___grid_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_13), (void*)value);
	}
};


// TargetLocator
struct TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform TargetLocator::weapon
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___weapon_4;
	// UnityEngine.ParticleSystem TargetLocator::projectileParticles
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___projectileParticles_5;
	// System.Single TargetLocator::range
	float ___range_6;
	// UnityEngine.Transform TargetLocator::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_7;

public:
	inline static int32_t get_offset_of_weapon_4() { return static_cast<int32_t>(offsetof(TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D, ___weapon_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_weapon_4() const { return ___weapon_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_weapon_4() { return &___weapon_4; }
	inline void set_weapon_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___weapon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_4), (void*)value);
	}

	inline static int32_t get_offset_of_projectileParticles_5() { return static_cast<int32_t>(offsetof(TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D, ___projectileParticles_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_projectileParticles_5() const { return ___projectileParticles_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_projectileParticles_5() { return &___projectileParticles_5; }
	inline void set_projectileParticles_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___projectileParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D, ___range_6)); }
	inline float get_range_6() const { return ___range_6; }
	inline float* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(float value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D, ___target_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_7() const { return ___target_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_7), (void*)value);
	}
};


// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tower Tile::tower
	Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * ___tower_4;
	// System.Boolean Tile::isPlacebled
	bool ___isPlacebled_5;
	// GridManager Tile::gridManager
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___gridManager_6;
	// Pathfinder Tile::pathfinder
	Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * ___pathfinder_7;
	// UnityEngine.Vector2Int Tile::coordinate
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinate_8;

public:
	inline static int32_t get_offset_of_tower_4() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___tower_4)); }
	inline Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * get_tower_4() const { return ___tower_4; }
	inline Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 ** get_address_of_tower_4() { return &___tower_4; }
	inline void set_tower_4(Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * value)
	{
		___tower_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tower_4), (void*)value);
	}

	inline static int32_t get_offset_of_isPlacebled_5() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isPlacebled_5)); }
	inline bool get_isPlacebled_5() const { return ___isPlacebled_5; }
	inline bool* get_address_of_isPlacebled_5() { return &___isPlacebled_5; }
	inline void set_isPlacebled_5(bool value)
	{
		___isPlacebled_5 = value;
	}

	inline static int32_t get_offset_of_gridManager_6() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___gridManager_6)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_gridManager_6() const { return ___gridManager_6; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_gridManager_6() { return &___gridManager_6; }
	inline void set_gridManager_6(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___gridManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_pathfinder_7() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___pathfinder_7)); }
	inline Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * get_pathfinder_7() const { return ___pathfinder_7; }
	inline Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 ** get_address_of_pathfinder_7() { return &___pathfinder_7; }
	inline void set_pathfinder_7(Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * value)
	{
		___pathfinder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathfinder_7), (void*)value);
	}

	inline static int32_t get_offset_of_coordinate_8() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___coordinate_8)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_coordinate_8() const { return ___coordinate_8; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_coordinate_8() { return &___coordinate_8; }
	inline void set_coordinate_8(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___coordinate_8 = value;
	}
};


// Tower
struct Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Tower::cost
	int32_t ___cost_4;
	// System.Single Tower::delayTime
	float ___delayTime_5;

public:
	inline static int32_t get_offset_of_cost_4() { return static_cast<int32_t>(offsetof(Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0, ___cost_4)); }
	inline int32_t get_cost_4() const { return ___cost_4; }
	inline int32_t* get_address_of_cost_4() { return &___cost_4; }
	inline void set_cost_4(int32_t value)
	{
		___cost_4 = value;
	}

	inline static int32_t get_offset_of_delayTime_5() { return static_cast<int32_t>(offsetof(Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0, ___delayTime_5)); }
	inline float get_delayTime_5() const { return ___delayTime_5; }
	inline float* get_address_of_delayTime_5() { return &___delayTime_5; }
	inline void set_delayTime_5(float value)
	{
		___delayTime_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_259;

public:
	inline static int32_t get_offset_of_m_text_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_37)); }
	inline String_t* get_m_text_37() const { return ___m_text_37; }
	inline String_t** get_address_of_m_text_37() { return &___m_text_37; }
	inline void set_m_text_37(String_t* value)
	{
		___m_text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_38)); }
	inline bool get_m_IsTextBackingStringDirty_38() const { return ___m_IsTextBackingStringDirty_38; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_38() { return &___m_IsTextBackingStringDirty_38; }
	inline void set_m_IsTextBackingStringDirty_38(bool value)
	{
		___m_IsTextBackingStringDirty_38 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_39)); }
	inline RuntimeObject* get_m_TextPreprocessor_39() const { return ___m_TextPreprocessor_39; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_39() { return &___m_TextPreprocessor_39; }
	inline void set_m_TextPreprocessor_39(RuntimeObject* value)
	{
		___m_TextPreprocessor_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_40)); }
	inline bool get_m_isRightToLeft_40() const { return ___m_isRightToLeft_40; }
	inline bool* get_address_of_m_isRightToLeft_40() { return &___m_isRightToLeft_40; }
	inline void set_m_isRightToLeft_40(bool value)
	{
		___m_isRightToLeft_40 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_41() const { return ___m_fontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_41() { return &___m_fontAsset_41; }
	inline void set_m_fontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_42)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_42() const { return ___m_currentFontAsset_42; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_42() { return &___m_currentFontAsset_42; }
	inline void set_m_currentFontAsset_42(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_43)); }
	inline bool get_m_isSDFShader_43() const { return ___m_isSDFShader_43; }
	inline bool* get_address_of_m_isSDFShader_43() { return &___m_isSDFShader_43; }
	inline void set_m_isSDFShader_43(bool value)
	{
		___m_isSDFShader_43 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_44() const { return ___m_sharedMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_44() { return &___m_sharedMaterial_44; }
	inline void set_m_sharedMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_45() const { return ___m_currentMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_45() { return &___m_currentMaterial_45; }
	inline void set_m_currentMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_49)); }
	inline int32_t get_m_currentMaterialIndex_49() const { return ___m_currentMaterialIndex_49; }
	inline int32_t* get_address_of_m_currentMaterialIndex_49() { return &___m_currentMaterialIndex_49; }
	inline void set_m_currentMaterialIndex_49(int32_t value)
	{
		___m_currentMaterialIndex_49 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_50() const { return ___m_fontSharedMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_50() { return &___m_fontSharedMaterials_50; }
	inline void set_m_fontSharedMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_51() const { return ___m_fontMaterial_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_51() { return &___m_fontMaterial_51; }
	inline void set_m_fontMaterial_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_52)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_52() const { return ___m_fontMaterials_52; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_52() { return &___m_fontMaterials_52; }
	inline void set_m_fontMaterials_52(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_53)); }
	inline bool get_m_isMaterialDirty_53() const { return ___m_isMaterialDirty_53; }
	inline bool* get_address_of_m_isMaterialDirty_53() { return &___m_isMaterialDirty_53; }
	inline void set_m_isMaterialDirty_53(bool value)
	{
		___m_isMaterialDirty_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_54() const { return ___m_fontColor32_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_54() { return &___m_fontColor32_54; }
	inline void set_m_fontColor32_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_54 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_55)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_55() const { return ___m_fontColor_55; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_55() { return &___m_fontColor_55; }
	inline void set_m_fontColor_55(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_55 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_57() const { return ___m_underlineColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_57() { return &___m_underlineColor_57; }
	inline void set_m_underlineColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_57 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_58)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_58() const { return ___m_strikethroughColor_58; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_58() { return &___m_strikethroughColor_58; }
	inline void set_m_strikethroughColor_58(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_58 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_59)); }
	inline bool get_m_enableVertexGradient_59() const { return ___m_enableVertexGradient_59; }
	inline bool* get_address_of_m_enableVertexGradient_59() { return &___m_enableVertexGradient_59; }
	inline void set_m_enableVertexGradient_59(bool value)
	{
		___m_enableVertexGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_60)); }
	inline int32_t get_m_colorMode_60() const { return ___m_colorMode_60; }
	inline int32_t* get_address_of_m_colorMode_60() { return &___m_colorMode_60; }
	inline void set_m_colorMode_60(int32_t value)
	{
		___m_colorMode_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_61)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_61() const { return ___m_fontColorGradient_61; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_61() { return &___m_fontColorGradient_61; }
	inline void set_m_fontColorGradient_61(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_61 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_62)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_62() const { return ___m_fontColorGradientPreset_62; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_62() { return &___m_fontColorGradientPreset_62; }
	inline void set_m_fontColorGradientPreset_62(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_63)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_63() const { return ___m_spriteAsset_63; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_63() { return &___m_spriteAsset_63; }
	inline void set_m_spriteAsset_63(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_64)); }
	inline bool get_m_tintAllSprites_64() const { return ___m_tintAllSprites_64; }
	inline bool* get_address_of_m_tintAllSprites_64() { return &___m_tintAllSprites_64; }
	inline void set_m_tintAllSprites_64(bool value)
	{
		___m_tintAllSprites_64 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_65)); }
	inline bool get_m_tintSprite_65() const { return ___m_tintSprite_65; }
	inline bool* get_address_of_m_tintSprite_65() { return &___m_tintSprite_65; }
	inline void set_m_tintSprite_65(bool value)
	{
		___m_tintSprite_65 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_66)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_66() const { return ___m_spriteColor_66; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_66() { return &___m_spriteColor_66; }
	inline void set_m_spriteColor_66(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_66 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_67)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_67() const { return ___m_StyleSheet_67; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_67() { return &___m_StyleSheet_67; }
	inline void set_m_StyleSheet_67(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_68)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_68() const { return ___m_TextStyle_68; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_68() { return &___m_TextStyle_68; }
	inline void set_m_TextStyle_68(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_69)); }
	inline int32_t get_m_TextStyleHashCode_69() const { return ___m_TextStyleHashCode_69; }
	inline int32_t* get_address_of_m_TextStyleHashCode_69() { return &___m_TextStyleHashCode_69; }
	inline void set_m_TextStyleHashCode_69(int32_t value)
	{
		___m_TextStyleHashCode_69 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_70)); }
	inline bool get_m_overrideHtmlColors_70() const { return ___m_overrideHtmlColors_70; }
	inline bool* get_address_of_m_overrideHtmlColors_70() { return &___m_overrideHtmlColors_70; }
	inline void set_m_overrideHtmlColors_70(bool value)
	{
		___m_overrideHtmlColors_70 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_71() const { return ___m_faceColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_71() { return &___m_faceColor_71; }
	inline void set_m_faceColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_72)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_72() const { return ___m_outlineColor_72; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_72() { return &___m_outlineColor_72; }
	inline void set_m_outlineColor_72(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_72 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_73)); }
	inline float get_m_outlineWidth_73() const { return ___m_outlineWidth_73; }
	inline float* get_address_of_m_outlineWidth_73() { return &___m_outlineWidth_73; }
	inline void set_m_outlineWidth_73(float value)
	{
		___m_outlineWidth_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_74)); }
	inline float get_m_fontSize_74() const { return ___m_fontSize_74; }
	inline float* get_address_of_m_fontSize_74() { return &___m_fontSize_74; }
	inline void set_m_fontSize_74(float value)
	{
		___m_fontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_75)); }
	inline float get_m_currentFontSize_75() const { return ___m_currentFontSize_75; }
	inline float* get_address_of_m_currentFontSize_75() { return &___m_currentFontSize_75; }
	inline void set_m_currentFontSize_75(float value)
	{
		___m_currentFontSize_75 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_76)); }
	inline float get_m_fontSizeBase_76() const { return ___m_fontSizeBase_76; }
	inline float* get_address_of_m_fontSizeBase_76() { return &___m_fontSizeBase_76; }
	inline void set_m_fontSizeBase_76(float value)
	{
		___m_fontSizeBase_76 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_77)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_77() const { return ___m_sizeStack_77; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_77() { return &___m_sizeStack_77; }
	inline void set_m_sizeStack_77(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_78)); }
	inline int32_t get_m_fontWeight_78() const { return ___m_fontWeight_78; }
	inline int32_t* get_address_of_m_fontWeight_78() { return &___m_fontWeight_78; }
	inline void set_m_fontWeight_78(int32_t value)
	{
		___m_fontWeight_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_79)); }
	inline int32_t get_m_FontWeightInternal_79() const { return ___m_FontWeightInternal_79; }
	inline int32_t* get_address_of_m_FontWeightInternal_79() { return &___m_FontWeightInternal_79; }
	inline void set_m_FontWeightInternal_79(int32_t value)
	{
		___m_FontWeightInternal_79 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_80)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_80() const { return ___m_FontWeightStack_80; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_80() { return &___m_FontWeightStack_80; }
	inline void set_m_FontWeightStack_80(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_80 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_80))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_81)); }
	inline bool get_m_enableAutoSizing_81() const { return ___m_enableAutoSizing_81; }
	inline bool* get_address_of_m_enableAutoSizing_81() { return &___m_enableAutoSizing_81; }
	inline void set_m_enableAutoSizing_81(bool value)
	{
		___m_enableAutoSizing_81 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_82)); }
	inline float get_m_maxFontSize_82() const { return ___m_maxFontSize_82; }
	inline float* get_address_of_m_maxFontSize_82() { return &___m_maxFontSize_82; }
	inline void set_m_maxFontSize_82(float value)
	{
		___m_maxFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_83)); }
	inline float get_m_minFontSize_83() const { return ___m_minFontSize_83; }
	inline float* get_address_of_m_minFontSize_83() { return &___m_minFontSize_83; }
	inline void set_m_minFontSize_83(float value)
	{
		___m_minFontSize_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_84)); }
	inline int32_t get_m_AutoSizeIterationCount_84() const { return ___m_AutoSizeIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_84() { return &___m_AutoSizeIterationCount_84; }
	inline void set_m_AutoSizeIterationCount_84(int32_t value)
	{
		___m_AutoSizeIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_85)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_85() const { return ___m_AutoSizeMaxIterationCount_85; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_85() { return &___m_AutoSizeMaxIterationCount_85; }
	inline void set_m_AutoSizeMaxIterationCount_85(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_85 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_86)); }
	inline bool get_m_IsAutoSizePointSizeSet_86() const { return ___m_IsAutoSizePointSizeSet_86; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_86() { return &___m_IsAutoSizePointSizeSet_86; }
	inline void set_m_IsAutoSizePointSizeSet_86(bool value)
	{
		___m_IsAutoSizePointSizeSet_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_87)); }
	inline float get_m_fontSizeMin_87() const { return ___m_fontSizeMin_87; }
	inline float* get_address_of_m_fontSizeMin_87() { return &___m_fontSizeMin_87; }
	inline void set_m_fontSizeMin_87(float value)
	{
		___m_fontSizeMin_87 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_88)); }
	inline float get_m_fontSizeMax_88() const { return ___m_fontSizeMax_88; }
	inline float* get_address_of_m_fontSizeMax_88() { return &___m_fontSizeMax_88; }
	inline void set_m_fontSizeMax_88(float value)
	{
		___m_fontSizeMax_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_89)); }
	inline int32_t get_m_fontStyle_89() const { return ___m_fontStyle_89; }
	inline int32_t* get_address_of_m_fontStyle_89() { return &___m_fontStyle_89; }
	inline void set_m_fontStyle_89(int32_t value)
	{
		___m_fontStyle_89 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_90)); }
	inline int32_t get_m_FontStyleInternal_90() const { return ___m_FontStyleInternal_90; }
	inline int32_t* get_address_of_m_FontStyleInternal_90() { return &___m_FontStyleInternal_90; }
	inline void set_m_FontStyleInternal_90(int32_t value)
	{
		___m_FontStyleInternal_90 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_91)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_91() const { return ___m_fontStyleStack_91; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_91() { return &___m_fontStyleStack_91; }
	inline void set_m_fontStyleStack_91(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_91 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_92)); }
	inline bool get_m_isUsingBold_92() const { return ___m_isUsingBold_92; }
	inline bool* get_address_of_m_isUsingBold_92() { return &___m_isUsingBold_92; }
	inline void set_m_isUsingBold_92(bool value)
	{
		___m_isUsingBold_92 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_93)); }
	inline int32_t get_m_HorizontalAlignment_93() const { return ___m_HorizontalAlignment_93; }
	inline int32_t* get_address_of_m_HorizontalAlignment_93() { return &___m_HorizontalAlignment_93; }
	inline void set_m_HorizontalAlignment_93(int32_t value)
	{
		___m_HorizontalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_94)); }
	inline int32_t get_m_VerticalAlignment_94() const { return ___m_VerticalAlignment_94; }
	inline int32_t* get_address_of_m_VerticalAlignment_94() { return &___m_VerticalAlignment_94; }
	inline void set_m_VerticalAlignment_94(int32_t value)
	{
		___m_VerticalAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_95)); }
	inline int32_t get_m_textAlignment_95() const { return ___m_textAlignment_95; }
	inline int32_t* get_address_of_m_textAlignment_95() { return &___m_textAlignment_95; }
	inline void set_m_textAlignment_95(int32_t value)
	{
		___m_textAlignment_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_96)); }
	inline int32_t get_m_lineJustification_96() const { return ___m_lineJustification_96; }
	inline int32_t* get_address_of_m_lineJustification_96() { return &___m_lineJustification_96; }
	inline void set_m_lineJustification_96(int32_t value)
	{
		___m_lineJustification_96 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_97)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_97() const { return ___m_lineJustificationStack_97; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_97() { return &___m_lineJustificationStack_97; }
	inline void set_m_lineJustificationStack_97(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_97 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_97))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_98)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_98() const { return ___m_textContainerLocalCorners_98; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_98() { return &___m_textContainerLocalCorners_98; }
	inline void set_m_textContainerLocalCorners_98(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_98), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_99)); }
	inline float get_m_characterSpacing_99() const { return ___m_characterSpacing_99; }
	inline float* get_address_of_m_characterSpacing_99() { return &___m_characterSpacing_99; }
	inline void set_m_characterSpacing_99(float value)
	{
		___m_characterSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_100)); }
	inline float get_m_cSpacing_100() const { return ___m_cSpacing_100; }
	inline float* get_address_of_m_cSpacing_100() { return &___m_cSpacing_100; }
	inline void set_m_cSpacing_100(float value)
	{
		___m_cSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_101)); }
	inline float get_m_monoSpacing_101() const { return ___m_monoSpacing_101; }
	inline float* get_address_of_m_monoSpacing_101() { return &___m_monoSpacing_101; }
	inline void set_m_monoSpacing_101(float value)
	{
		___m_monoSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_102)); }
	inline float get_m_wordSpacing_102() const { return ___m_wordSpacing_102; }
	inline float* get_address_of_m_wordSpacing_102() { return &___m_wordSpacing_102; }
	inline void set_m_wordSpacing_102(float value)
	{
		___m_wordSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_103)); }
	inline float get_m_lineSpacing_103() const { return ___m_lineSpacing_103; }
	inline float* get_address_of_m_lineSpacing_103() { return &___m_lineSpacing_103; }
	inline void set_m_lineSpacing_103(float value)
	{
		___m_lineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_104)); }
	inline float get_m_lineSpacingDelta_104() const { return ___m_lineSpacingDelta_104; }
	inline float* get_address_of_m_lineSpacingDelta_104() { return &___m_lineSpacingDelta_104; }
	inline void set_m_lineSpacingDelta_104(float value)
	{
		___m_lineSpacingDelta_104 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_105)); }
	inline float get_m_lineHeight_105() const { return ___m_lineHeight_105; }
	inline float* get_address_of_m_lineHeight_105() { return &___m_lineHeight_105; }
	inline void set_m_lineHeight_105(float value)
	{
		___m_lineHeight_105 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_106)); }
	inline bool get_m_IsDrivenLineSpacing_106() const { return ___m_IsDrivenLineSpacing_106; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_106() { return &___m_IsDrivenLineSpacing_106; }
	inline void set_m_IsDrivenLineSpacing_106(bool value)
	{
		___m_IsDrivenLineSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_107)); }
	inline float get_m_lineSpacingMax_107() const { return ___m_lineSpacingMax_107; }
	inline float* get_address_of_m_lineSpacingMax_107() { return &___m_lineSpacingMax_107; }
	inline void set_m_lineSpacingMax_107(float value)
	{
		___m_lineSpacingMax_107 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_108)); }
	inline float get_m_paragraphSpacing_108() const { return ___m_paragraphSpacing_108; }
	inline float* get_address_of_m_paragraphSpacing_108() { return &___m_paragraphSpacing_108; }
	inline void set_m_paragraphSpacing_108(float value)
	{
		___m_paragraphSpacing_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_109)); }
	inline float get_m_charWidthMaxAdj_109() const { return ___m_charWidthMaxAdj_109; }
	inline float* get_address_of_m_charWidthMaxAdj_109() { return &___m_charWidthMaxAdj_109; }
	inline void set_m_charWidthMaxAdj_109(float value)
	{
		___m_charWidthMaxAdj_109 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_110)); }
	inline float get_m_charWidthAdjDelta_110() const { return ___m_charWidthAdjDelta_110; }
	inline float* get_address_of_m_charWidthAdjDelta_110() { return &___m_charWidthAdjDelta_110; }
	inline void set_m_charWidthAdjDelta_110(float value)
	{
		___m_charWidthAdjDelta_110 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_111)); }
	inline bool get_m_enableWordWrapping_111() const { return ___m_enableWordWrapping_111; }
	inline bool* get_address_of_m_enableWordWrapping_111() { return &___m_enableWordWrapping_111; }
	inline void set_m_enableWordWrapping_111(bool value)
	{
		___m_enableWordWrapping_111 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_112)); }
	inline bool get_m_isCharacterWrappingEnabled_112() const { return ___m_isCharacterWrappingEnabled_112; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_112() { return &___m_isCharacterWrappingEnabled_112; }
	inline void set_m_isCharacterWrappingEnabled_112(bool value)
	{
		___m_isCharacterWrappingEnabled_112 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_113)); }
	inline bool get_m_isNonBreakingSpace_113() const { return ___m_isNonBreakingSpace_113; }
	inline bool* get_address_of_m_isNonBreakingSpace_113() { return &___m_isNonBreakingSpace_113; }
	inline void set_m_isNonBreakingSpace_113(bool value)
	{
		___m_isNonBreakingSpace_113 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_114)); }
	inline bool get_m_isIgnoringAlignment_114() const { return ___m_isIgnoringAlignment_114; }
	inline bool* get_address_of_m_isIgnoringAlignment_114() { return &___m_isIgnoringAlignment_114; }
	inline void set_m_isIgnoringAlignment_114(bool value)
	{
		___m_isIgnoringAlignment_114 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_115)); }
	inline float get_m_wordWrappingRatios_115() const { return ___m_wordWrappingRatios_115; }
	inline float* get_address_of_m_wordWrappingRatios_115() { return &___m_wordWrappingRatios_115; }
	inline void set_m_wordWrappingRatios_115(float value)
	{
		___m_wordWrappingRatios_115 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_116)); }
	inline int32_t get_m_overflowMode_116() const { return ___m_overflowMode_116; }
	inline int32_t* get_address_of_m_overflowMode_116() { return &___m_overflowMode_116; }
	inline void set_m_overflowMode_116(int32_t value)
	{
		___m_overflowMode_116 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_117)); }
	inline int32_t get_m_firstOverflowCharacterIndex_117() const { return ___m_firstOverflowCharacterIndex_117; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_117() { return &___m_firstOverflowCharacterIndex_117; }
	inline void set_m_firstOverflowCharacterIndex_117(int32_t value)
	{
		___m_firstOverflowCharacterIndex_117 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_118() const { return ___m_linkedTextComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_118() { return &___m_linkedTextComponent_118; }
	inline void set_m_linkedTextComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_119)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_119() const { return ___parentLinkedComponent_119; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_119() { return &___parentLinkedComponent_119; }
	inline void set_parentLinkedComponent_119(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_119), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_120)); }
	inline bool get_m_isTextTruncated_120() const { return ___m_isTextTruncated_120; }
	inline bool* get_address_of_m_isTextTruncated_120() { return &___m_isTextTruncated_120; }
	inline void set_m_isTextTruncated_120(bool value)
	{
		___m_isTextTruncated_120 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_121)); }
	inline bool get_m_enableKerning_121() const { return ___m_enableKerning_121; }
	inline bool* get_address_of_m_enableKerning_121() { return &___m_enableKerning_121; }
	inline void set_m_enableKerning_121(bool value)
	{
		___m_enableKerning_121 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_122)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_122() const { return ___m_GlyphHorizontalAdvanceAdjustment_122; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_122() { return &___m_GlyphHorizontalAdvanceAdjustment_122; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_122(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_122 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_123)); }
	inline bool get_m_enableExtraPadding_123() const { return ___m_enableExtraPadding_123; }
	inline bool* get_address_of_m_enableExtraPadding_123() { return &___m_enableExtraPadding_123; }
	inline void set_m_enableExtraPadding_123(bool value)
	{
		___m_enableExtraPadding_123 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_124)); }
	inline bool get_checkPaddingRequired_124() const { return ___checkPaddingRequired_124; }
	inline bool* get_address_of_checkPaddingRequired_124() { return &___checkPaddingRequired_124; }
	inline void set_checkPaddingRequired_124(bool value)
	{
		___checkPaddingRequired_124 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_125)); }
	inline bool get_m_isRichText_125() const { return ___m_isRichText_125; }
	inline bool* get_address_of_m_isRichText_125() { return &___m_isRichText_125; }
	inline void set_m_isRichText_125(bool value)
	{
		___m_isRichText_125 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_126)); }
	inline bool get_m_parseCtrlCharacters_126() const { return ___m_parseCtrlCharacters_126; }
	inline bool* get_address_of_m_parseCtrlCharacters_126() { return &___m_parseCtrlCharacters_126; }
	inline void set_m_parseCtrlCharacters_126(bool value)
	{
		___m_parseCtrlCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_127)); }
	inline bool get_m_isOverlay_127() const { return ___m_isOverlay_127; }
	inline bool* get_address_of_m_isOverlay_127() { return &___m_isOverlay_127; }
	inline void set_m_isOverlay_127(bool value)
	{
		___m_isOverlay_127 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_128)); }
	inline bool get_m_isOrthographic_128() const { return ___m_isOrthographic_128; }
	inline bool* get_address_of_m_isOrthographic_128() { return &___m_isOrthographic_128; }
	inline void set_m_isOrthographic_128(bool value)
	{
		___m_isOrthographic_128 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_129)); }
	inline bool get_m_isCullingEnabled_129() const { return ___m_isCullingEnabled_129; }
	inline bool* get_address_of_m_isCullingEnabled_129() { return &___m_isCullingEnabled_129; }
	inline void set_m_isCullingEnabled_129(bool value)
	{
		___m_isCullingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_130)); }
	inline bool get_m_isMaskingEnabled_130() const { return ___m_isMaskingEnabled_130; }
	inline bool* get_address_of_m_isMaskingEnabled_130() { return &___m_isMaskingEnabled_130; }
	inline void set_m_isMaskingEnabled_130(bool value)
	{
		___m_isMaskingEnabled_130 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_131)); }
	inline bool get_isMaskUpdateRequired_131() const { return ___isMaskUpdateRequired_131; }
	inline bool* get_address_of_isMaskUpdateRequired_131() { return &___isMaskUpdateRequired_131; }
	inline void set_isMaskUpdateRequired_131(bool value)
	{
		___isMaskUpdateRequired_131 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_132)); }
	inline bool get_m_ignoreCulling_132() const { return ___m_ignoreCulling_132; }
	inline bool* get_address_of_m_ignoreCulling_132() { return &___m_ignoreCulling_132; }
	inline void set_m_ignoreCulling_132(bool value)
	{
		___m_ignoreCulling_132 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_133)); }
	inline int32_t get_m_horizontalMapping_133() const { return ___m_horizontalMapping_133; }
	inline int32_t* get_address_of_m_horizontalMapping_133() { return &___m_horizontalMapping_133; }
	inline void set_m_horizontalMapping_133(int32_t value)
	{
		___m_horizontalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_134)); }
	inline int32_t get_m_verticalMapping_134() const { return ___m_verticalMapping_134; }
	inline int32_t* get_address_of_m_verticalMapping_134() { return &___m_verticalMapping_134; }
	inline void set_m_verticalMapping_134(int32_t value)
	{
		___m_verticalMapping_134 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_135)); }
	inline float get_m_uvLineOffset_135() const { return ___m_uvLineOffset_135; }
	inline float* get_address_of_m_uvLineOffset_135() { return &___m_uvLineOffset_135; }
	inline void set_m_uvLineOffset_135(float value)
	{
		___m_uvLineOffset_135 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_136)); }
	inline int32_t get_m_renderMode_136() const { return ___m_renderMode_136; }
	inline int32_t* get_address_of_m_renderMode_136() { return &___m_renderMode_136; }
	inline void set_m_renderMode_136(int32_t value)
	{
		___m_renderMode_136 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_137)); }
	inline int32_t get_m_geometrySortingOrder_137() const { return ___m_geometrySortingOrder_137; }
	inline int32_t* get_address_of_m_geometrySortingOrder_137() { return &___m_geometrySortingOrder_137; }
	inline void set_m_geometrySortingOrder_137(int32_t value)
	{
		___m_geometrySortingOrder_137 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_138)); }
	inline bool get_m_IsTextObjectScaleStatic_138() const { return ___m_IsTextObjectScaleStatic_138; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_138() { return &___m_IsTextObjectScaleStatic_138; }
	inline void set_m_IsTextObjectScaleStatic_138(bool value)
	{
		___m_IsTextObjectScaleStatic_138 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_139)); }
	inline bool get_m_VertexBufferAutoSizeReduction_139() const { return ___m_VertexBufferAutoSizeReduction_139; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_139() { return &___m_VertexBufferAutoSizeReduction_139; }
	inline void set_m_VertexBufferAutoSizeReduction_139(bool value)
	{
		___m_VertexBufferAutoSizeReduction_139 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_140)); }
	inline int32_t get_m_firstVisibleCharacter_140() const { return ___m_firstVisibleCharacter_140; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_140() { return &___m_firstVisibleCharacter_140; }
	inline void set_m_firstVisibleCharacter_140(int32_t value)
	{
		___m_firstVisibleCharacter_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_141)); }
	inline int32_t get_m_maxVisibleCharacters_141() const { return ___m_maxVisibleCharacters_141; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_141() { return &___m_maxVisibleCharacters_141; }
	inline void set_m_maxVisibleCharacters_141(int32_t value)
	{
		___m_maxVisibleCharacters_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_142)); }
	inline int32_t get_m_maxVisibleWords_142() const { return ___m_maxVisibleWords_142; }
	inline int32_t* get_address_of_m_maxVisibleWords_142() { return &___m_maxVisibleWords_142; }
	inline void set_m_maxVisibleWords_142(int32_t value)
	{
		___m_maxVisibleWords_142 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_143)); }
	inline int32_t get_m_maxVisibleLines_143() const { return ___m_maxVisibleLines_143; }
	inline int32_t* get_address_of_m_maxVisibleLines_143() { return &___m_maxVisibleLines_143; }
	inline void set_m_maxVisibleLines_143(int32_t value)
	{
		___m_maxVisibleLines_143 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_144)); }
	inline bool get_m_useMaxVisibleDescender_144() const { return ___m_useMaxVisibleDescender_144; }
	inline bool* get_address_of_m_useMaxVisibleDescender_144() { return &___m_useMaxVisibleDescender_144; }
	inline void set_m_useMaxVisibleDescender_144(bool value)
	{
		___m_useMaxVisibleDescender_144 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_145)); }
	inline int32_t get_m_pageToDisplay_145() const { return ___m_pageToDisplay_145; }
	inline int32_t* get_address_of_m_pageToDisplay_145() { return &___m_pageToDisplay_145; }
	inline void set_m_pageToDisplay_145(int32_t value)
	{
		___m_pageToDisplay_145 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_146)); }
	inline bool get_m_isNewPage_146() const { return ___m_isNewPage_146; }
	inline bool* get_address_of_m_isNewPage_146() { return &___m_isNewPage_146; }
	inline void set_m_isNewPage_146(bool value)
	{
		___m_isNewPage_146 = value;
	}

	inline static int32_t get_offset_of_m_margin_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_147)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_147() const { return ___m_margin_147; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_147() { return &___m_margin_147; }
	inline void set_m_margin_147(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_147 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_148)); }
	inline float get_m_marginLeft_148() const { return ___m_marginLeft_148; }
	inline float* get_address_of_m_marginLeft_148() { return &___m_marginLeft_148; }
	inline void set_m_marginLeft_148(float value)
	{
		___m_marginLeft_148 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_149)); }
	inline float get_m_marginRight_149() const { return ___m_marginRight_149; }
	inline float* get_address_of_m_marginRight_149() { return &___m_marginRight_149; }
	inline void set_m_marginRight_149(float value)
	{
		___m_marginRight_149 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_150)); }
	inline float get_m_marginWidth_150() const { return ___m_marginWidth_150; }
	inline float* get_address_of_m_marginWidth_150() { return &___m_marginWidth_150; }
	inline void set_m_marginWidth_150(float value)
	{
		___m_marginWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_151)); }
	inline float get_m_marginHeight_151() const { return ___m_marginHeight_151; }
	inline float* get_address_of_m_marginHeight_151() { return &___m_marginHeight_151; }
	inline void set_m_marginHeight_151(float value)
	{
		___m_marginHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_width_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_152)); }
	inline float get_m_width_152() const { return ___m_width_152; }
	inline float* get_address_of_m_width_152() { return &___m_width_152; }
	inline void set_m_width_152(float value)
	{
		___m_width_152 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_153)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_153() const { return ___m_textInfo_153; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_153() { return &___m_textInfo_153; }
	inline void set_m_textInfo_153(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_154)); }
	inline bool get_m_havePropertiesChanged_154() const { return ___m_havePropertiesChanged_154; }
	inline bool* get_address_of_m_havePropertiesChanged_154() { return &___m_havePropertiesChanged_154; }
	inline void set_m_havePropertiesChanged_154(bool value)
	{
		___m_havePropertiesChanged_154 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_155)); }
	inline bool get_m_isUsingLegacyAnimationComponent_155() const { return ___m_isUsingLegacyAnimationComponent_155; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_155() { return &___m_isUsingLegacyAnimationComponent_155; }
	inline void set_m_isUsingLegacyAnimationComponent_155(bool value)
	{
		___m_isUsingLegacyAnimationComponent_155 = value;
	}

	inline static int32_t get_offset_of_m_transform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_156)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_156() const { return ___m_transform_156; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_156() { return &___m_transform_156; }
	inline void set_m_transform_156(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_157)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_157() const { return ___m_rectTransform_157; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_157() { return &___m_rectTransform_157; }
	inline void set_m_rectTransform_157(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_157 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_157), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_158() const { return ___m_PreviousRectTransformSize_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_158() { return &___m_PreviousRectTransformSize_158; }
	inline void set_m_PreviousRectTransformSize_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_158 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_159)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_159() const { return ___m_PreviousPivotPosition_159; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_159() { return &___m_PreviousPivotPosition_159; }
	inline void set_m_PreviousPivotPosition_159(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_159 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_160)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_160() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_160; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_160() { return &___U3CautoSizeTextContainerU3Ek__BackingField_160; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_160(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_160 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_161)); }
	inline bool get_m_autoSizeTextContainer_161() const { return ___m_autoSizeTextContainer_161; }
	inline bool* get_address_of_m_autoSizeTextContainer_161() { return &___m_autoSizeTextContainer_161; }
	inline void set_m_autoSizeTextContainer_161(bool value)
	{
		___m_autoSizeTextContainer_161 = value;
	}

	inline static int32_t get_offset_of_m_mesh_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_162)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_162() const { return ___m_mesh_162; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_162() { return &___m_mesh_162; }
	inline void set_m_mesh_162(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_162), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_163)); }
	inline bool get_m_isVolumetricText_163() const { return ___m_isVolumetricText_163; }
	inline bool* get_address_of_m_isVolumetricText_163() { return &___m_isVolumetricText_163; }
	inline void set_m_isVolumetricText_163(bool value)
	{
		___m_isVolumetricText_163 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_166)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_166() const { return ___OnPreRenderText_166; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_166() { return &___OnPreRenderText_166; }
	inline void set_OnPreRenderText_166(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_167)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_167() const { return ___m_spriteAnimator_167; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_167() { return &___m_spriteAnimator_167; }
	inline void set_m_spriteAnimator_167(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_167 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_167), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_168)); }
	inline float get_m_flexibleHeight_168() const { return ___m_flexibleHeight_168; }
	inline float* get_address_of_m_flexibleHeight_168() { return &___m_flexibleHeight_168; }
	inline void set_m_flexibleHeight_168(float value)
	{
		___m_flexibleHeight_168 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_169)); }
	inline float get_m_flexibleWidth_169() const { return ___m_flexibleWidth_169; }
	inline float* get_address_of_m_flexibleWidth_169() { return &___m_flexibleWidth_169; }
	inline void set_m_flexibleWidth_169(float value)
	{
		___m_flexibleWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_170)); }
	inline float get_m_minWidth_170() const { return ___m_minWidth_170; }
	inline float* get_address_of_m_minWidth_170() { return &___m_minWidth_170; }
	inline void set_m_minWidth_170(float value)
	{
		___m_minWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_171)); }
	inline float get_m_minHeight_171() const { return ___m_minHeight_171; }
	inline float* get_address_of_m_minHeight_171() { return &___m_minHeight_171; }
	inline void set_m_minHeight_171(float value)
	{
		___m_minHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_172)); }
	inline float get_m_maxWidth_172() const { return ___m_maxWidth_172; }
	inline float* get_address_of_m_maxWidth_172() { return &___m_maxWidth_172; }
	inline void set_m_maxWidth_172(float value)
	{
		___m_maxWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_173)); }
	inline float get_m_maxHeight_173() const { return ___m_maxHeight_173; }
	inline float* get_address_of_m_maxHeight_173() { return &___m_maxHeight_173; }
	inline void set_m_maxHeight_173(float value)
	{
		___m_maxHeight_173 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_174)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_174() const { return ___m_LayoutElement_174; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_174() { return &___m_LayoutElement_174; }
	inline void set_m_LayoutElement_174(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_174 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_174), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_175)); }
	inline float get_m_preferredWidth_175() const { return ___m_preferredWidth_175; }
	inline float* get_address_of_m_preferredWidth_175() { return &___m_preferredWidth_175; }
	inline void set_m_preferredWidth_175(float value)
	{
		___m_preferredWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_176)); }
	inline float get_m_renderedWidth_176() const { return ___m_renderedWidth_176; }
	inline float* get_address_of_m_renderedWidth_176() { return &___m_renderedWidth_176; }
	inline void set_m_renderedWidth_176(float value)
	{
		___m_renderedWidth_176 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_177)); }
	inline bool get_m_isPreferredWidthDirty_177() const { return ___m_isPreferredWidthDirty_177; }
	inline bool* get_address_of_m_isPreferredWidthDirty_177() { return &___m_isPreferredWidthDirty_177; }
	inline void set_m_isPreferredWidthDirty_177(bool value)
	{
		___m_isPreferredWidthDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_178)); }
	inline float get_m_preferredHeight_178() const { return ___m_preferredHeight_178; }
	inline float* get_address_of_m_preferredHeight_178() { return &___m_preferredHeight_178; }
	inline void set_m_preferredHeight_178(float value)
	{
		___m_preferredHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_179)); }
	inline float get_m_renderedHeight_179() const { return ___m_renderedHeight_179; }
	inline float* get_address_of_m_renderedHeight_179() { return &___m_renderedHeight_179; }
	inline void set_m_renderedHeight_179(float value)
	{
		___m_renderedHeight_179 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_180)); }
	inline bool get_m_isPreferredHeightDirty_180() const { return ___m_isPreferredHeightDirty_180; }
	inline bool* get_address_of_m_isPreferredHeightDirty_180() { return &___m_isPreferredHeightDirty_180; }
	inline void set_m_isPreferredHeightDirty_180(bool value)
	{
		___m_isPreferredHeightDirty_180 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_181)); }
	inline bool get_m_isCalculatingPreferredValues_181() const { return ___m_isCalculatingPreferredValues_181; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_181() { return &___m_isCalculatingPreferredValues_181; }
	inline void set_m_isCalculatingPreferredValues_181(bool value)
	{
		___m_isCalculatingPreferredValues_181 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_182)); }
	inline int32_t get_m_layoutPriority_182() const { return ___m_layoutPriority_182; }
	inline int32_t* get_address_of_m_layoutPriority_182() { return &___m_layoutPriority_182; }
	inline void set_m_layoutPriority_182(int32_t value)
	{
		___m_layoutPriority_182 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_183)); }
	inline bool get_m_isLayoutDirty_183() const { return ___m_isLayoutDirty_183; }
	inline bool* get_address_of_m_isLayoutDirty_183() { return &___m_isLayoutDirty_183; }
	inline void set_m_isLayoutDirty_183(bool value)
	{
		___m_isLayoutDirty_183 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_184)); }
	inline bool get_m_isAwake_184() const { return ___m_isAwake_184; }
	inline bool* get_address_of_m_isAwake_184() { return &___m_isAwake_184; }
	inline void set_m_isAwake_184(bool value)
	{
		___m_isAwake_184 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_185)); }
	inline bool get_m_isWaitingOnResourceLoad_185() const { return ___m_isWaitingOnResourceLoad_185; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_185() { return &___m_isWaitingOnResourceLoad_185; }
	inline void set_m_isWaitingOnResourceLoad_185(bool value)
	{
		___m_isWaitingOnResourceLoad_185 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_186)); }
	inline int32_t get_m_inputSource_186() const { return ___m_inputSource_186; }
	inline int32_t* get_address_of_m_inputSource_186() { return &___m_inputSource_186; }
	inline void set_m_inputSource_186(int32_t value)
	{
		___m_inputSource_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_198() const { return ___m_TextProcessingArray_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_198() { return &___m_TextProcessingArray_198; }
	inline void set_m_TextProcessingArray_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_199)); }
	inline int32_t get_m_InternalTextProcessingArraySize_199() const { return ___m_InternalTextProcessingArraySize_199; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_199() { return &___m_InternalTextProcessingArraySize_199; }
	inline void set_m_InternalTextProcessingArraySize_199(int32_t value)
	{
		___m_InternalTextProcessingArraySize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_201)); }
	inline int32_t get_m_totalCharacterCount_201() const { return ___m_totalCharacterCount_201; }
	inline int32_t* get_address_of_m_totalCharacterCount_201() { return &___m_totalCharacterCount_201; }
	inline void set_m_totalCharacterCount_201(int32_t value)
	{
		___m_totalCharacterCount_201 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_208)); }
	inline int32_t get_m_characterCount_208() const { return ___m_characterCount_208; }
	inline int32_t* get_address_of_m_characterCount_208() { return &___m_characterCount_208; }
	inline void set_m_characterCount_208(int32_t value)
	{
		___m_characterCount_208 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_209)); }
	inline int32_t get_m_firstCharacterOfLine_209() const { return ___m_firstCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_209() { return &___m_firstCharacterOfLine_209; }
	inline void set_m_firstCharacterOfLine_209(int32_t value)
	{
		___m_firstCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_210)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_210() const { return ___m_firstVisibleCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_210() { return &___m_firstVisibleCharacterOfLine_210; }
	inline void set_m_firstVisibleCharacterOfLine_210(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_211)); }
	inline int32_t get_m_lastCharacterOfLine_211() const { return ___m_lastCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_211() { return &___m_lastCharacterOfLine_211; }
	inline void set_m_lastCharacterOfLine_211(int32_t value)
	{
		___m_lastCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_212)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_212() const { return ___m_lastVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_212() { return &___m_lastVisibleCharacterOfLine_212; }
	inline void set_m_lastVisibleCharacterOfLine_212(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_213)); }
	inline int32_t get_m_lineNumber_213() const { return ___m_lineNumber_213; }
	inline int32_t* get_address_of_m_lineNumber_213() { return &___m_lineNumber_213; }
	inline void set_m_lineNumber_213(int32_t value)
	{
		___m_lineNumber_213 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_214)); }
	inline int32_t get_m_lineVisibleCharacterCount_214() const { return ___m_lineVisibleCharacterCount_214; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_214() { return &___m_lineVisibleCharacterCount_214; }
	inline void set_m_lineVisibleCharacterCount_214(int32_t value)
	{
		___m_lineVisibleCharacterCount_214 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_215)); }
	inline int32_t get_m_pageNumber_215() const { return ___m_pageNumber_215; }
	inline int32_t* get_address_of_m_pageNumber_215() { return &___m_pageNumber_215; }
	inline void set_m_pageNumber_215(int32_t value)
	{
		___m_pageNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_216)); }
	inline float get_m_PageAscender_216() const { return ___m_PageAscender_216; }
	inline float* get_address_of_m_PageAscender_216() { return &___m_PageAscender_216; }
	inline void set_m_PageAscender_216(float value)
	{
		___m_PageAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_217)); }
	inline float get_m_maxTextAscender_217() const { return ___m_maxTextAscender_217; }
	inline float* get_address_of_m_maxTextAscender_217() { return &___m_maxTextAscender_217; }
	inline void set_m_maxTextAscender_217(float value)
	{
		___m_maxTextAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_218)); }
	inline float get_m_maxCapHeight_218() const { return ___m_maxCapHeight_218; }
	inline float* get_address_of_m_maxCapHeight_218() { return &___m_maxCapHeight_218; }
	inline void set_m_maxCapHeight_218(float value)
	{
		___m_maxCapHeight_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_219)); }
	inline float get_m_ElementAscender_219() const { return ___m_ElementAscender_219; }
	inline float* get_address_of_m_ElementAscender_219() { return &___m_ElementAscender_219; }
	inline void set_m_ElementAscender_219(float value)
	{
		___m_ElementAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_220)); }
	inline float get_m_ElementDescender_220() const { return ___m_ElementDescender_220; }
	inline float* get_address_of_m_ElementDescender_220() { return &___m_ElementDescender_220; }
	inline void set_m_ElementDescender_220(float value)
	{
		___m_ElementDescender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_221)); }
	inline float get_m_maxLineAscender_221() const { return ___m_maxLineAscender_221; }
	inline float* get_address_of_m_maxLineAscender_221() { return &___m_maxLineAscender_221; }
	inline void set_m_maxLineAscender_221(float value)
	{
		___m_maxLineAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_222)); }
	inline float get_m_maxLineDescender_222() const { return ___m_maxLineDescender_222; }
	inline float* get_address_of_m_maxLineDescender_222() { return &___m_maxLineDescender_222; }
	inline void set_m_maxLineDescender_222(float value)
	{
		___m_maxLineDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_223)); }
	inline float get_m_startOfLineAscender_223() const { return ___m_startOfLineAscender_223; }
	inline float* get_address_of_m_startOfLineAscender_223() { return &___m_startOfLineAscender_223; }
	inline void set_m_startOfLineAscender_223(float value)
	{
		___m_startOfLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_224)); }
	inline float get_m_startOfLineDescender_224() const { return ___m_startOfLineDescender_224; }
	inline float* get_address_of_m_startOfLineDescender_224() { return &___m_startOfLineDescender_224; }
	inline void set_m_startOfLineDescender_224(float value)
	{
		___m_startOfLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_225)); }
	inline float get_m_lineOffset_225() const { return ___m_lineOffset_225; }
	inline float* get_address_of_m_lineOffset_225() { return &___m_lineOffset_225; }
	inline void set_m_lineOffset_225(float value)
	{
		___m_lineOffset_225 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_226)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_226() const { return ___m_meshExtents_226; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_226() { return &___m_meshExtents_226; }
	inline void set_m_meshExtents_226(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_226 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_227)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_227() const { return ___m_htmlColor_227; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_227() { return &___m_htmlColor_227; }
	inline void set_m_htmlColor_227(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_227 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_228() const { return ___m_colorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_228() { return &___m_colorStack_228; }
	inline void set_m_colorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_229() const { return ___m_underlineColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_229() { return &___m_underlineColorStack_229; }
	inline void set_m_underlineColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_230() const { return ___m_strikethroughColorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_230() { return &___m_strikethroughColorStack_230; }
	inline void set_m_strikethroughColorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_231)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_231() const { return ___m_HighlightStateStack_231; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_231() { return &___m_HighlightStateStack_231; }
	inline void set_m_HighlightStateStack_231(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_232)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_232() const { return ___m_colorGradientPreset_232; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_232() { return &___m_colorGradientPreset_232; }
	inline void set_m_colorGradientPreset_232(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_232 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_232), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_233)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_233() const { return ___m_colorGradientStack_233; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_233() { return &___m_colorGradientStack_233; }
	inline void set_m_colorGradientStack_233(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_234)); }
	inline bool get_m_colorGradientPresetIsTinted_234() const { return ___m_colorGradientPresetIsTinted_234; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_234() { return &___m_colorGradientPresetIsTinted_234; }
	inline void set_m_colorGradientPresetIsTinted_234(bool value)
	{
		___m_colorGradientPresetIsTinted_234 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_235)); }
	inline float get_m_tabSpacing_235() const { return ___m_tabSpacing_235; }
	inline float* get_address_of_m_tabSpacing_235() { return &___m_tabSpacing_235; }
	inline void set_m_tabSpacing_235(float value)
	{
		___m_tabSpacing_235 = value;
	}

	inline static int32_t get_offset_of_m_spacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_236)); }
	inline float get_m_spacing_236() const { return ___m_spacing_236; }
	inline float* get_address_of_m_spacing_236() { return &___m_spacing_236; }
	inline void set_m_spacing_236(float value)
	{
		___m_spacing_236 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_237)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_237() const { return ___m_TextStyleStacks_237; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_237() { return &___m_TextStyleStacks_237; }
	inline void set_m_TextStyleStacks_237(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_237 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_237), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_238)); }
	inline int32_t get_m_TextStyleStackDepth_238() const { return ___m_TextStyleStackDepth_238; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_238() { return &___m_TextStyleStackDepth_238; }
	inline void set_m_TextStyleStackDepth_238(int32_t value)
	{
		___m_TextStyleStackDepth_238 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_239)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_239() const { return ___m_ItalicAngleStack_239; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_239() { return &___m_ItalicAngleStack_239; }
	inline void set_m_ItalicAngleStack_239(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_239 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_239))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_240)); }
	inline int32_t get_m_ItalicAngle_240() const { return ___m_ItalicAngle_240; }
	inline int32_t* get_address_of_m_ItalicAngle_240() { return &___m_ItalicAngle_240; }
	inline void set_m_ItalicAngle_240(int32_t value)
	{
		___m_ItalicAngle_240 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_241() const { return ___m_actionStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_241() { return &___m_actionStack_241; }
	inline void set_m_actionStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_242)); }
	inline float get_m_padding_242() const { return ___m_padding_242; }
	inline float* get_address_of_m_padding_242() { return &___m_padding_242; }
	inline void set_m_padding_242(float value)
	{
		___m_padding_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_243)); }
	inline float get_m_baselineOffset_243() const { return ___m_baselineOffset_243; }
	inline float* get_address_of_m_baselineOffset_243() { return &___m_baselineOffset_243; }
	inline void set_m_baselineOffset_243(float value)
	{
		___m_baselineOffset_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_244)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_244() const { return ___m_baselineOffsetStack_244; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_244() { return &___m_baselineOffsetStack_244; }
	inline void set_m_baselineOffsetStack_244(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_244 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_244))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_245)); }
	inline float get_m_xAdvance_245() const { return ___m_xAdvance_245; }
	inline float* get_address_of_m_xAdvance_245() { return &___m_xAdvance_245; }
	inline void set_m_xAdvance_245(float value)
	{
		___m_xAdvance_245 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_246)); }
	inline int32_t get_m_textElementType_246() const { return ___m_textElementType_246; }
	inline int32_t* get_address_of_m_textElementType_246() { return &___m_textElementType_246; }
	inline void set_m_textElementType_246(int32_t value)
	{
		___m_textElementType_246 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_247)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_247() const { return ___m_cached_TextElement_247; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_247() { return &___m_cached_TextElement_247; }
	inline void set_m_cached_TextElement_247(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_247 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_247), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_248() const { return ___m_Ellipsis_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_248() { return &___m_Ellipsis_248; }
	inline void set_m_Ellipsis_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_249)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_249() const { return ___m_Underline_249; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_249() { return &___m_Underline_249; }
	inline void set_m_Underline_249(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_250() const { return ___m_defaultSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_250() { return &___m_defaultSpriteAsset_250; }
	inline void set_m_defaultSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_251)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_251() const { return ___m_currentSpriteAsset_251; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_251() { return &___m_currentSpriteAsset_251; }
	inline void set_m_currentSpriteAsset_251(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_252)); }
	inline int32_t get_m_spriteCount_252() const { return ___m_spriteCount_252; }
	inline int32_t* get_address_of_m_spriteCount_252() { return &___m_spriteCount_252; }
	inline void set_m_spriteCount_252(int32_t value)
	{
		___m_spriteCount_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_253)); }
	inline int32_t get_m_spriteIndex_253() const { return ___m_spriteIndex_253; }
	inline int32_t* get_address_of_m_spriteIndex_253() { return &___m_spriteIndex_253; }
	inline void set_m_spriteIndex_253(int32_t value)
	{
		___m_spriteIndex_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_254)); }
	inline int32_t get_m_spriteAnimationID_254() const { return ___m_spriteAnimationID_254; }
	inline int32_t* get_address_of_m_spriteAnimationID_254() { return &___m_spriteAnimationID_254; }
	inline void set_m_spriteAnimationID_254(int32_t value)
	{
		___m_spriteAnimationID_254 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_258)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_258() const { return ___m_TextBackingArray_258; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_258() { return &___m_TextBackingArray_258; }
	inline void set_m_TextBackingArray_258(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_258 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_258))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_259)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_259() const { return ___k_Power_259; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_259() { return &___k_Power_259; }
	inline void set_k_Power_259(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_259 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_259), (void*)value);
	}
};


// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_266;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_267;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_268;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_269;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_270;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_271;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_272;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_273;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_274;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_275;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_276;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_277;
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_298;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_299;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_300;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_301;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_302;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_266)); }
	inline bool get_m_hasFontAssetChanged_266() const { return ___m_hasFontAssetChanged_266; }
	inline bool* get_address_of_m_hasFontAssetChanged_266() { return &___m_hasFontAssetChanged_266; }
	inline void set_m_hasFontAssetChanged_266(bool value)
	{
		___m_hasFontAssetChanged_266 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_267)); }
	inline float get_m_previousLossyScaleY_267() const { return ___m_previousLossyScaleY_267; }
	inline float* get_address_of_m_previousLossyScaleY_267() { return &___m_previousLossyScaleY_267; }
	inline void set_m_previousLossyScaleY_267(float value)
	{
		___m_previousLossyScaleY_267 = value;
	}

	inline static int32_t get_offset_of_m_renderer_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_268)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_268() const { return ___m_renderer_268; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_268() { return &___m_renderer_268; }
	inline void set_m_renderer_268(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_269)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_269() const { return ___m_meshFilter_269; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_269() { return &___m_meshFilter_269; }
	inline void set_m_meshFilter_269(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_270)); }
	inline bool get_m_isFirstAllocation_270() const { return ___m_isFirstAllocation_270; }
	inline bool* get_address_of_m_isFirstAllocation_270() { return &___m_isFirstAllocation_270; }
	inline void set_m_isFirstAllocation_270(bool value)
	{
		___m_isFirstAllocation_270 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_271)); }
	inline int32_t get_m_max_characters_271() const { return ___m_max_characters_271; }
	inline int32_t* get_address_of_m_max_characters_271() { return &___m_max_characters_271; }
	inline void set_m_max_characters_271(int32_t value)
	{
		___m_max_characters_271 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_272)); }
	inline int32_t get_m_max_numberOfLines_272() const { return ___m_max_numberOfLines_272; }
	inline int32_t* get_address_of_m_max_numberOfLines_272() { return &___m_max_numberOfLines_272; }
	inline void set_m_max_numberOfLines_272(int32_t value)
	{
		___m_max_numberOfLines_272 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_273)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_273() const { return ___m_subTextObjects_273; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_273() { return &___m_subTextObjects_273; }
	inline void set_m_subTextObjects_273(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_273 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_273), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_274)); }
	inline int32_t get_m_maskType_274() const { return ___m_maskType_274; }
	inline int32_t* get_address_of_m_maskType_274() { return &___m_maskType_274; }
	inline void set_m_maskType_274(int32_t value)
	{
		___m_maskType_274 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_275)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_275() const { return ___m_EnvMapMatrix_275; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_275() { return &___m_EnvMapMatrix_275; }
	inline void set_m_EnvMapMatrix_275(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_275 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_276)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_276() const { return ___m_RectTransformCorners_276; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_276() { return &___m_RectTransformCorners_276; }
	inline void set_m_RectTransformCorners_276(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_276 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_276), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_277)); }
	inline bool get_m_isRegisteredForEvents_277() const { return ___m_isRegisteredForEvents_277; }
	inline bool* get_address_of_m_isRegisteredForEvents_277() { return &___m_isRegisteredForEvents_277; }
	inline void set_m_isRegisteredForEvents_277(bool value)
	{
		___m_isRegisteredForEvents_277 = value;
	}

	inline static int32_t get_offset_of__SortingLayer_298() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayer_298)); }
	inline int32_t get__SortingLayer_298() const { return ____SortingLayer_298; }
	inline int32_t* get_address_of__SortingLayer_298() { return &____SortingLayer_298; }
	inline void set__SortingLayer_298(int32_t value)
	{
		____SortingLayer_298 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_299() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_299)); }
	inline int32_t get__SortingLayerID_299() const { return ____SortingLayerID_299; }
	inline int32_t* get_address_of__SortingLayerID_299() { return &____SortingLayerID_299; }
	inline void set__SortingLayerID_299(int32_t value)
	{
		____SortingLayerID_299 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_300() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_300)); }
	inline int32_t get__SortingOrder_300() const { return ____SortingOrder_300; }
	inline int32_t* get_address_of__SortingOrder_300() { return &____SortingOrder_300; }
	inline void set__SortingOrder_300(int32_t value)
	{
		____SortingOrder_300 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_301() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___OnPreRenderText_301)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_301() const { return ___OnPreRenderText_301; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_301() { return &___OnPreRenderText_301; }
	inline void set_OnPreRenderText_301(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_301 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_301), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_302() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_302)); }
	inline bool get_m_currentAutoSizeMode_302() const { return ___m_currentAutoSizeMode_302; }
	inline bool* get_address_of_m_currentAutoSizeMode_302() { return &___m_currentAutoSizeMode_302; }
	inline void set_m_currentAutoSizeMode_302(bool value)
	{
		___m_currentAutoSizeMode_302 = value;
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.List`1<Node>

struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_StaticFields, ____emptyArray_5)); }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Node>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>


// System.Collections.Generic.Queue`1<Node>


// System.Collections.Generic.Queue`1<Node>


// System.Collections.Generic.Queue`1<System.Object>


// System.Collections.Generic.Queue`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.String

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


// System.String


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// ObjectPool/<SpawnEnemy>d__7


// ObjectPool/<SpawnEnemy>d__7


// Tower/<Build>d__3


// Tower/<Build>d__3


// System.Collections.Generic.List`1/Enumerator<Node>


// System.Collections.Generic.List`1/Enumerator<Node>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// TMPro.TMP_TextProcessingStack`1<System.Int32>


// TMPro.TMP_TextProcessingStack`1<System.Int32>


// TMPro.TMP_TextProcessingStack`1<System.Single>


// TMPro.TMP_TextProcessingStack`1<System.Single>


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>


// System.Boolean

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


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// UnityEngine.Color32


// UnityEngine.Color32


// System.Enum

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


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// TMPro.MaterialReference


// TMPro.MaterialReference


// UnityEngine.Matrix4x4

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Matrix4x4


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// UnityEngine.SceneManagement.Scene


// UnityEngine.SceneManagement.Scene


// System.Single


// System.Single


// TMPro.TMP_FontStyleStack


// TMPro.TMP_FontStyleStack


// TMPro.TMP_Offset

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Offset


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector2Int

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector2Int


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.WaitForEndOfFrame


// UnityEngine.WaitForEndOfFrame


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// UnityEngine.ParticleSystem/EmissionModule


// UnityEngine.ParticleSystem/EmissionModule


// TMPro.TMP_Text/SpecialCharacter


// TMPro.TMP_Text/SpecialCharacter


// TMPro.TMP_Text/TextBackingContainer


// TMPro.TMP_Text/TextBackingContainer


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>


// TMPro.ColorMode


// TMPro.ColorMode


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Exception

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


// System.Exception


// TMPro.Extents

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.Extents


// TMPro.FontStyles


// TMPro.FontStyles


// TMPro.FontWeight


// TMPro.FontWeight


// TMPro.HighlightState


// TMPro.HighlightState


// TMPro.HorizontalAlignmentOptions


// TMPro.HorizontalAlignmentOptions


// UnityEngine.KeyCode


// UnityEngine.KeyCode


// TMPro.MaskingTypes


// TMPro.MaskingTypes


// Node


// Node


// UnityEngine.Object

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


// UnityEngine.Object


// Unity.Profiling.ProfilerMarker


// Unity.Profiling.ProfilerMarker


// UnityEngine.SendMessageOptions


// UnityEngine.SendMessageOptions


// TMPro.TMP_TextElementType


// TMPro.TMP_TextElementType


// TMPro.TextAlignmentOptions


// TMPro.TextAlignmentOptions


// TMPro.TextOverflowModes


// TMPro.TextOverflowModes


// TMPro.TextRenderFlags


// TMPro.TextRenderFlags


// TMPro.TextureMappingOptions


// TMPro.TextureMappingOptions


// TMPro.VertexGradient


// TMPro.VertexGradient


// TMPro.VertexSortingOrder


// TMPro.VertexSortingOrder


// TMPro.VerticalAlignmentOptions


// TMPro.VerticalAlignmentOptions


// EnemyMove/<FollowPath>d__9


// EnemyMove/<FollowPath>d__9


// TMPro.TMP_Text/TextInputSources


// TMPro.TMP_Text/TextInputSources


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.SystemException


// System.SystemException


// TMPro.TMP_LineInfo


// TMPro.TMP_LineInfo


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.NotSupportedException


// System.NotSupportedException


// UnityEngine.ParticleSystem


// UnityEngine.ParticleSystem


// UnityEngine.Transform


// UnityEngine.Transform


// TMPro.WordWrapState


// TMPro.WordWrapState


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// Bank


// Bank


// CoordinateLabeler


// CoordinateLabeler


// Enemy


// Enemy


// EnemyHealth


// EnemyHealth


// EnemyMove


// EnemyMove


// GridManager


// GridManager


// ObjectPool


// ObjectPool


// Pathfinder


// Pathfinder


// TargetLocator


// TargetLocator


// Tile


// Tile


// Tower


// Tower


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// TMPro.TMP_Text

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;

public:
	inline static int32_t get_offset_of_m_materialReferences_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_46)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_46() const { return ___m_materialReferences_46; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_46() { return &___m_materialReferences_46; }
	inline void set_m_materialReferences_46(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_47)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_47() const { return ___m_materialReferenceIndexLookup_47; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_47() { return &___m_materialReferenceIndexLookup_47; }
	inline void set_m_materialReferenceIndexLookup_47(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_48)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_48() const { return ___m_materialReferenceStack_48; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_48() { return &___m_materialReferenceStack_48; }
	inline void set_m_materialReferenceStack_48(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_56() const { return ___s_colorWhite_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_56() { return &___s_colorWhite_56; }
	inline void set_s_colorWhite_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_56 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_164)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_164() const { return ___OnFontAssetRequest_164; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_164() { return &___OnFontAssetRequest_164; }
	inline void set_OnFontAssetRequest_164(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_165)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_165() const { return ___OnSpriteAssetRequest_165; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_165() { return &___OnSpriteAssetRequest_165; }
	inline void set_OnSpriteAssetRequest_165(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_202() const { return ___m_SavedWordWrapState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_202() { return &___m_SavedWordWrapState_202; }
	inline void set_m_SavedWordWrapState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_203() const { return ___m_SavedLineState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_203() { return &___m_SavedLineState_203; }
	inline void set_m_SavedLineState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_204() const { return ___m_SavedEllipsisState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_204() { return &___m_SavedEllipsisState_204; }
	inline void set_m_SavedEllipsisState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_205() const { return ___m_SavedLastValidState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_205() { return &___m_SavedLastValidState_205; }
	inline void set_m_SavedLastValidState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_206() const { return ___m_SavedSoftLineBreakState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_206() { return &___m_SavedSoftLineBreakState_206; }
	inline void set_m_SavedSoftLineBreakState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_207)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_207() const { return ___m_EllipsisInsertionCandidateStack_207; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_207() { return &___m_EllipsisInsertionCandidateStack_207; }
	inline void set_m_EllipsisInsertionCandidateStack_207(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_207))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_255() const { return ___k_ParseTextMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_255() { return &___k_ParseTextMarker_255; }
	inline void set_k_ParseTextMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_256)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_256() const { return ___k_InsertNewLineMarker_256; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_256() { return &___k_InsertNewLineMarker_256; }
	inline void set_k_InsertNewLineMarker_256(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_256 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_260() const { return ___k_LargePositiveVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_260() { return &___k_LargePositiveVector2_260; }
	inline void set_k_LargePositiveVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_261)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_261() const { return ___k_LargeNegativeVector2_261; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_261() { return &___k_LargeNegativeVector2_261; }
	inline void set_k_LargeNegativeVector2_261(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_262)); }
	inline float get_k_LargePositiveFloat_262() const { return ___k_LargePositiveFloat_262; }
	inline float* get_address_of_k_LargePositiveFloat_262() { return &___k_LargePositiveFloat_262; }
	inline void set_k_LargePositiveFloat_262(float value)
	{
		___k_LargePositiveFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_263)); }
	inline float get_k_LargeNegativeFloat_263() const { return ___k_LargeNegativeFloat_263; }
	inline float* get_address_of_k_LargeNegativeFloat_263() { return &___k_LargeNegativeFloat_263; }
	inline void set_k_LargeNegativeFloat_263(float value)
	{
		___k_LargeNegativeFloat_263 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_264)); }
	inline int32_t get_k_LargePositiveInt_264() const { return ___k_LargePositiveInt_264; }
	inline int32_t* get_address_of_k_LargePositiveInt_264() { return &___k_LargePositiveInt_264; }
	inline void set_k_LargePositiveInt_264(int32_t value)
	{
		___k_LargePositiveInt_264 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_265() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_265)); }
	inline int32_t get_k_LargeNegativeInt_265() const { return ___k_LargeNegativeInt_265; }
	inline int32_t* get_address_of_k_LargeNegativeInt_265() { return &___k_LargeNegativeInt_265; }
	inline void set_k_LargeNegativeInt_265(int32_t value)
	{
		___k_LargeNegativeInt_265 = value;
	}
};


// TMPro.TMP_Text


// TMPro.TextMeshPro

struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextMarker_278;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SetArraySizesMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseMarkupTextMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CharacterLookupMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleGPOSFeaturesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CalculateVerticesPositionMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeTextMetricsMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVisibleCharacterMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleWhiteSpacesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleHorizontalLineBreakingMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVerticalLineBreakingMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveGlyphVertexDataMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeCharacterAdvanceMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleCarriageReturnMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleLineTerminationMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SavePageInfoMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveProcessingStatesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIIMarker_297;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextMarker_278)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextMarker_278() const { return ___k_GenerateTextMarker_278; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextMarker_278() { return &___k_GenerateTextMarker_278; }
	inline void set_k_GenerateTextMarker_278(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextMarker_278 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SetArraySizesMarker_279)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SetArraySizesMarker_279() const { return ___k_SetArraySizesMarker_279; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SetArraySizesMarker_279() { return &___k_SetArraySizesMarker_279; }
	inline void set_k_SetArraySizesMarker_279(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SetArraySizesMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIMarker_280)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIMarker_280() const { return ___k_GenerateTextPhaseIMarker_280; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIMarker_280() { return &___k_GenerateTextPhaseIMarker_280; }
	inline void set_k_GenerateTextPhaseIMarker_280(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_281() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ParseMarkupTextMarker_281)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseMarkupTextMarker_281() const { return ___k_ParseMarkupTextMarker_281; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseMarkupTextMarker_281() { return &___k_ParseMarkupTextMarker_281; }
	inline void set_k_ParseMarkupTextMarker_281(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseMarkupTextMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_282() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_CharacterLookupMarker_282)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CharacterLookupMarker_282() const { return ___k_CharacterLookupMarker_282; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CharacterLookupMarker_282() { return &___k_CharacterLookupMarker_282; }
	inline void set_k_CharacterLookupMarker_282(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CharacterLookupMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_283() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleGPOSFeaturesMarker_283)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleGPOSFeaturesMarker_283() const { return ___k_HandleGPOSFeaturesMarker_283; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleGPOSFeaturesMarker_283() { return &___k_HandleGPOSFeaturesMarker_283; }
	inline void set_k_HandleGPOSFeaturesMarker_283(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleGPOSFeaturesMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_284() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_CalculateVerticesPositionMarker_284)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CalculateVerticesPositionMarker_284() const { return ___k_CalculateVerticesPositionMarker_284; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CalculateVerticesPositionMarker_284() { return &___k_CalculateVerticesPositionMarker_284; }
	inline void set_k_CalculateVerticesPositionMarker_284(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CalculateVerticesPositionMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_285() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ComputeTextMetricsMarker_285)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeTextMetricsMarker_285() const { return ___k_ComputeTextMetricsMarker_285; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeTextMetricsMarker_285() { return &___k_ComputeTextMetricsMarker_285; }
	inline void set_k_ComputeTextMetricsMarker_285(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeTextMetricsMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_286() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleVisibleCharacterMarker_286)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVisibleCharacterMarker_286() const { return ___k_HandleVisibleCharacterMarker_286; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVisibleCharacterMarker_286() { return &___k_HandleVisibleCharacterMarker_286; }
	inline void set_k_HandleVisibleCharacterMarker_286(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVisibleCharacterMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_287() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleWhiteSpacesMarker_287)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleWhiteSpacesMarker_287() const { return ___k_HandleWhiteSpacesMarker_287; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleWhiteSpacesMarker_287() { return &___k_HandleWhiteSpacesMarker_287; }
	inline void set_k_HandleWhiteSpacesMarker_287(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleWhiteSpacesMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_288() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleHorizontalLineBreakingMarker_288)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleHorizontalLineBreakingMarker_288() const { return ___k_HandleHorizontalLineBreakingMarker_288; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleHorizontalLineBreakingMarker_288() { return &___k_HandleHorizontalLineBreakingMarker_288; }
	inline void set_k_HandleHorizontalLineBreakingMarker_288(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleHorizontalLineBreakingMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_289() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleVerticalLineBreakingMarker_289)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVerticalLineBreakingMarker_289() const { return ___k_HandleVerticalLineBreakingMarker_289; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVerticalLineBreakingMarker_289() { return &___k_HandleVerticalLineBreakingMarker_289; }
	inline void set_k_HandleVerticalLineBreakingMarker_289(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVerticalLineBreakingMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_290() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SaveGlyphVertexDataMarker_290)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveGlyphVertexDataMarker_290() const { return ___k_SaveGlyphVertexDataMarker_290; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveGlyphVertexDataMarker_290() { return &___k_SaveGlyphVertexDataMarker_290; }
	inline void set_k_SaveGlyphVertexDataMarker_290(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveGlyphVertexDataMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_291() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ComputeCharacterAdvanceMarker_291)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeCharacterAdvanceMarker_291() const { return ___k_ComputeCharacterAdvanceMarker_291; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeCharacterAdvanceMarker_291() { return &___k_ComputeCharacterAdvanceMarker_291; }
	inline void set_k_ComputeCharacterAdvanceMarker_291(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeCharacterAdvanceMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_292() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleCarriageReturnMarker_292)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleCarriageReturnMarker_292() const { return ___k_HandleCarriageReturnMarker_292; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleCarriageReturnMarker_292() { return &___k_HandleCarriageReturnMarker_292; }
	inline void set_k_HandleCarriageReturnMarker_292(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleCarriageReturnMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_293() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleLineTerminationMarker_293)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleLineTerminationMarker_293() const { return ___k_HandleLineTerminationMarker_293; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleLineTerminationMarker_293() { return &___k_HandleLineTerminationMarker_293; }
	inline void set_k_HandleLineTerminationMarker_293(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleLineTerminationMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_294() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SavePageInfoMarker_294)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SavePageInfoMarker_294() const { return ___k_SavePageInfoMarker_294; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SavePageInfoMarker_294() { return &___k_SavePageInfoMarker_294; }
	inline void set_k_SavePageInfoMarker_294(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SavePageInfoMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_295() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SaveProcessingStatesMarker_295)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveProcessingStatesMarker_295() const { return ___k_SaveProcessingStatesMarker_295; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveProcessingStatesMarker_295() { return &___k_SaveProcessingStatesMarker_295; }
	inline void set_k_SaveProcessingStatesMarker_295(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveProcessingStatesMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_296() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIIMarker_296)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIMarker_296() const { return ___k_GenerateTextPhaseIIMarker_296; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIMarker_296() { return &___k_GenerateTextPhaseIIMarker_296; }
	inline void set_k_GenerateTextPhaseIIMarker_296(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIMarker_296 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_297() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIIIMarker_297)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIIMarker_297() const { return ___k_GenerateTextPhaseIIIMarker_297; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIIMarker_297() { return &___k_GenerateTextPhaseIIIMarker_297; }
	inline void set_k_GenerateTextPhaseIIIMarker_297(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIIMarker_297 = value;
	}
};


// TMPro.TextMeshPro

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  m_Items[1];

public:
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		m_Items[index] = value;
	}
};
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * m_Items[1];

public:
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m04C04217619DD00E64287A16CA56DBE59A246271_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mA22D38BA8CEC5CAFB66C54863AAC0B5B107C1064_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560  Dictionary_2_GetEnumerator_m00F4A556FA143CC9FDBCAB11B83E05B7A999E985_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  Enumerator_get_Current_m13C87D43591585C3B80D10B102956F7C6A840D63_gshared_inline (Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mA303B1837C6ACAE94F9D34E5735F20E4972AA39A_gshared_inline (KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8152DF4C3EFB24CE1CA7B29F096D90854B7E99BC_gshared (Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m98422AC17EF8F6E991401E4B17818AAC7B991FD9_gshared (Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9AE9EDA0BE57879D40EAE1FE24FF2F3782988CA5_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m033987CD900F5B1B506D7173E88F56508FCD2BBA_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m74B91FA8C557C84FB00E6AB017C2EB5EA45A9BB8_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5CBB3999EB5CEDF755977D334B6626BE8105DD4F_gshared (Dictionary_2_tC8A8AD7654C2C7CB786B34136FF9587ADD785D1A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_mCA081E2FE34A8282A0EA67091EF0E1702D1030F4_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void Bank::UpdateTMPText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_UpdateTMPText_m77A7D4FC7C375E12BD400376CFFDF210AD872FF9 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_m30D5BFC4824B78857BE4DCA90514A9DDDB076568 (int32_t ___value0, const RuntimeMethod* method);
// System.Void Bank::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_ReloadScene_mD8A037DA658921A8DD27DEB71F60C8723C73BB6B (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * Component_GetComponent_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m1FC2A769ED5E795761A417D332E40EB8398D7B44 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<GridManager>()
inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0 (const RuntimeMethod* method)
{
	return ((  GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void CoordinateLabeler::DisplayCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_DisplayCoordinates_mCD1E585387BD5FE3973EA3762D9B087FF0C6276D (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isBatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40 (const RuntimeMethod* method);
// System.Void CoordinateLabeler::UpdateObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_UpdateObjectName_mD049F9589EE4FD890F14898F77F37DDFDE5A72C2 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method);
// System.Void CoordinateLabeler::SetLabelColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_SetLabelColor_mB8C3EE43AADF9EB5FEABF355B591B570714981E3 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method);
// System.Void CoordinateLabeler::ToggleLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_ToggleLabels_mFF4A4CF2DC5B384B114C52D3CA53F846A1DE4E81 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Node GridManager::GetNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector2Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 GridManager::get_WorldGridSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_get_WorldGridSize_mD995D0948D17EADE7E6FA6A5530AB06025BDFAAA_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578 (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_mC7DF17400DA07010DDEAACD5551C7CF7A2A7C450 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_mF722D7BC5AEA4A29F875AE36F952E474E159181E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Bank>()
inline Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658 (const RuntimeMethod* method)
{
	return ((  Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Void Bank::Deposit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Deposit_m17022C0BA721AE696535B53337B1F3552EC1BBB0 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void Bank::WithDraw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_WithDraw_m2DC8A76C937978387012652BFD6F1720899AAF04 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, int32_t ___count0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void EnemyHealth::processHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_processHit_m05EA0B20908B43BE995E455F1C8D478489C0C7A3 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Enemy::RewardGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_RewardGold_m8EB039B974CCCE29505E682FAFFC07E3F34D8F6B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void EnemyMove::ReturnToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_ReturnToStart_mDFBF080B44377110ACB67147B46B9740A3E4A7C1 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method);
// System.Void EnemyMove::RecalculatePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_RecalculatePath_mD62BF37D7D64C5C3EBC3D423A0DCEBEB8F811C93 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, bool ___isLive0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Pathfinder>()
inline Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25 (const RuntimeMethod* method)
{
	return ((  Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// UnityEngine.Vector2Int GridManager::GetCoordinatesFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GridManager_GetCoordinatesFromPosition_m20EAE61F344A611F896E74516BA30311202A92E5 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2Int Pathfinder::get_StartCoordinates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Pathfinder_get_StartCoordinates_mE3AC0445592E12EA220DA882C47DB8C444398125_inline (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Node>::Clear()
inline void List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85 (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_GetNewPath_m3091A9FC513D3D84CC3CD47486E660845F5ED18B (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method);
// System.Collections.IEnumerator EnemyMove::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyMove_FollowPath_m628954BABDB772FAE763B78F53ADB773E7A92CCA (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Vector3 GridManager::GetPositionFromCoordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GridManager_GetPositionFromCoordinates_mAEE892A3338FB2720C20E0571E3233C716C1789B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void EnemyMove/<FollowPath>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__9__ctor_mDDE2A36C33478619D15E4113F6B2664A5EC16F9A (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Enemy::StealGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_StealGold_m69BB0EBD430774845B0D0651B73D894584E1B344 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Node>::.ctor()
inline void List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GridManager::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateGrid_m41B1CD1FAC491D85286530FC26E420D6ED2C1682 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , const RuntimeMethod*))Dictionary_2_ContainsKey_m04C04217619DD00E64287A16CA56DBE59A246271_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::get_Item(!0)
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , const RuntimeMethod*))Dictionary_2_get_Item_mA22D38BA8CEC5CAFB66C54863AAC0B5B107C1064_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::GetEnumerator()
inline Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85  Dictionary_2_GetEnumerator_mE38350112C2FC866C75F39F216B7F1A33984F23D (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85  (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m00F4A556FA143CC9FDBCAB11B83E05B7A999E985_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::get_Current()
inline KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  Enumerator_get_Current_m702FD1A0CF04C5B6851043E39C8F5B9BC4908F52_inline (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  (*) (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *, const RuntimeMethod*))Enumerator_get_Current_m13C87D43591585C3B80D10B102956F7C6A840D63_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>::get_Value()
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_inline (KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 * __this, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mA303B1837C6ACAE94F9D34E5735F20E4972AA39A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::MoveNext()
inline bool Enumerator_MoveNext_mAA2684D873EBFD0E98D6E59097C52E0F4AE16D85 (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *, const RuntimeMethod*))Enumerator_MoveNext_m8152DF4C3EFB24CE1CA7B29F096D90854B7E99BC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::Dispose()
inline void Enumerator_Dispose_m529959986F8200786472A7221FAD2A177BDFFA9A (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *, const RuntimeMethod*))Enumerator_Dispose_m98422AC17EF8F6E991401E4B17818AAC7B991FD9_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879 (String_t* ___name0, const RuntimeMethod* method);
// System.Void Node::.ctor(UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mCA5882EA4609FB1FA4451117763E2D47B318BB94 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, bool ___isWalkable1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::Add(!0,!1)
inline void Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16 (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___key0, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *, const RuntimeMethod*))Dictionary_2_Add_m9AE9EDA0BE57879D40EAE1FE24FF2F3782988CA5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::.ctor()
inline void Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, const RuntimeMethod*))Dictionary_2__ctor_m033987CD900F5B1B506D7173E88F56508FCD2BBA_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ObjectPool::PupolatePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_PupolatePool_m7E6DF10D0F0E4793FC6DB6B26A4566273CC9703C (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ObjectPool::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_SpawnEnemy_m9CCA90B3EF342B2F1F94856CDE5DC88EC501BBDE (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m74B91FA8C557C84FB00E6AB017C2EB5EA45A9BB8_gshared)(___original0, ___parent1, method);
}
// System.Void ObjectPool/<SpawnEnemy>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__7__ctor_mAD41F65883CCD858CDDE4B8C28FDAC4F047F127D (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::get_Grid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * GridManager_get_Grid_m25D670FC6471B21D49A29722DA6346552734423A_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_GetNewPath_m38B6C94CC1DF2C4BE5E5F6F34AC254AE6B7655B1 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method);
// System.Void GridManager::RestNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_RestNodes_m09DA128F518BFADC1C074C7D07977259DCE5E1F5 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void Pathfinder::BreadthFirstSearch(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_BreadthFirstSearch_m4C106F8E966352FBA0E504FDB1E84D50B73E55D2 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Node> Pathfinder::BuildPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_BuildPath_m6AEBB3C6CB75957358B051882F479B3101FEBC6E (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Addition(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Addition_m510CEFEECE70D653E9E414FFE1446A57D0FF2B73_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Node>::Contains(!0)
inline bool List_1_Contains_m45509418B129B5E99060F1F6B34F12D1D0AB9177 (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Add(!0)
inline void List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7 (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Node>::GetEnumerator()
inline Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Node>::get_Current()
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Node>::Enqueue(!0)
inline void Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58 (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * __this, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Node>::MoveNext()
inline bool Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Node>::Dispose()
inline void Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320 (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Node>::Clear()
inline void Queue_1_Clear_m97BFD8E82652F4A3D2A6A6CB2D821955F227ECCD (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::Clear()
inline void Dictionary_2_Clear_mBD10DDD819EFDAD884781D85B3768AC482743B59 (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *, const RuntimeMethod*))Dictionary_2_Clear_m5CBB3999EB5CEDF755977D334B6626BE8105DD4F_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<Node>::Dequeue()
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Queue_1_Dequeue_m551D0D668FCEB84413B395ED194ACF37B3B05D78 (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * __this, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void Pathfinder::ExploreNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_ExploreNeighbors_mD01AC339AB857DE09B0B594A7167ED6CC261FFF1 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::op_Equality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m85A26114DF593BB5684C2C960949690733D89D26_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Node>::get_Count()
inline int32_t Queue_1_get_Count_m5B5AEE902BF69E7F646DAD780241D160392895A5_inline (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Reverse()
inline void List_1_Reverse_mC0616ED21E2B42553B9EA3E3897363B14D996B7D (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Node>::get_Count()
inline int32_t List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_inline (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___methodName0, RuntimeObject * ___parameter1, int32_t ___options2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Node>::.ctor()
inline void Queue_1__ctor_m120E5F946E1B3A0ECDBDA8052888CC6BDF7BE0B3 (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_right_m600DF543E4C545EFEB898DE5C538543115B30E77 (const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_left_m37F73E7D89D4354BE16787B2B29C1AC836DAF36A (const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_up_m53656FA1985E3C13F04BC0121168B494545983E1 (const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_down_m9DD5E4EC9D158A90B74EF9165325C5E25BD9A47B (const RuntimeMethod* method);
// System.Void TargetLocator::FindClosestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_FindClosestTarget_m00832B8999B93127477F013E969D948120495E9C (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method);
// System.Void TargetLocator::AimWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_AimWeapon_m0566ACEA95083B1BF1FAD572EEADAB8E9F79419E (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Enemy>()
inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m61F416478BC0E9743700C8CB3EA92717511EFDC7 (const RuntimeMethod* method)
{
	return ((  EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mCA081E2FE34A8282A0EA67091EF0E1702D1030F4_gshared)(method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void TargetLocator::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Attack_mB95D4721F22E38785594E07E5EBDBF97654BCFCE (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, bool ___isActive0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GridManager::BlockNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_BlockNode_m167314E0539F68EC9AD315AC107C5A2A81B7D668 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinate0, const RuntimeMethod* method);
// System.Boolean Pathfinder::WillBlockPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinder_WillBlockPath_m944B397F7040D2E8D2559F460541D27C729B4167 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method);
// System.Boolean Tower::CreatTower(Tower,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tower_CreatTower_m72FA407A893EBF593DC0C5F23BC2CBDCA776C666 (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * ___tower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void Pathfinder::NotifyReceivers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_NotifyReceivers_m7833DF36FB61C4A3EBAC3B779C2034C714034011 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Tower::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_Build_m0817FD0BA86CE5B3675C3D1A59BF0498FDEEA356 (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, const RuntimeMethod* method);
// System.Void Tower/<Build>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3__ctor_m456E4B67CC640BEBB6AA967599B520B3365A2C9F (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 Bank::get_CurrentBalance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_mCFED77ADEE8806D83788D10074328091586211BF_inline (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared)(___original0, ___position1, ___rotation2, method);
}
// !0 System.Collections.Generic.List`1<Node>::get_Item(System.Int32)
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * List_1_get_Item_mE9988BAF9B7CD5EC8586D90E7B5A45EFC0A3D3AB_inline (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void EnemyMove::FinishPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_FinishPath_m54BB681E17D7EDF7CBA87D41CD6247DCFDD576F7 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void ObjectPool::EnableObjectInPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_EnableObjectInPool_mB3D30A7BADB78115473B8921A0A7C5B60029B1C6 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Tower/<Build>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3_U3CU3Em__Finally1_mBE54E5F047C2DED4146B459131FE1C08D94FABE9 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Tower/<Build>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3_System_IDisposable_Dispose_mC7DB98B88A5FE75AD7D33735E39373D21BA82B12 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Int32 Bank::get_CurrentBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_mCFED77ADEE8806D83788D10074328091586211BF (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentBalance{get {return currentBalance;}}
		int32_t L_0 = __this->get_currentBalance_5();
		return L_0;
	}
}
// System.Void Bank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Start_mB9AEBB1494762D2E28E215BAC8C66DCB3E862AE2 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	{
		// currentBalance = startBalance;
		int32_t L_0 = __this->get_startBalance_4();
		__this->set_currentBalance_5(L_0);
		// UpdateTMPText();
		Bank_UpdateTMPText_m77A7D4FC7C375E12BD400376CFFDF210AD872FF9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bank::Deposit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Deposit_m17022C0BA721AE696535B53337B1F3552EC1BBB0 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		// currentBalance += Mathf.Abs(count);
		int32_t L_0 = __this->get_currentBalance_5();
		int32_t L_1 = ___count0;
		int32_t L_2;
		L_2 = Mathf_Abs_m30D5BFC4824B78857BE4DCA90514A9DDDB076568(L_1, /*hidden argument*/NULL);
		__this->set_currentBalance_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_2)));
		// UpdateTMPText();
		Bank_UpdateTMPText_m77A7D4FC7C375E12BD400376CFFDF210AD872FF9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bank::WithDraw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_WithDraw_m2DC8A76C937978387012652BFD6F1720899AAF04 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		// currentBalance -= Mathf.Abs(count);
		int32_t L_0 = __this->get_currentBalance_5();
		int32_t L_1 = ___count0;
		int32_t L_2;
		L_2 = Mathf_Abs_m30D5BFC4824B78857BE4DCA90514A9DDDB076568(L_1, /*hidden argument*/NULL);
		__this->set_currentBalance_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2)));
		// if (currentBalance < 0) {
		int32_t L_3 = __this->get_currentBalance_5();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// ReloadScene();
		Bank_ReloadScene_mD8A037DA658921A8DD27DEB71F60C8723C73BB6B(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// UpdateTMPText();
		Bank_UpdateTMPText_m77A7D4FC7C375E12BD400376CFFDF210AD872FF9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bank::UpdateTMPText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_UpdateTMPText_m77A7D4FC7C375E12BD400376CFFDF210AD872FF9 (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tmpText.text = "Gold: " + currentBalance;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_0 = __this->get_tmpText_6();
		int32_t* L_1 = __this->get_address_of_currentBalance_5();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Bank::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_ReloadScene_mD8A037DA658921A8DD27DEB71F60C8723C73BB6B (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Scene activeScene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B(/*hidden argument*/NULL);
		V_0 = L_0;
		// SceneManager.LoadScene(activeScene.buildIndex);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank__ctor_mEF17BA43618A862E2770308098745229FC12669A (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int startBalance = 150;
		__this->set_startBalance_4(((int32_t)150));
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
// System.Void CoordinateLabeler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_Awake_m55EFD6C068D2A86483CB8D4E392774F941ED2F12 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m1FC2A769ED5E795761A417D332E40EB8398D7B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// label = GetComponent<TextMeshPro>();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_0;
		L_0 = Component_GetComponent_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m1FC2A769ED5E795761A417D332E40EB8398D7B44(__this, /*hidden argument*/Component_GetComponent_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m1FC2A769ED5E795761A417D332E40EB8398D7B44_RuntimeMethod_var);
		__this->set_label_8(L_0);
		// gridManager = FindObjectOfType<GridManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1;
		L_1 = Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0(/*hidden argument*/Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		__this->set_gridManager_10(L_1);
		// label.enabled = true;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_2 = __this->get_label_8();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// DisplayCoordinates();
		CoordinateLabeler_DisplayCoordinates_mCD1E585387BD5FE3973EA3762D9B087FF0C6276D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoordinateLabeler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_Update_m4EBCC68D32B0E3BEFD1FD3FC24D8B1DD39F5E8A2 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	{
		// if (!Application.isBatchMode) {
		bool L_0;
		L_0 = Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DisplayCoordinates();
		CoordinateLabeler_DisplayCoordinates_mCD1E585387BD5FE3973EA3762D9B087FF0C6276D(__this, /*hidden argument*/NULL);
		// UpdateObjectName();
		CoordinateLabeler_UpdateObjectName_mD049F9589EE4FD890F14898F77F37DDFDE5A72C2(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// SetLabelColor();
		CoordinateLabeler_SetLabelColor_mB8C3EE43AADF9EB5FEABF355B591B570714981E3(__this, /*hidden argument*/NULL);
		// ToggleLabels();
		CoordinateLabeler_ToggleLabels_mFF4A4CF2DC5B384B114C52D3CA53F846A1DE4E81(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoordinateLabeler::ToggleLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_ToggleLabels_mFF4A4CF2DC5B384B114C52D3CA53F846A1DE4E81 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyDown(KeyCode.C)) {
		bool L_0;
		L_0 = Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC(((int32_t)99), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// label.enabled = !label.IsActive();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_1 = __this->get_label_8();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_2 = __this->get_label_8();
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CoordinateLabeler::SetLabelColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_SetLabelColor_mB8C3EE43AADF9EB5FEABF355B591B570714981E3 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_0 = NULL;
	{
		// if (gridManager == null) return;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_gridManager_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (gridManager == null) return;
		return;
	}

IL_000f:
	{
		// Node node = gridManager.GetNode(coordinates);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_2 = __this->get_gridManager_10();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3 = __this->get_coordinates_9();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_4;
		L_4 = GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (node == null) return;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// if (node == null) return;
		return;
	}

IL_0025:
	{
		// if(!node.isWalkable) {
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_6 = V_0;
		bool L_7 = L_6->get_isWalkable_1();
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// label.color = blockedColor;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_8 = __this->get_label_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get_blockedColor_5();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }else if(node.isPath) {
		return;
	}

IL_003f:
	{
		// }else if(node.isPath) {
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_10 = V_0;
		bool L_11 = L_10->get_isPath_3();
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// label.color = pathColor;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_12 = __this->get_label_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = __this->get_pathColor_7();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// }else if(node.isExplored) {
		return;
	}

IL_0059:
	{
		// }else if(node.isExplored) {
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_14 = V_0;
		bool L_15 = L_14->get_isExplored_2();
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		// label.color = exporedColor;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_16 = __this->get_label_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = __this->get_exporedColor_6();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// }else {
		return;
	}

IL_0073:
	{
		// label.color = defaultColor;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_18 = __this->get_label_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = __this->get_defaultColor_4();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// }
		return;
	}
}
// System.Void CoordinateLabeler::UpdateObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_UpdateObjectName_mD049F9589EE4FD890F14898F77F37DDFDE5A72C2 (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	{
		// transform.parent.name = coordinates.ToString();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = __this->get_address_of_coordinates_9();
		String_t* L_3;
		L_3 = Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoordinateLabeler::DisplayCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler_DisplayCoordinates_mCD1E585387BD5FE3973EA3762D9B087FF0C6276D (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (gridManager == null) return;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_gridManager_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (gridManager == null) return;
		return;
	}

IL_000f:
	{
		// coordinates.x = Mathf.RoundToInt(transform.parent.position.x / gridManager.WorldGridSize);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = __this->get_address_of_coordinates_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_7 = __this->get_gridManager_10();
		int32_t L_8;
		L_8 = GridManager_get_WorldGridSize_mD995D0948D17EADE7E6FA6A5530AB06025BDFAAA_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)L_6/(float)((float)((float)L_8)))), /*hidden argument*/NULL);
		Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, L_9, /*hidden argument*/NULL);
		// coordinates.y = Mathf.RoundToInt(transform.parent.position.z / gridManager.WorldGridSize);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_10 = __this->get_address_of_coordinates_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_15 = __this->get_gridManager_10();
		int32_t L_16;
		L_16 = GridManager_get_WorldGridSize_mD995D0948D17EADE7E6FA6A5530AB06025BDFAAA_inline(L_15, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)L_14/(float)((float)((float)L_16)))), /*hidden argument*/NULL);
		Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_10, L_17, /*hidden argument*/NULL);
		// label.text = coordinates.x + "," + coordinates.y;
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_18 = __this->get_label_8();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_19 = __this->get_address_of_coordinates_9();
		int32_t L_20;
		L_20 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_22 = __this->get_address_of_coordinates_9();
		int32_t L_23;
		L_23 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_21, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_24, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_25);
		// }
		return;
	}
}
// System.Void CoordinateLabeler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateLabeler__ctor_mB193894A7073686FD757D2BC79FAEFB03E3A8D0C (CoordinateLabeler_tBC26E02FE82A51907AB70C7DFE554D245AE8653C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] Color defaultColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		__this->set_defaultColor_4(L_0);
		// [SerializeField] Color blockedColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gray_mC7DF17400DA07010DDEAACD5551C7CF7A2A7C450(/*hidden argument*/NULL);
		__this->set_blockedColor_5(L_1);
		// [SerializeField] Color exporedColor = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_yellow_mF722D7BC5AEA4A29F875AE36F952E474E159181E(/*hidden argument*/NULL);
		__this->set_exporedColor_6(L_2);
		// [SerializeField] Color pathColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140(/*hidden argument*/NULL);
		__this->set_pathColor_7(L_3);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bank = FindObjectOfType<Bank>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_0;
		L_0 = Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658(/*hidden argument*/Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658_RuntimeMethod_var);
		__this->set_bank_6(L_0);
		// }
		return;
	}
}
// System.Void Enemy::RewardGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_RewardGold_m8EB039B974CCCE29505E682FAFFC07E3F34D8F6B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bank == null) return;
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_0 = __this->get_bank_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (bank == null) return;
		return;
	}

IL_000f:
	{
		// bank.Deposit(goladReward);
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_2 = __this->get_bank_6();
		int32_t L_3 = __this->get_goladReward_4();
		Bank_Deposit_m17022C0BA721AE696535B53337B1F3552EC1BBB0(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::StealGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_StealGold_m69BB0EBD430774845B0D0651B73D894584E1B344 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bank == null) return;
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_0 = __this->get_bank_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (bank == null) return;
		return;
	}

IL_000f:
	{
		// bank.WithDraw(goladPenalty);
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_2 = __this->get_bank_6();
		int32_t L_3 = __this->get_goladPenalty_5();
		Bank_WithDraw_m2DC8A76C937978387012652BFD6F1720899AAF04(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int goladReward = 25;
		__this->set_goladReward_4(((int32_t)25));
		// [SerializeField] int goladPenalty = 25;
		__this->set_goladPenalty_5(((int32_t)25));
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
// System.Void EnemyHealth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_OnEnable_m422C45003C1E4868A87F84E52A2B6662DF4DE153 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		// currentHitPoints = maxHitPoints;
		int32_t L_0 = __this->get_maxHitPoints_4();
		__this->set_currentHitPoints_6(L_0);
		// }
		return;
	}
}
// System.Void EnemyHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Start_mD01F3D64A408764E38262C86167BA12B65D4A5D7 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy = GetComponent<Enemy>();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_0;
		L_0 = Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005(__this, /*hidden argument*/Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var);
		__this->set_enemy_7(L_0);
		// }
		return;
	}
}
// System.Void EnemyHealth::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_OnParticleCollision_m971A0937E91261A789F2FC4DEC0C85531EBB31C9 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___other0, const RuntimeMethod* method)
{
	{
		// processHit();
		EnemyHealth_processHit_m05EA0B20908B43BE995E455F1C8D478489C0C7A3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyHealth::processHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_processHit_m05EA0B20908B43BE995E455F1C8D478489C0C7A3 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		// currentHitPoints--;
		int32_t L_0 = __this->get_currentHitPoints_6();
		__this->set_currentHitPoints_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if(currentHitPoints <= 0) {
		int32_t L_1 = __this->get_currentHitPoints_6();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// maxHitPoints += difficultyRamp;
		int32_t L_2 = __this->get_maxHitPoints_4();
		int32_t L_3 = __this->get_difficultyRamp_5();
		__this->set_maxHitPoints_4(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// enemy.RewardGold();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_5 = __this->get_enemy_7();
		Enemy_RewardGold_m8EB039B974CCCE29505E682FAFFC07E3F34D8F6B(L_5, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_mF9FFC7A91A2AB12182655557BC05309E64E17AFE (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int maxHitPoints = 5;
		__this->set_maxHitPoints_4(5);
		// [SerializeField] int difficultyRamp = 1;
		__this->set_difficultyRamp_5(1);
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
// System.Void EnemyMove::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_OnEnable_m6A422F91A4A52CDBCF21C7799CE4555D62B554B9 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	{
		// ReturnToStart();
		EnemyMove_ReturnToStart_mDFBF080B44377110ACB67147B46B9740A3E4A7C1(__this, /*hidden argument*/NULL);
		// RecalculatePath(true);
		EnemyMove_RecalculatePath_mD62BF37D7D64C5C3EBC3D423A0DCEBEB8F811C93(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_Awake_mEA375558BFB8943C620B7EB65F21DFEAB7349987 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy = GetComponent<Enemy>();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_0;
		L_0 = Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005(__this, /*hidden argument*/Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var);
		__this->set_enemy_6(L_0);
		// pathfinder = FindObjectOfType<Pathfinder>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_1;
		L_1 = Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25(/*hidden argument*/Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25_RuntimeMethod_var);
		__this->set_pathfinder_7(L_1);
		// gridManager = FindObjectOfType<GridManager>();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_2;
		L_2 = Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0(/*hidden argument*/Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		__this->set_gridManager_8(L_2);
		// }
		return;
	}
}
// System.Void EnemyMove::RecalculatePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_RecalculatePath_mD62BF37D7D64C5C3EBC3D423A0DCEBEB8F811C93 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, bool ___isLive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector2Int coordinates = new Vector2Int();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 ));
		// coordinates = isLive ? pathfinder.StartCoordinates : gridManager.GetCoordinatesFromPosition(transform.position);
		bool L_0 = ___isLive0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_gridManager_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = GridManager_GetCoordinatesFromPosition_m20EAE61F344A611F896E74516BA30311202A92E5(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_002e;
	}

IL_0023:
	{
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_5 = __this->get_pathfinder_7();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		L_6 = Pathfinder_get_StartCoordinates_mE3AC0445592E12EA220DA882C47DB8C444398125_inline(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002e:
	{
		V_0 = G_B3_0;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// paths.Clear();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_7 = __this->get_paths_5();
		List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85(L_7, /*hidden argument*/List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var);
		// paths = pathfinder.GetNewPath(coordinates);
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_8 = __this->get_pathfinder_7();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9 = V_0;
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_10;
		L_10 = Pathfinder_GetNewPath_m3091A9FC513D3D84CC3CD47486E660845F5ED18B(L_8, L_9, /*hidden argument*/NULL);
		__this->set_paths_5(L_10);
		// StartCoroutine(FollowPath());
		RuntimeObject* L_11;
		L_11 = EnemyMove_FollowPath_m628954BABDB772FAE763B78F53ADB773E7A92CCA(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyMove::ReturnToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_ReturnToStart_mDFBF080B44377110ACB67147B46B9740A3E4A7C1 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	{
		// transform.position = gridManager.GetPositionFromCoordinates(pathfinder.StartCoordinates);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_gridManager_8();
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_2 = __this->get_pathfinder_7();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = Pathfinder_get_StartCoordinates_mE3AC0445592E12EA220DA882C47DB8C444398125_inline(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = GridManager_GetPositionFromCoordinates_mAEE892A3338FB2720C20E0571E3233C716C1789B(L_1, L_3, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyMove::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyMove_FollowPath_m628954BABDB772FAE763B78F53ADB773E7A92CCA (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * L_0 = (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 *)il2cpp_codegen_object_new(U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537_il2cpp_TypeInfo_var);
		U3CFollowPathU3Ed__9__ctor_mDDE2A36C33478619D15E4113F6B2664A5EC16F9A(L_0, 0, /*hidden argument*/NULL);
		U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnemyMove::FinishPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_FinishPath_m54BB681E17D7EDF7CBA87D41CD6247DCFDD576F7 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	{
		// enemy.StealGold();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_0 = __this->get_enemy_6();
		Enemy_StealGold_m69BB0EBD430774845B0D0651B73D894584E1B344(L_0, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove__ctor_m5CEF0CB3332C23AD045BEE59799342D6F3C94097 (EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] [Range(0f, 5f)] float speed = 1f;
		__this->set_speed_4((1.0f));
		// List<Node> paths = new List<Node>();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_0 = (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *)il2cpp_codegen_object_new(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F(L_0, /*hidden argument*/List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		__this->set_paths_5(L_0);
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
// System.Int32 GridManager::get_WorldGridSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_get_WorldGridSize_mD995D0948D17EADE7E6FA6A5530AB06025BDFAAA (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int WorldGridSize { get { return worldGridSize;}}
		int32_t L_0 = __this->get_worldGridSize_6();
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::get_Grid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * GridManager_get_Grid_m25D670FC6471B21D49A29722DA6346552734423A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<Vector2Int, Node> Grid{get{return grid;}}
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_5();
		return L_0;
	}
}
// System.Void GridManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Awake_m66D707CD8B7EEDA5C04ED846D28E425136A53678 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// CreateGrid();
		GridManager_CreateGrid_m41B1CD1FAC491D85286530FC26E420D6ED2C1682(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::BlockNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_BlockNode_m167314E0539F68EC9AD315AC107C5A2A81B7D668 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(grid.ContainsKey(coordinate)) {
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___coordinate0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// grid[coordinate].isWalkable = false;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_3 = __this->get_grid_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4 = ___coordinate0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		L_5->set_isWalkable_1((bool)0);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void GridManager::RestNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_RestNodes_m09DA128F518BFADC1C074C7D07977259DCE5E1F5 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE38350112C2FC866C75F39F216B7F1A33984F23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m529959986F8200786472A7221FAD2A177BDFFA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA2684D873EBFD0E98D6E59097C52E0F4AE16D85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m702FD1A0CF04C5B6851043E39C8F5B9BC4908F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(KeyValuePair<Vector2Int, Node> kv in grid) {
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_5();
		Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85  L_1;
		L_1 = Dictionary_2_GetEnumerator_mE38350112C2FC866C75F39F216B7F1A33984F23D(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mE38350112C2FC866C75F39F216B7F1A33984F23D_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_000e:
		{
			// foreach(KeyValuePair<Vector2Int, Node> kv in grid) {
			KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512  L_2;
			L_2 = Enumerator_get_Current_m702FD1A0CF04C5B6851043E39C8F5B9BC4908F52_inline((Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m702FD1A0CF04C5B6851043E39C8F5B9BC4908F52_RuntimeMethod_var);
			V_1 = L_2;
			// kv.Value.connectedTo = null;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_3;
			L_3 = KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_inline((KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_RuntimeMethod_var);
			L_3->set_connectedTo_4((Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *)NULL);
			// kv.Value.isExplored = false;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_4;
			L_4 = KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_inline((KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_RuntimeMethod_var);
			L_4->set_isExplored_2((bool)0);
			// kv.Value.isPath = false;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
			L_5 = KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_inline((KeyValuePair_2_tA407035317B0B6FA0A912A9344C5FA39CA6EA512 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m6E766DD2DCE69E41F590360B4BE567948EB33867_RuntimeMethod_var);
			L_5->set_isPath_3((bool)0);
		}

IL_003d:
		{
			// foreach(KeyValuePair<Vector2Int, Node> kv in grid) {
			bool L_6;
			L_6 = Enumerator_MoveNext_mAA2684D873EBFD0E98D6E59097C52E0F4AE16D85((Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAA2684D873EBFD0E98D6E59097C52E0F4AE16D85_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m529959986F8200786472A7221FAD2A177BDFFA9A((Enumerator_tA52F7AA2D1CED5574982B33CE5628F24CB61BC85 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m529959986F8200786472A7221FAD2A177BDFFA9A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int GridManager::GetCoordinatesFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GridManager_GetCoordinatesFromPosition_m20EAE61F344A611F896E74516BA30311202A92E5 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int coordinate = new Vector2Int();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 ));
		// coordinate.x = Mathf.RoundToInt(position.x / worldGridSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		float L_1 = L_0.get_x_2();
		int32_t L_2 = __this->get_worldGridSize_6();
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)L_1/(float)((float)((float)L_2)))), /*hidden argument*/NULL);
		Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_0), L_3, /*hidden argument*/NULL);
		// coordinate.y = Mathf.RoundToInt(position.z / worldGridSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		float L_5 = L_4.get_z_4();
		int32_t L_6 = __this->get_worldGridSize_6();
		int32_t L_7;
		L_7 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)L_5/(float)((float)((float)L_6)))), /*hidden argument*/NULL);
		Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_0), L_7, /*hidden argument*/NULL);
		// return coordinate;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 GridManager::GetPositionFromCoordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GridManager_GetPositionFromCoordinates_mAEE892A3338FB2720C20E0571E3233C716C1789B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// position.x = coordinates.x * worldGridSize;
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___coordinates0), /*hidden argument*/NULL);
		int32_t L_1 = __this->get_worldGridSize_6();
		(&V_0)->set_x_2(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))));
		// position.z = coordinates.y * worldGridSize;
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___coordinates0), /*hidden argument*/NULL);
		int32_t L_3 = __this->get_worldGridSize_6();
		(&V_0)->set_z_4(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)))));
		// return position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		return L_4;
	}
}
// Node GridManager::GetNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(grid.ContainsKey(coordinates)) {
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___coordinates0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return grid[coordinates];
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_3 = __this->get_grid_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *)NULL;
	}
}
// System.Void GridManager::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateGrid_m41B1CD1FAC491D85286530FC26E420D6ED2C1682 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for(int x = 0; x < gridSize.x; x++) {
		V_0 = 0;
		goto IL_005d;
	}

IL_0004:
	{
		// for(int y = 0; y < gridSize.y; y++) {
		V_1 = 0;
		goto IL_004b;
	}

IL_0008:
	{
		// Vector2Int coordinates = new Vector2Int(x, y);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), L_0, L_1, /*hidden argument*/NULL);
		// string name = $"({x}, {y})";
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_4, L_7, /*hidden argument*/NULL);
		// if(GameObject.Find(name) == null) continue;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		// grid.Add(coordinates, new Node(coordinates, true));
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_11 = __this->get_grid_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12 = V_2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13 = V_2;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_14 = (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *)il2cpp_codegen_object_new(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var);
		Node__ctor_mCA5882EA4609FB1FA4451117763E2D47B318BB94(L_14, L_13, (bool)1, /*hidden argument*/NULL);
		Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16(L_11, L_12, L_14, /*hidden argument*/Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
	}

IL_0047:
	{
		// for(int y = 0; y < gridSize.y; y++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004b:
	{
		// for(int y = 0; y < gridSize.y; y++) {
		int32_t L_16 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_17 = __this->get_address_of_gridSize_4();
		int32_t L_18;
		L_18 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		// for(int x = 0; x < gridSize.x; x++) {
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005d:
	{
		// for(int x = 0; x < gridSize.x; x++) {
		int32_t L_20 = V_0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_21 = __this->get_address_of_gridSize_4();
		int32_t L_22;
		L_22 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__ctor_mA0C5D0BA6335DF2309495BC6F90061C3D82365FD (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *)il2cpp_codegen_object_new(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B(L_0, /*hidden argument*/Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var);
		__this->set_grid_5(L_0);
		// [SerializeField] int worldGridSize = 10;
		__this->set_worldGridSize_6(((int32_t)10));
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
// System.Void Node::.ctor(UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mCA5882EA4609FB1FA4451117763E2D47B318BB94 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, bool ___isWalkable1, const RuntimeMethod* method)
{
	{
		// public Node(Vector2Int coordinates, bool isWalkable) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.coordinates = coordinates;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___coordinates0;
		__this->set_coordinates_0(L_0);
		// this.isWalkable = isWalkable;
		bool L_1 = ___isWalkable1;
		__this->set_isWalkable_1(L_1);
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
// System.Void ObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Awake_mF0E1BB227FFCA63FFB34326293803D5C56046B4F (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	{
		// PupolatePool();
		ObjectPool_PupolatePool_m7E6DF10D0F0E4793FC6DB6B26A4566273CC9703C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Start_mCE3FE3D87EB7BF7ABD6DDAA78C2057F30AF5A2C1 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(SpawnEnemy());
		RuntimeObject* L_0;
		L_0 = ObjectPool_SpawnEnemy_m9CCA90B3EF342B2F1F94856CDE5DC88EC501BBDE(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectPool::PupolatePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_PupolatePool_m7E6DF10D0F0E4793FC6DB6B26A4566273CC9703C (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pool = new GameObject[poolSize];
		int32_t L_0 = __this->get_poolSize_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_pool_7(L_1);
		// for(int i = 0; i < poolSize; i++) {
		V_0 = 0;
		goto IL_0040;
	}

IL_0015:
	{
		// pool[i] = Instantiate(enemy, transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_pool_7();
		int32_t L_3 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_enemy_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E(L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		// pool[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_pool_7();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < poolSize; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0040:
	{
		// for(int i = 0; i < poolSize; i++) {
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_poolSize_6();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectPool::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_SpawnEnemy_m9CCA90B3EF342B2F1F94856CDE5DC88EC501BBDE (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * L_0 = (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D *)il2cpp_codegen_object_new(U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D_il2cpp_TypeInfo_var);
		U3CSpawnEnemyU3Ed__7__ctor_mAD41F65883CCD858CDDE4B8C28FDAC4F047F127D(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ObjectPool::EnableObjectInPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_EnableObjectInPool_mB3D30A7BADB78115473B8921A0A7C5B60029B1C6 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// foreach(GameObject enemy in pool) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_pool_7();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// foreach(GameObject enemy in pool) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if(!enemy.activeInHierarchy) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		bool L_6;
		L_6 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001f;
		}
	}
	{
		// enemy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001f:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		// foreach(GameObject enemy in pool) {
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m238AC3CF5FD237B72A4D1A0595E92AB4DC48454F (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] [Range(0.1f, 30f)] float spawnTime = 3f;
		__this->set_spawnTime_5((3.0f));
		// [SerializeField] [Range(0, 50)] int poolSize = 5;
		__this->set_poolSize_6(5);
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
// UnityEngine.Vector2Int Pathfinder::get_StartCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Pathfinder_get_StartCoordinates_mE3AC0445592E12EA220DA882C47DB8C444398125 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int StartCoordinates { get { return startCoordinates;}}
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_startCoordinates_4();
		return L_0;
	}
}
// UnityEngine.Vector2Int Pathfinder::get_DestinationCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Pathfinder_get_DestinationCoordinates_m9B3C31FA1BDC9B98C2FE0CC5C319F63E39403EC0 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int DestinationCoordinates { get { return destinationCoordinates;}}
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_destinationCoordinates_5();
		return L_0;
	}
}
// System.Void Pathfinder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Awake_m85400EB1D7452202CCC7A78F86FEBB4749BA5845 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridManager = FindObjectOfType<GridManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0;
		L_0 = Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0(/*hidden argument*/Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		__this->set_gridManager_12(L_0);
		// if(gridManager != null) {
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_gridManager_12();
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// grid = gridManager.Grid;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_3 = __this->get_gridManager_12();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_4;
		L_4 = GridManager_get_Grid_m25D670FC6471B21D49A29722DA6346552734423A_inline(L_3, /*hidden argument*/NULL);
		__this->set_grid_13(L_4);
		// startNode = gridManager.GetNode(startCoordinates);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_5 = __this->get_gridManager_12();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6 = __this->get_startCoordinates_4();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_7;
		L_7 = GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60(L_5, L_6, /*hidden argument*/NULL);
		__this->set_startNode_6(L_7);
		// destinationNode = gridManager.GetNode(destinationCoordinates);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_8 = __this->get_gridManager_12();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9 = __this->get_destinationCoordinates_5();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_10;
		L_10 = GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60(L_8, L_9, /*hidden argument*/NULL);
		__this->set_destinationNode_7(L_10);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Pathfinder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Start_m42C4252FDE5B1DAA170D16A97659F22DC0EEDED6 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	{
		// GetNewPath();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_0;
		L_0 = Pathfinder_GetNewPath_m38B6C94CC1DF2C4BE5E5F6F34AC254AE6B7655B1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_GetNewPath_m38B6C94CC1DF2C4BE5E5F6F34AC254AE6B7655B1 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	{
		// return GetNewPath(startCoordinates);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_startCoordinates_4();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_1;
		L_1 = Pathfinder_GetNewPath_m3091A9FC513D3D84CC3CD47486E660845F5ED18B(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_GetNewPath_m3091A9FC513D3D84CC3CD47486E660845F5ED18B (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method)
{
	{
		// gridManager.RestNodes();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_gridManager_12();
		GridManager_RestNodes_m09DA128F518BFADC1C074C7D07977259DCE5E1F5(L_0, /*hidden argument*/NULL);
		// BreadthFirstSearch(coordinates);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___coordinates0;
		Pathfinder_BreadthFirstSearch_m4C106F8E966352FBA0E504FDB1E84D50B73E55D2(__this, L_1, /*hidden argument*/NULL);
		// return BuildPath();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_2;
		L_2 = Pathfinder_BuildPath_m6AEBB3C6CB75957358B051882F479B3101FEBC6E(__this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Pathfinder::ExploreNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_ExploreNeighbors_mD01AC339AB857DE09B0B594A7167ED6CC261FFF1 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m45509418B129B5E99060F1F6B34F12D1D0AB9177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * V_0 = NULL;
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* V_1 = NULL;
	int32_t V_2 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Node> neighbors = new List<Node>();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_0 = (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *)il2cpp_codegen_object_new(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F(L_0, /*hidden argument*/List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		V_0 = L_0;
		// foreach(Vector2Int v2 in directions) {
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_1 = __this->get_directions_11();
		V_1 = L_1;
		V_2 = 0;
		goto IL_0067;
	}

IL_0011:
	{
		// foreach(Vector2Int v2 in directions) {
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// Vector2Int nextVector = currentSearchNode.coordinates + v2;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_6 = __this->get_currentSearchNode_8();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = L_6->get_coordinates_0();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8 = V_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9;
		L_9 = Vector2Int_op_Addition_m510CEFEECE70D653E9E414FFE1446A57D0FF2B73_inline(L_7, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		// if(grid.ContainsKey(nextVector) && !neighbors.Contains(grid[nextVector])) {
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_10 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_11 = V_4;
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_13 = V_0;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_14 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_15 = V_4;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_16;
		L_16 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		bool L_17;
		L_17 = List_1_Contains_m45509418B129B5E99060F1F6B34F12D1D0AB9177(L_13, L_16, /*hidden argument*/List_1_Contains_m45509418B129B5E99060F1F6B34F12D1D0AB9177_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0063;
		}
	}
	{
		// neighbors.Add(grid[nextVector]);
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_18 = V_0;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_19 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_20 = V_4;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_21;
		L_21 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_19, L_20, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7(L_18, L_21, /*hidden argument*/List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
	}

IL_0063:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0067:
	{
		// foreach(Vector2Int v2 in directions) {
		int32_t L_23 = V_2;
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// foreach(Node neighbor in neighbors) {
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_25 = V_0;
		Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  L_26;
		L_26 = List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C(L_25, /*hidden argument*/List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		V_5 = L_26;
	}

IL_0075:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cb;
		}

IL_0077:
		{
			// foreach(Node neighbor in neighbors) {
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_27;
			L_27 = Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
			V_6 = L_27;
			// if(!reached.ContainsKey(neighbor.coordinates) && neighbor.isWalkable) {
			Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_28 = __this->get_reached_10();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_29 = V_6;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_30 = L_29->get_coordinates_0();
			bool L_31;
			L_31 = Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A(L_28, L_30, /*hidden argument*/Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_00cb;
			}
		}

IL_0094:
		{
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_32 = V_6;
			bool L_33 = L_32->get_isWalkable_1();
			if (!L_33)
			{
				goto IL_00cb;
			}
		}

IL_009d:
		{
			// neighbor.connectedTo = currentSearchNode;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_34 = V_6;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_35 = __this->get_currentSearchNode_8();
			L_34->set_connectedTo_4(L_35);
			// frontier.Enqueue(neighbor);
			Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_36 = __this->get_frontier_9();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_37 = V_6;
			Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58(L_36, L_37, /*hidden argument*/Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58_RuntimeMethod_var);
			// reached.Add(neighbor.coordinates, neighbor);
			Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_38 = __this->get_reached_10();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_39 = V_6;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_40 = L_39->get_coordinates_0();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_41 = V_6;
			Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16(L_38, L_40, L_41, /*hidden argument*/Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
		}

IL_00cb:
		{
			// foreach(Node neighbor in neighbors) {
			bool L_42;
			L_42 = Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_0077;
			}
		}

IL_00d4:
		{
			IL2CPP_LEAVE(0xE4, FINALLY_00d6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d6;
	}

FINALLY_00d6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		IL2CPP_END_FINALLY(214)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(214)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void Pathfinder::BreadthFirstSearch(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_BreadthFirstSearch_m4C106F8E966352FBA0E504FDB1E84D50B73E55D2 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBD10DDD819EFDAD884781D85B3768AC482743B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m97BFD8E82652F4A3D2A6A6CB2D821955F227ECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m551D0D668FCEB84413B395ED194ACF37B3B05D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m5B5AEE902BF69E7F646DAD780241D160392895A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// startNode.isWalkable = true;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_0 = __this->get_startNode_6();
		L_0->set_isWalkable_1((bool)1);
		// destinationNode.isWalkable = true;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_1 = __this->get_destinationNode_7();
		L_1->set_isWalkable_1((bool)1);
		// frontier.Clear();
		Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_2 = __this->get_frontier_9();
		Queue_1_Clear_m97BFD8E82652F4A3D2A6A6CB2D821955F227ECCD(L_2, /*hidden argument*/Queue_1_Clear_m97BFD8E82652F4A3D2A6A6CB2D821955F227ECCD_RuntimeMethod_var);
		// reached.Clear();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_3 = __this->get_reached_10();
		Dictionary_2_Clear_mBD10DDD819EFDAD884781D85B3768AC482743B59(L_3, /*hidden argument*/Dictionary_2_Clear_mBD10DDD819EFDAD884781D85B3768AC482743B59_RuntimeMethod_var);
		// bool isRunning = true;
		V_0 = (bool)1;
		// frontier.Enqueue(grid[coordinates]);
		Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_4 = __this->get_frontier_9();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_5 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_7;
		L_7 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58(L_4, L_7, /*hidden argument*/Queue_1_Enqueue_m8A7363B250C439A215BB0EE8D8E616580D8A5A58_RuntimeMethod_var);
		// reached.Add(coordinates, grid[coordinates]);
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_8 = __this->get_reached_10();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9 = ___coordinates0;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_10 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_11 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_12;
		L_12 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16(L_8, L_9, L_12, /*hidden argument*/Dictionary_2_Add_m8F253D98C0FF429AD047BC131A52BCB5FAE7BF16_RuntimeMethod_var);
		goto IL_009e;
	}

IL_0061:
	{
		// currentSearchNode = frontier.Dequeue();
		Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_13 = __this->get_frontier_9();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_14;
		L_14 = Queue_1_Dequeue_m551D0D668FCEB84413B395ED194ACF37B3B05D78(L_13, /*hidden argument*/Queue_1_Dequeue_m551D0D668FCEB84413B395ED194ACF37B3B05D78_RuntimeMethod_var);
		__this->set_currentSearchNode_8(L_14);
		// currentSearchNode.isExplored = true;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_15 = __this->get_currentSearchNode_8();
		L_15->set_isExplored_2((bool)1);
		// ExploreNeighbors();
		Pathfinder_ExploreNeighbors_mD01AC339AB857DE09B0B594A7167ED6CC261FFF1(__this, /*hidden argument*/NULL);
		// if(currentSearchNode.coordinates == destinationCoordinates) {
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_16 = __this->get_currentSearchNode_8();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_17 = L_16->get_coordinates_0();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_18 = __this->get_destinationCoordinates_5();
		bool L_19;
		L_19 = Vector2Int_op_Equality_m85A26114DF593BB5684C2C960949690733D89D26_inline(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		// isRunning = false;
		V_0 = (bool)0;
	}

IL_009e:
	{
		// while(frontier.Count > 0 && isRunning) {
		Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_20 = __this->get_frontier_9();
		int32_t L_21;
		L_21 = Queue_1_get_Count_m5B5AEE902BF69E7F646DAD780241D160392895A5_inline(L_20, /*hidden argument*/Queue_1_get_Count_m5B5AEE902BF69E7F646DAD780241D160392895A5_RuntimeMethod_var);
		bool L_22 = V_0;
		if (((int32_t)((int32_t)((((int32_t)L_21) > ((int32_t)0))? 1 : 0)&(int32_t)L_22)))
		{
			goto IL_0061;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::BuildPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * Pathfinder_BuildPath_m6AEBB3C6CB75957358B051882F479B3101FEBC6E (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mC0616ED21E2B42553B9EA3E3897363B14D996B7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * V_0 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_1 = NULL;
	{
		// List<Node> path = new List<Node>();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_0 = (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *)il2cpp_codegen_object_new(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F(L_0, /*hidden argument*/List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		V_0 = L_0;
		// Node currentNode = destinationNode;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_1 = __this->get_destinationNode_7();
		V_1 = L_1;
		goto IL_0024;
	}

IL_000f:
	{
		// path.Add(currentNode);
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_2 = V_0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_3 = V_1;
		List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7(L_2, L_3, /*hidden argument*/List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		// currentNode.isPath = true;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_4 = V_1;
		L_4->set_isPath_3((bool)1);
		// currentNode = currentNode.connectedTo;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5 = V_1;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_6 = L_5->get_connectedTo_4();
		V_1 = L_6;
	}

IL_0024:
	{
		// while(currentNode.connectedTo != null) {
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_7 = V_1;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_8 = L_7->get_connectedTo_4();
		if (L_8)
		{
			goto IL_000f;
		}
	}
	{
		// path.Add(currentNode);
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_9 = V_0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_10 = V_1;
		List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7(L_9, L_10, /*hidden argument*/List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		// currentNode.isPath = true;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_11 = V_1;
		L_11->set_isPath_3((bool)1);
		// path.Reverse();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_12 = V_0;
		List_1_Reverse_mC0616ED21E2B42553B9EA3E3897363B14D996B7D(L_12, /*hidden argument*/List_1_Reverse_mC0616ED21E2B42553B9EA3E3897363B14D996B7D_RuntimeMethod_var);
		// return path;
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_13 = V_0;
		return L_13;
	}
}
// System.Boolean Pathfinder::WillBlockPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinder_WillBlockPath_m944B397F7040D2E8D2559F460541D27C729B4167 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___coordinates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(grid.ContainsKey(coordinates)) {
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___coordinates0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m586CF89C456402689B928A72D560E64B8D2FCB1A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// bool previousState = grid[coordinates].isWalkable;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_3 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		bool L_6 = L_5->get_isWalkable_1();
		V_0 = L_6;
		// grid[coordinates].isWalkable = false;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_7 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_9;
		L_9 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		L_9->set_isWalkable_1((bool)0);
		// List<Node> newPath = GetNewPath();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_10;
		L_10 = Pathfinder_GetNewPath_m38B6C94CC1DF2C4BE5E5F6F34AC254AE6B7655B1(__this, /*hidden argument*/NULL);
		// grid[coordinates].isWalkable = previousState;
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_11 = __this->get_grid_13();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12 = ___coordinates0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_13;
		L_13 = Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m762E5980F09C84C4DB432C87C2AD220BC2CCAC5B_RuntimeMethod_var);
		bool L_14 = V_0;
		L_13->set_isWalkable_1(L_14);
		// if(newPath.Count <= 1) {
		int32_t L_15;
		L_15 = List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_inline(L_10, /*hidden argument*/List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		// GetNewPath();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_16;
		L_16 = Pathfinder_GetNewPath_m38B6C94CC1DF2C4BE5E5F6F34AC254AE6B7655B1(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_005b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Pathfinder::NotifyReceivers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_NotifyReceivers_m7833DF36FB61C4A3EBAC3B779C2034C714034011 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BroadcastMessage("RecalculatePath", false, SendMessageOptions.DontRequireReceiver);
		bool L_0 = ((bool)0);
		RuntimeObject * L_1 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_0);
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A, L_1, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pathfinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder__ctor_m2928D14675D68A76D6C5EA0476A5CEC33CF25C27 (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m120E5F946E1B3A0ECDBDA8052888CC6BDF7BE0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<Node> frontier = new Queue<Node>();
		Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F * L_0 = (Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F *)il2cpp_codegen_object_new(Queue_1_t74149E9497FFFFCEEC876AD92A84B8F13E88BF0F_il2cpp_TypeInfo_var);
		Queue_1__ctor_m120E5F946E1B3A0ECDBDA8052888CC6BDF7BE0B3(L_0, /*hidden argument*/Queue_1__ctor_m120E5F946E1B3A0ECDBDA8052888CC6BDF7BE0B3_RuntimeMethod_var);
		__this->set_frontier_9(L_0);
		// Dictionary<Vector2Int, Node> reached = new Dictionary<Vector2Int, Node>();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_1 = (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *)il2cpp_codegen_object_new(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B(L_1, /*hidden argument*/Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var);
		__this->set_reached_10(L_1);
		// Vector2Int[] directions = { Vector2Int.right, Vector2Int.left, Vector2Int.up, Vector2Int.down};
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_2 = (Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)SZArrayNew(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_3 = L_2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = Vector2Int_get_right_m600DF543E4C545EFEB898DE5C538543115B30E77(/*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_4);
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_5 = L_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		L_6 = Vector2Int_get_left_m37F73E7D89D4354BE16787B2B29C1AC836DAF36A(/*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_6);
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_7 = L_5;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		L_8 = Vector2Int_get_up_m53656FA1985E3C13F04BC0121168B494545983E1(/*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_8);
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_9 = L_7;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_10;
		L_10 = Vector2Int_get_down_m9DD5E4EC9D158A90B74EF9165325C5E25BD9A47B(/*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_10);
		__this->set_directions_11(L_9);
		// Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_11 = (Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 *)il2cpp_codegen_object_new(Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B(L_11, /*hidden argument*/Dictionary_2__ctor_m759ECE1F711A1E9AEA3061DD6B78F1E5DE09170B_RuntimeMethod_var);
		__this->set_grid_13(L_11);
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
// System.Void TargetLocator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Update_m22E1E5221934924E7BF0555CD68741ACCE2F94AB (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method)
{
	{
		// FindClosestTarget();
		TargetLocator_FindClosestTarget_m00832B8999B93127477F013E969D948120495E9C(__this, /*hidden argument*/NULL);
		// AimWeapon();
		TargetLocator_AimWeapon_m0566ACEA95083B1BF1FAD572EEADAB8E9F79419E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::FindClosestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_FindClosestTarget_m00832B8999B93127477F013E969D948120495E9C (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m61F416478BC0E9743700C8CB3EA92717511EFDC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	float V_1 = 0.0f;
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* V_2 = NULL;
	int32_t V_3 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_4 = NULL;
	float V_5 = 0.0f;
	{
		// Enemy[] enemies = FindObjectsOfType<Enemy>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m61F416478BC0E9743700C8CB3EA92717511EFDC7(/*hidden argument*/Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m61F416478BC0E9743700C8CB3EA92717511EFDC7_RuntimeMethod_var);
		// Transform closestTarget = null;
		V_0 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		// float maxDistance = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// foreach(Enemy enemy in enemies) {
		V_2 = L_0;
		V_3 = 0;
		goto IL_0049;
	}

IL_0012:
	{
		// foreach(Enemy enemy in enemies) {
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_7 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B(L_6, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// if(targetDistance < maxDistance) {
		float L_11 = V_5;
		float L_12 = V_1;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_0045;
		}
	}
	{
		// closestTarget = enemy.transform;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_13 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// maxDistance = targetDistance;
		float L_15 = V_5;
		V_1 = L_15;
	}

IL_0045:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0049:
	{
		// foreach(Enemy enemy in enemies) {
		int32_t L_17 = V_3;
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// target = closestTarget;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_0;
		__this->set_target_7(L_19);
		// }
		return;
	}
}
// System.Void TargetLocator::AimWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_AimWeapon_m0566ACEA95083B1BF1FAD572EEADAB8E9F79419E (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float closestDistance = Vector3.Distance(transform.position, target.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_target_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// weapon.LookAt(target);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_weapon_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_target_7();
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_5, L_6, /*hidden argument*/NULL);
		// Attack(range > closestDistance);
		float L_7 = __this->get_range_6();
		float L_8 = V_0;
		TargetLocator_Attack_mB95D4721F22E38785594E07E5EBDBF97654BCFCE(__this, (bool)((((float)L_7) > ((float)L_8))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Attack_mB95D4721F22E38785594E07E5EBDBF97654BCFCE (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, bool ___isActive0, const RuntimeMethod* method)
{
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var emission = projectileParticles.emission;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_projectileParticles_5();
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_1;
		L_1 = ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// emission.enabled = isActive;
		bool L_2 = ___isActive0;
		EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)(&V_0), L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator__ctor_m1E09015BDF4DFA640DCD3D70C67535C53CCB8FAB (TargetLocator_t3F2AE032A26C8FACF26094D5B245DC7C8A856E8D * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float range = 15f;
		__this->set_range_6((15.0f));
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
// System.Boolean Tile::get_IsPlacebled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_IsPlacebled_mFB9BD95130A4F679F66C848AE4C0C870D544D3A1 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPlacebled{ get {return isPlacebled;}}
		bool L_0 = __this->get_isPlacebled_5();
		return L_0;
	}
}
// System.Void Tile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Awake_m4341CFA79A15C8660DDE7BCFCF66E2D46A67FB1D (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridManager = FindObjectOfType<GridManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0;
		L_0 = Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0(/*hidden argument*/Object_FindObjectOfType_TisGridManager_t9D03B7713AD644FF31B45E7A0313130344720328_mC399F9062E48C967B70D92DD9CB42E95577643C0_RuntimeMethod_var);
		__this->set_gridManager_6(L_0);
		// pathfinder = FindObjectOfType<Pathfinder>();
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_1;
		L_1 = Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25(/*hidden argument*/Object_FindObjectOfType_TisPathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540_m6E8DCE56F48CC178D18B35BF7A8AEB7AE9B63B25_RuntimeMethod_var);
		__this->set_pathfinder_7(L_1);
		// }
		return;
	}
}
// System.Void Tile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Start_m2D8C47ECDED6D6588E8B049E1B5E975A952C07CB (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gridManager != null) {
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_gridManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// coordinate = gridManager.GetCoordinatesFromPosition(transform.position);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_2 = __this->get_gridManager_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5;
		L_5 = GridManager_GetCoordinatesFromPosition_m20EAE61F344A611F896E74516BA30311202A92E5(L_2, L_4, /*hidden argument*/NULL);
		__this->set_coordinate_8(L_5);
		// if (!isPlacebled) gridManager.BlockNode(coordinate);
		bool L_6 = __this->get_isPlacebled_5();
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		// if (!isPlacebled) gridManager.BlockNode(coordinate);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_7 = __this->get_gridManager_6();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8 = __this->get_coordinate_8();
		GridManager_BlockNode_m167314E0539F68EC9AD315AC107C5A2A81B7D668(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_mC133CAB2DD72189781F34532A35F0E17634D840E (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	{
		// if(gridManager.GetNode(coordinate).isWalkable && !pathfinder.WillBlockPath(coordinate)) {
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_gridManager_6();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = __this->get_coordinate_8();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_2;
		L_2 = GridManager_GetNode_mD86E4E710ACE661944B9F5E53897B2E732375D60(L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = L_2->get_isWalkable_1();
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_4 = __this->get_pathfinder_7();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = __this->get_coordinate_8();
		bool L_6;
		L_6 = Pathfinder_WillBlockPath_m944B397F7040D2E8D2559F460541D27C729B4167(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0065;
		}
	}
	{
		// bool isSuccessful = tower.CreatTower(tower, transform.position);
		Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_7 = __this->get_tower_4();
		Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_8 = __this->get_tower_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Tower_CreatTower_m72FA407A893EBF593DC0C5F23BC2CBDCA776C666(L_7, L_8, L_10, /*hidden argument*/NULL);
		// if (isSuccessful) {
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// gridManager.BlockNode(coordinate);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_12 = __this->get_gridManager_6();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13 = __this->get_coordinate_8();
		GridManager_BlockNode_m167314E0539F68EC9AD315AC107C5A2A81B7D668(L_12, L_13, /*hidden argument*/NULL);
		// pathfinder.NotifyReceivers();
		Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * L_14 = __this->get_pathfinder_7();
		Pathfinder_NotifyReceivers_m7833DF36FB61C4A3EBAC3B779C2034C714034011(L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m35C285926E99EBF627F2B82BEA77909A233BE1ED (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
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
// System.Void Tower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Start_mE4A4649F3EE06C525B2579D3F8469FCCA736DC7D (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Build());
		RuntimeObject* L_0;
		L_0 = Tower_Build_m0817FD0BA86CE5B3675C3D1A59BF0498FDEEA356(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tower::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_Build_m0817FD0BA86CE5B3675C3D1A59BF0498FDEEA356 (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * L_0 = (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 *)il2cpp_codegen_object_new(U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624_il2cpp_TypeInfo_var);
		U3CBuildU3Ed__3__ctor_m456E4B67CC640BEBB6AA967599B520B3365A2C9F(L_0, 0, /*hidden argument*/NULL);
		U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean Tower::CreatTower(Tower,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tower_CreatTower_m72FA407A893EBF593DC0C5F23BC2CBDCA776C666 (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * ___tower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * V_0 = NULL;
	{
		// Bank bank = FindObjectOfType<Bank>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_0;
		L_0 = Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658(/*hidden argument*/Object_FindObjectOfType_TisBank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF_m21951A14A1777738D30E51513E76D9381478A658_RuntimeMethod_var);
		V_0 = L_0;
		// if(bank == null || bank.CurrentBalance < cost) {
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_3 = V_0;
		int32_t L_4;
		L_4 = Bank_get_CurrentBalance_mCFED77ADEE8806D83788D10074328091586211BF_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_cost_4();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// bank.WithDraw(cost);
		Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * L_6 = V_0;
		int32_t L_7 = __this->get_cost_4();
		Bank_WithDraw_m2DC8A76C937978387012652BFD6F1720899AAF04(L_6, L_7, /*hidden argument*/NULL);
		// Instantiate(tower.gameObject, position, Quaternion.identity);
		Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_8 = ___tower0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void Tower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower__ctor_m4B277C277B901ADEA18A8496A767C514F08A81BB (Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int cost = 75;
		__this->set_cost_4(((int32_t)75));
		// [SerializeField] float delayTime = 1f;
		__this->set_delayTime_5((1.0f));
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
// System.Void EnemyMove/<FollowPath>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__9__ctor_mDDE2A36C33478619D15E4113F6B2664A5EC16F9A (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemyMove/<FollowPath>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__9_System_IDisposable_Dispose_m8CAD139200AF06D1F6FECC531E5F8C835843F1EB (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemyMove/<FollowPath>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFollowPathU3Ed__9_MoveNext_m67D76E33894205F6291541B49103D94F5CF0D5BD (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE9988BAF9B7CD5EC8586D90E7B5A45EFC0A3D3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 1; i < paths.Count; i++) {
		__this->set_U3CiU3E5__2_3(1);
		goto IL_010e;
	}

IL_002d:
	{
		// Vector3 startPosition = transform.position;
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_4 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__3_4(L_6);
		// Vector3 endPosition = gridManager.GetPositionFromCoordinates(paths[i].coordinates);
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_7 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_8 = L_7->get_gridManager_8();
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_9 = V_1;
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_10 = L_9->get_paths_5();
		int32_t L_11 = __this->get_U3CiU3E5__2_3();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_12;
		L_12 = List_1_get_Item_mE9988BAF9B7CD5EC8586D90E7B5A45EFC0A3D3AB_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mE9988BAF9B7CD5EC8586D90E7B5A45EFC0A3D3AB_RuntimeMethod_var);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13 = L_12->get_coordinates_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = GridManager_GetPositionFromCoordinates_mAEE892A3338FB2720C20E0571E3233C716C1789B(L_8, L_13, /*hidden argument*/NULL);
		__this->set_U3CendPositionU3E5__4_5(L_14);
		// float travelPercent = 0f;
		__this->set_U3CtravelPercentU3E5__5_6((0.0f));
		// transform.LookAt(endPosition);
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_15 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_U3CendPositionU3E5__4_5();
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_0083:
	{
		// travelPercent += Time.deltaTime * speed;
		float L_18 = __this->get_U3CtravelPercentU3E5__5_6();
		float L_19;
		L_19 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_20 = V_1;
		float L_21 = L_20->get_speed_4();
		__this->set_U3CtravelPercentU3E5__5_6(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)))));
		// transform.position = Vector3.Lerp(startPosition, endPosition, travelPercent);
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_22 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_U3CstartPositionU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_U3CendPositionU3E5__4_5();
		float L_26 = __this->get_U3CtravelPercentU3E5__5_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_24, L_25, L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_27, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_28 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_28, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d9:
	{
		// while(travelPercent < 1) {
		float L_29 = __this->get_U3CtravelPercentU3E5__5_6();
		if ((((float)L_29) < ((float)(1.0f))))
		{
			goto IL_0083;
		}
	}
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_U3CstartPositionU3E5__3_4();
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_U3CendPositionU3E5__4_5();
		il2cpp_codegen_initobj(L_31, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// for(int i = 1; i < paths.Count; i++) {
		int32_t L_32 = __this->get_U3CiU3E5__2_3();
		V_2 = L_32;
		int32_t L_33 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)));
	}

IL_010e:
	{
		// for(int i = 1; i < paths.Count; i++) {
		int32_t L_34 = __this->get_U3CiU3E5__2_3();
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_35 = V_1;
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_36 = L_35->get_paths_5();
		int32_t L_37;
		L_37 = List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_inline(L_36, /*hidden argument*/List_1_get_Count_m21584DE1E9ACECEB59CB5C1A464CD0873CA64C5C_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_37)))
		{
			goto IL_002d;
		}
	}
	{
		// FinishPath();
		EnemyMove_t884A12E2D5E2C10A7E33872A4A545BD8B83EF60F * L_38 = V_1;
		EnemyMove_FinishPath_m54BB681E17D7EDF7CBA87D41CD6247DCFDD576F7(L_38, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyMove/<FollowPath>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowPathU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF7195B06ACBC25FBB51E3AA304945482752D5EB1 (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemyMove/<FollowPath>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__9_System_Collections_IEnumerator_Reset_m0317E9EAD0774232BCF36CF3DA0F023041E0606C (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFollowPathU3Ed__9_System_Collections_IEnumerator_Reset_m0317E9EAD0774232BCF36CF3DA0F023041E0606C_RuntimeMethod_var)));
	}
}
// System.Object EnemyMove/<FollowPath>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowPathU3Ed__9_System_Collections_IEnumerator_get_Current_m8491C2DB5ABE604CDEBF23270DC98410BCF8BF9B (U3CFollowPathU3Ed__9_t40CF4533DCD1CFAE4D37387D2547B1957D6F1537 * __this, const RuntimeMethod* method)
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
// System.Void ObjectPool/<SpawnEnemy>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__7__ctor_mAD41F65883CCD858CDDE4B8C28FDAC4F047F127D (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ObjectPool/<SpawnEnemy>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__7_System_IDisposable_Dispose_mED221D91DFC954A937F2185E1F01258BF2ED2F40 (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ObjectPool/<SpawnEnemy>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemyU3Ed__7_MoveNext_m7465FF97686439CFB1DA92121044F191D6CF1F05 (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// EnableObjectInPool();
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_4 = V_1;
		ObjectPool_EnableObjectInPool_mB3D30A7BADB78115473B8921A0A7C5B60029B1C6(L_4, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(spawnTime);
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_5 = V_1;
		float L_6 = L_5->get_spawnTime_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true)
		goto IL_001e;
	}
}
// System.Object ObjectPool/<SpawnEnemy>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnEnemyU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD9DDC82E9D2665B95FC154551293E8404346FE24 (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ObjectPool/<SpawnEnemy>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__7_System_Collections_IEnumerator_Reset_mDF9A999DA17BACD551A10C00307C315BDFFC7B81 (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemyU3Ed__7_System_Collections_IEnumerator_Reset_mDF9A999DA17BACD551A10C00307C315BDFFC7B81_RuntimeMethod_var)));
	}
}
// System.Object ObjectPool/<SpawnEnemy>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnEnemyU3Ed__7_System_Collections_IEnumerator_get_Current_mB0B460034D2C194B28A946C7F77BD0B5C2052438 (U3CSpawnEnemyU3Ed__7_tE1912606317B7731D94D60D25BF3566BA46DF90D * __this, const RuntimeMethod* method)
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
// System.Void Tower/<Build>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3__ctor_m456E4B67CC640BEBB6AA967599B520B3365A2C9F (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tower/<Build>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3_System_IDisposable_Dispose_mC7DB98B88A5FE75AD7D33735E39373D21BA82B12 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CBuildU3Ed__3_U3CU3Em__Finally1_mBE54E5F047C2DED4146B459131FE1C08D94FABE9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Tower/<Build>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildU3Ed__3_MoveNext_m590F29C2B83191C6204F07BD296B4B2964252960 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_010a;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_0183;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach(Transform child in transform) {
			Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_4 = V_2;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
			RuntimeObject* L_6;
			L_6 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_5, /*hidden argument*/NULL);
			V_3 = L_6;
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				goto IL_008b;
			}

IL_0034:
			{
				// foreach(Transform child in transform) {
				RuntimeObject* L_7 = V_3;
				RuntimeObject * L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
				// child.gameObject.SetActive(false);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_8, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
				L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
				GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
				// foreach(Transform grandchild in child) {
				RuntimeObject* L_11;
				L_11 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_9, /*hidden argument*/NULL);
				V_4 = L_11;
			}

IL_0052:
			try
			{ // begin try (depth: 3)
				{
					goto IL_006b;
				}

IL_0054:
				{
					// foreach(Transform grandchild in child) {
					RuntimeObject* L_12 = V_4;
					RuntimeObject * L_13;
					L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
					// grandchild.gameObject.SetActive(false);
					GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
					L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_13, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
					GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
				}

IL_006b:
				{
					// foreach(Transform grandchild in child) {
					RuntimeObject* L_15 = V_4;
					bool L_16;
					L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
					if (L_16)
					{
						goto IL_0054;
					}
				}

IL_0074:
				{
					IL2CPP_LEAVE(0x8B, FINALLY_0076);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0076;
			}

FINALLY_0076:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_17 = V_4;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
					RuntimeObject* L_18 = V_5;
					if (!L_18)
					{
						goto IL_008a;
					}
				}

IL_0083:
				{
					RuntimeObject* L_19 = V_5;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
				}

IL_008a:
				{
					IL2CPP_END_FINALLY(118)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(118)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x8B, IL_008b)
			}

IL_008b:
			{
				// foreach(Transform child in transform) {
				RuntimeObject* L_20 = V_3;
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0034;
				}
			}

IL_0093:
			{
				IL2CPP_LEAVE(0xA9, FINALLY_0095);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0095;
		}

FINALLY_0095:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_22 = V_3;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
				RuntimeObject* L_23 = V_5;
				if (!L_23)
				{
					goto IL_00a8;
				}
			}

IL_00a1:
			{
				RuntimeObject* L_24 = V_5;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
			}

IL_00a8:
			{
				IL2CPP_END_FINALLY(149)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(149)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		}

IL_00a9:
		{
			// foreach(Transform child in transform) {
			Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_25 = V_2;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
			L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
			RuntimeObject* L_27;
			L_27 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_26, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_27);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_015b;
		}

IL_00c7:
		{
			// foreach(Transform child in transform) {
			RuntimeObject* L_28 = __this->get_U3CU3E7__wrap1_3();
			RuntimeObject * L_29;
			L_29 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_28);
			__this->set_U3CchildU3E5__3_4(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_29, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			// child.gameObject.SetActive(true);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_U3CchildU3E5__3_4();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
			L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)1, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(delayTime);
			Tower_t8940659FDD23C3EE6AB3E3A27BFA1CF3654085C0 * L_32 = V_2;
			float L_33 = L_32->get_delayTime_5();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_34 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_34, L_33, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_34);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0183;
		}

IL_010a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// foreach(Transform grandchild in child) {
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_U3CchildU3E5__3_4();
			RuntimeObject* L_36;
			L_36 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_35, /*hidden argument*/NULL);
			V_3 = L_36;
		}

IL_011e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0136;
			}

IL_0120:
			{
				// foreach(Transform grandchild in child) {
				RuntimeObject* L_37 = V_3;
				RuntimeObject * L_38;
				L_38 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_37);
				// grandchild.gameObject.SetActive(true);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
				L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_38, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_39, (bool)1, /*hidden argument*/NULL);
			}

IL_0136:
			{
				// foreach(Transform grandchild in child) {
				RuntimeObject* L_40 = V_3;
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_0120;
				}
			}

IL_013e:
			{
				IL2CPP_LEAVE(0x154, FINALLY_0140);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0140;
		}

FINALLY_0140:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_42 = V_3;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_42, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
				RuntimeObject* L_43 = V_5;
				if (!L_43)
				{
					goto IL_0153;
				}
			}

IL_014c:
			{
				RuntimeObject* L_44 = V_5;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_44);
			}

IL_0153:
			{
				IL2CPP_END_FINALLY(320)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(320)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x154, IL_0154)
		}

IL_0154:
		{
			// }
			__this->set_U3CchildU3E5__3_4((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		}

IL_015b:
		{
			// foreach(Transform child in transform) {
			RuntimeObject* L_45 = __this->get_U3CU3E7__wrap1_3();
			bool L_46;
			L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_45);
			if (L_46)
			{
				goto IL_00c7;
			}
		}

IL_016b:
		{
			U3CBuildU3Ed__3_U3CU3Em__Finally1_mBE54E5F047C2DED4146B459131FE1C08D94FABE9(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_0183;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_017c;
	}

FAULT_017c:
	{ // begin fault (depth: 1)
		U3CBuildU3Ed__3_System_IDisposable_Dispose_mC7DB98B88A5FE75AD7D33735E39373D21BA82B12(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(380)
	} // end fault
	IL2CPP_CLEANUP(380)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0183:
	{
		bool L_47 = V_0;
		return L_47;
	}
}
// System.Void Tower/<Build>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3_U3CU3Em__Finally1_mBE54E5F047C2DED4146B459131FE1C08D94FABE9 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Tower/<Build>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC93008EB53236EFC524DB2ED04C2A87B1F9F4A98 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tower/<Build>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__3_System_Collections_IEnumerator_Reset_mC83CBEDFC52D57F8332C736F77047859C65341B7 (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildU3Ed__3_System_Collections_IEnumerator_Reset_mC83CBEDFC52D57F8332C736F77047859C65341B7_RuntimeMethod_var)));
	}
}
// System.Object Tower/<Build>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildU3Ed__3_System_Collections_IEnumerator_get_Current_m68E38389E1979548549C910353A6AADDD91B22FB (U3CBuildU3Ed__3_tA082EF269672AEC8E0C787D5FC9BF6C67BE7E624 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_get_WorldGridSize_mD995D0948D17EADE7E6FA6A5530AB06025BDFAAA_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int WorldGridSize { get { return worldGridSize;}}
		int32_t L_0 = __this->get_worldGridSize_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Y_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Pathfinder_get_StartCoordinates_mE3AC0445592E12EA220DA882C47DB8C444398125_inline (Pathfinder_tFAEE97E548EC983810EEDFAA902132DDE12C4540 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int StartCoordinates { get { return startCoordinates;}}
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_startCoordinates_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * GridManager_get_Grid_m25D670FC6471B21D49A29722DA6346552734423A_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<Vector2Int, Node> Grid{get{return grid;}}
		Dictionary_2_t99B9FA0FFB534A83D0103A29C6654B144A3876E7 * L_0 = __this->get_grid_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Addition_m510CEFEECE70D653E9E414FFE1446A57D0FF2B73_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m85A26114DF593BB5684C2C960949690733D89D26_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_mCFED77ADEE8806D83788D10074328091586211BF_inline (Bank_t41FCEDF0A088BC6665D8B1114F8E9D4210A1C8AF * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentBalance{get {return currentBalance;}}
		int32_t L_0 = __this->get_currentBalance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  Enumerator_get_Current_m13C87D43591585C3B80D10B102956F7C6A840D63_gshared_inline (Enumerator_tAF9E8B917F98E5074FD7DCD8A9677827A17C7560 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114  L_0 = (KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 )__this->get_current_3();
		return (KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mA303B1837C6ACAE94F9D34E5735F20E4972AA39A_gshared_inline (KeyValuePair_2_t8B50A5562CF6B7829786A3B559FB93BAC3201114 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
