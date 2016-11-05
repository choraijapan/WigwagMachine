#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_FloatSelf4187551656.h"
#include "AssemblyU2DCSharp_GestureHandle674892977.h"
#include "AssemblyU2DCSharp_ShowScore89057653.h"
#include "AssemblyU2DCSharp_SwingSelf3486643018.h"
#include "AssemblyU2DCSharp_iTween3087282050.h"
#include "AssemblyU2DCSharp_iTween_EaseType2734598229.h"
#include "AssemblyU2DCSharp_iTween_LoopType1485160459.h"
#include "AssemblyU2DCSharp_iTween_NamedValueColor1694108638.h"
#include "AssemblyU2DCSharp_iTween_Defaults4166900319.h"
#include "AssemblyU2DCSharp_iTween_CRSpline2211016973.h"
#include "AssemblyU2DCSharp_iTween_EasingFunction1323017328.h"
#include "AssemblyU2DCSharp_iTween_ApplyTween882368618.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenDelayU3Ec__Iterator41536438.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenRestartU3Ec__Iter4135396267.h"
#include "AssemblyU2DCSharp_iTween_U3CStartU3Ec__Iterator22251047596.h"
#include "AssemblyU2DCSharp_GameManager2369589051.h"
#include "AssemblyU2DCSharp_Assets_Codes_GameState_GameEndSt2361244494.h"
#include "AssemblyU2DCSharp_Assets_Codes_GameState_GameRunSt1451825054.h"
#include "AssemblyU2DCSharp_Assets_Codes_GameState_GameStartS654642983.h"
#include "AssemblyU2DCSharp_IGameState1533448566.h"
#include "AssemblyU2DCSharp_BackgroundMananger1857651291.h"
#include "AssemblyU2DCSharp_ObstaclesManager3622291305.h"
#include "AssemblyU2DCSharp_PlayerManager4287196524.h"
#include "AssemblyU2DCSharp_ScoreManager2519962843.h"
#include "AssemblyU2DCSharp_ScrollManager2092769280.h"
#include "AssemblyU2DCSharp_SoundManange2444348982.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3053238933.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1676615736.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (U3CModuleU3E_t86524795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (FloatSelf_t4187551656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (GestureHandle_t674892977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (ShowScore_t89057653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[2] = 
{
	ShowScore_t89057653::get_offset_of_numSprites_2(),
	ShowScore_t89057653::get_offset_of_name_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (SwingSelf_t3486643018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (iTween_t3087282050), -1, sizeof(iTween_t3087282050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1406[49] = 
{
	iTween_t3087282050_StaticFields::get_offset_of_tweens_2(),
	iTween_t3087282050_StaticFields::get_offset_of_cameraFade_3(),
	iTween_t3087282050::get_offset_of_id_4(),
	iTween_t3087282050::get_offset_of_type_5(),
	iTween_t3087282050::get_offset_of_method_6(),
	iTween_t3087282050::get_offset_of_easeType_7(),
	iTween_t3087282050::get_offset_of_time_8(),
	iTween_t3087282050::get_offset_of_delay_9(),
	iTween_t3087282050::get_offset_of_loopType_10(),
	iTween_t3087282050::get_offset_of_isRunning_11(),
	iTween_t3087282050::get_offset_of_isPaused_12(),
	iTween_t3087282050::get_offset_of_runningTime_13(),
	iTween_t3087282050::get_offset_of_percentage_14(),
	iTween_t3087282050::get_offset_of_delayStarted_15(),
	iTween_t3087282050::get_offset_of_kinematic_16(),
	iTween_t3087282050::get_offset_of_isLocal_17(),
	iTween_t3087282050::get_offset_of_loop_18(),
	iTween_t3087282050::get_offset_of_reverse_19(),
	iTween_t3087282050::get_offset_of_wasPaused_20(),
	iTween_t3087282050::get_offset_of_physics_21(),
	iTween_t3087282050::get_offset_of_tweenArguments_22(),
	iTween_t3087282050::get_offset_of_space_23(),
	iTween_t3087282050::get_offset_of_ease_24(),
	iTween_t3087282050::get_offset_of_apply_25(),
	iTween_t3087282050::get_offset_of_audioSource_26(),
	iTween_t3087282050::get_offset_of_vector3s_27(),
	iTween_t3087282050::get_offset_of_vector2s_28(),
	iTween_t3087282050::get_offset_of_colors_29(),
	iTween_t3087282050::get_offset_of_floats_30(),
	iTween_t3087282050::get_offset_of_rects_31(),
	iTween_t3087282050::get_offset_of_path_32(),
	iTween_t3087282050::get_offset_of_preUpdate_33(),
	iTween_t3087282050::get_offset_of_postUpdate_34(),
	iTween_t3087282050::get_offset_of_namedcolorvalue_35(),
	iTween_t3087282050::get_offset_of_lastRealTime_36(),
	iTween_t3087282050::get_offset_of_useRealTime_37(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_38(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_39(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_40(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_41(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_42(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_43(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_44(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_45(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_46(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_47(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_48(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_49(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_50(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (EaseType_t2734598229)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1407[30] = 
{
	EaseType_t2734598229::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (LoopType_t1485160459)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1408[4] = 
{
	LoopType_t1485160459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (NamedValueColor_t1694108638)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1409[5] = 
{
	NamedValueColor_t1694108638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (Defaults_t4166900319), -1, sizeof(Defaults_t4166900319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1410[16] = 
{
	Defaults_t4166900319_StaticFields::get_offset_of_time_0(),
	Defaults_t4166900319_StaticFields::get_offset_of_delay_1(),
	Defaults_t4166900319_StaticFields::get_offset_of_namedColorValue_2(),
	Defaults_t4166900319_StaticFields::get_offset_of_loopType_3(),
	Defaults_t4166900319_StaticFields::get_offset_of_easeType_4(),
	Defaults_t4166900319_StaticFields::get_offset_of_lookSpeed_5(),
	Defaults_t4166900319_StaticFields::get_offset_of_isLocal_6(),
	Defaults_t4166900319_StaticFields::get_offset_of_space_7(),
	Defaults_t4166900319_StaticFields::get_offset_of_orientToPath_8(),
	Defaults_t4166900319_StaticFields::get_offset_of_color_9(),
	Defaults_t4166900319_StaticFields::get_offset_of_updateTimePercentage_10(),
	Defaults_t4166900319_StaticFields::get_offset_of_updateTime_11(),
	Defaults_t4166900319_StaticFields::get_offset_of_cameraFadeDepth_12(),
	Defaults_t4166900319_StaticFields::get_offset_of_lookAhead_13(),
	Defaults_t4166900319_StaticFields::get_offset_of_useRealTime_14(),
	Defaults_t4166900319_StaticFields::get_offset_of_up_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (CRSpline_t2211016973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[1] = 
{
	CRSpline_t2211016973::get_offset_of_pts_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (EasingFunction_t1323017328), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (ApplyTween_t882368618), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (U3CTweenDelayU3Ec__Iterator0_t41536438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[3] = 
{
	U3CTweenDelayU3Ec__Iterator0_t41536438::get_offset_of_U24PC_0(),
	U3CTweenDelayU3Ec__Iterator0_t41536438::get_offset_of_U24current_1(),
	U3CTweenDelayU3Ec__Iterator0_t41536438::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (U3CTweenRestartU3Ec__Iterator1_t4135396267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[3] = 
{
	U3CTweenRestartU3Ec__Iterator1_t4135396267::get_offset_of_U24PC_0(),
	U3CTweenRestartU3Ec__Iterator1_t4135396267::get_offset_of_U24current_1(),
	U3CTweenRestartU3Ec__Iterator1_t4135396267::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (U3CStartU3Ec__Iterator2_t2251047596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[3] = 
{
	U3CStartU3Ec__Iterator2_t2251047596::get_offset_of_U24PC_0(),
	U3CStartU3Ec__Iterator2_t2251047596::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator2_t2251047596::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (GameManager_t2369589051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[12] = 
{
	GameManager_t2369589051::get_offset_of__CurrentState_2(),
	GameManager_t2369589051::get_offset_of__btnGroup_3(),
	GameManager_t2369589051::get_offset_of__board_4(),
	GameManager_t2369589051::get_offset_of__Obstacles_Group_5(),
	GameManager_t2369589051::get_offset_of__gesture_6(),
	GameManager_t2369589051::get_offset_of__Obstacles_GroupPrefab_7(),
	GameManager_t2369589051::get_offset_of__playerInstance_8(),
	GameManager_t2369589051::get_offset_of__playerPrefab_9(),
	GameManager_t2369589051::get_offset_of__result_10(),
	GameManager_t2369589051::get_offset_of_didInit_11(),
	GameManager_t2369589051::get_offset_of__ObstaclesList_12(),
	GameManager_t2369589051::get_offset_of__ScoreManager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (GameEndState_t2361244494), -1, sizeof(GameEndState_t2361244494_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1418[3] = 
{
	GameEndState_t2361244494::get_offset_of__manager_0(),
	GameEndState_t2361244494::get_offset_of_layerInt_1(),
	GameEndState_t2361244494_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (GameRunState_t1451825054), -1, sizeof(GameRunState_t1451825054_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1419[8] = 
{
	GameRunState_t1451825054::get_offset_of__manager_0(),
	GameRunState_t1451825054::get_offset_of__stateInt_1(),
	GameRunState_t1451825054::get_offset_of_layerInt_2(),
	GameRunState_t1451825054::get_offset_of__scrollManager_3(),
	GameRunState_t1451825054::get_offset_of_player_4(),
	GameRunState_t1451825054::get_offset_of__playerManager_5(),
	GameRunState_t1451825054::get_offset_of_backDistance_6(),
	GameRunState_t1451825054_StaticFields::get_offset_of__instance_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (GameStartState_t654642983), -1, sizeof(GameStartState_t654642983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1420[7] = 
{
	GameStartState_t654642983::get_offset_of__manager_0(),
	GameStartState_t654642983::get_offset_of__CurrentState_1(),
	GameStartState_t654642983::get_offset_of__btnGroup_2(),
	GameStartState_t654642983::get_offset_of__board_3(),
	GameStartState_t654642983::get_offset_of__Obstacles_Group_4(),
	GameStartState_t654642983::get_offset_of_layerInt_5(),
	GameStartState_t654642983_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (IGameState_t1533448566), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (BackgroundMananger_t1857651291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[1] = 
{
	BackgroundMananger_t1857651291::get_offset_of__OffsetY_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (ObstaclesManager_t3622291305), -1, sizeof(ObstaclesManager_t3622291305_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1423[1] = 
{
	ObstaclesManager_t3622291305_StaticFields::get_offset_of_lastX_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (PlayerManager_t4287196524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[3] = 
{
	PlayerManager_t4287196524::get_offset_of__bodyAnimator_2(),
	PlayerManager_t4287196524::get_offset_of__wheelAnimator_3(),
	PlayerManager_t4287196524::get_offset_of__faceRight_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (ScoreManager_t2519962843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[4] = 
{
	ScoreManager_t2519962843::get_offset_of_ScorePrefab_2(),
	ScoreManager_t2519962843::get_offset_of_score_3(),
	ScoreManager_t2519962843::get_offset_of_sList_4(),
	ScoreManager_t2519962843::get_offset_of_startpos_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (ScrollManager_t2092769280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1426[3] = 
{
	ScrollManager_t2092769280::get_offset_of__backgroundManangers_2(),
	ScrollManager_t2092769280::get_offset_of__landGround_3(),
	ScrollManager_t2092769280::get_offset_of__startpos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (SoundManange_t2444348982), -1, sizeof(SoundManange_t2444348982_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1427[2] = 
{
	SoundManange_t2444348982::get_offset_of__SoundClips_2(),
	SoundManange_t2444348982_StaticFields::get_offset_of_instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (U3CPrivateImplementationDetailsU3E_t3053238937), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3053238937_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1428[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3053238937_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (U24ArrayTypeU24124_t1676615737)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU24124_t1676615737_marshaled_pinvoke), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
