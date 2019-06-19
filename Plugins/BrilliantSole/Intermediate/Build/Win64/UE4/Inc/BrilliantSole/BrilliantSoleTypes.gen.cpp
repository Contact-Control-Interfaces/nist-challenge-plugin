// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrilliantSole/Public/BrilliantSoleTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrilliantSoleTypes() {}
// Cross Module References
	BRILLIANTSOLE_API UEnum* Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum();
	UPackage* Z_Construct_UPackage__Script_BrilliantSole();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse();
// End Cross Module References
	static UEnum* EBrilliantSoleActionEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum, Z_Construct_UPackage__Script_BrilliantSole(), TEXT("EBrilliantSoleActionEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBrilliantSoleActionEnum(EBrilliantSoleActionEnum_StaticEnum, TEXT("/Script/BrilliantSole"), TEXT("EBrilliantSoleActionEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum_CRC() { return 3492797297U; }
	UEnum* Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BrilliantSole();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBrilliantSoleActionEnum"), 0, Get_Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBrilliantSoleActionEnum::UPDATE", (int64)EBrilliantSoleActionEnum::UPDATE },
				{ "EBrilliantSoleActionEnum::VIBRATE", (int64)EBrilliantSoleActionEnum::VIBRATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
				{ "ToolTip", "* This file is meant to hold all type definitions for the BrilliantSoleModule.\n* As a result, this file defines what constitutes each request body and how to interpret responses." },
				{ "UPDATE.DisplayName", "Update" },
				{ "VIBRATE.DisplayName", "Vibrate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BrilliantSole,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBrilliantSoleActionEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBrilliantSoleActionEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBrilliantSoleUpdateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BRILLIANTSOLE_API uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest, Z_Construct_UPackage__Script_BrilliantSole(), TEXT("BrilliantSoleUpdateRequest"), sizeof(FBrilliantSoleUpdateRequest), Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBrilliantSoleUpdateRequest(FBrilliantSoleUpdateRequest::StaticStruct, TEXT("/Script/BrilliantSole"), TEXT("BrilliantSoleUpdateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateRequest
{
	FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BrilliantSoleUpdateRequest")),new UScriptStruct::TCppStructOps<FBrilliantSoleUpdateRequest>);
	}
} ScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateRequest;
	struct Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceReverseHaptic_MetaData[];
#endif
		static void NewProp_rightDeviceReverseHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rightDeviceReverseHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceForwardHaptic_MetaData[];
#endif
		static void NewProp_rightDeviceForwardHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rightDeviceForwardHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceReverseHaptic_MetaData[];
#endif
		static void NewProp_leftDeviceReverseHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leftDeviceReverseHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceForwardHaptic_MetaData[];
#endif
		static void NewProp_leftDeviceForwardHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leftDeviceForwardHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrilliantSoleUpdateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateRequest" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateRequest*)Obj)->rightDeviceReverseHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "rightDeviceReverseHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateRequest), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateRequest" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateRequest*)Obj)->rightDeviceForwardHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "rightDeviceForwardHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateRequest), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateRequest" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateRequest*)Obj)->leftDeviceReverseHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "leftDeviceReverseHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateRequest), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateRequest" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateRequest*)Obj)->leftDeviceForwardHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "leftDeviceForwardHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateRequest), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateRequest" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action = { UE4CodeGen_Private::EPropertyClass::Enum, "action", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleUpdateRequest, action), Z_Construct_UEnum_BrilliantSole_EBrilliantSoleActionEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceReverseHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_rightDeviceForwardHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceReverseHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_leftDeviceForwardHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::NewProp_action_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BrilliantSole,
		nullptr,
		&NewStructOps,
		"BrilliantSoleUpdateRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBrilliantSoleUpdateRequest),
		alignof(FBrilliantSoleUpdateRequest),
		Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BrilliantSole();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BrilliantSoleUpdateRequest"), sizeof(FBrilliantSoleUpdateRequest), Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest_CRC() { return 1893445648U; }
class UScriptStruct* FBrilliantSoleUpdateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BRILLIANTSOLE_API uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult, Z_Construct_UPackage__Script_BrilliantSole(), TEXT("BrilliantSoleUpdateResult"), sizeof(FBrilliantSoleUpdateResult), Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBrilliantSoleUpdateResult(FBrilliantSoleUpdateResult::StaticStruct, TEXT("/Script/BrilliantSole"), TEXT("BrilliantSoleUpdateResult"), false, nullptr, nullptr);
static struct FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateResult
{
	FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BrilliantSoleUpdateResult")),new UScriptStruct::TCppStructOps<FBrilliantSoleUpdateResult>);
	}
} ScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleUpdateResult;
	struct Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceReverseHaptic_MetaData[];
#endif
		static void NewProp_rightDeviceReverseHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rightDeviceReverseHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceForwardHaptic_MetaData[];
#endif
		static void NewProp_rightDeviceForwardHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rightDeviceForwardHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceReverseHaptic_MetaData[];
#endif
		static void NewProp_leftDeviceReverseHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leftDeviceReverseHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceForwardHaptic_MetaData[];
#endif
		static void NewProp_leftDeviceForwardHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leftDeviceForwardHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrilliantSoleUpdateResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateResult" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateResult*)Obj)->rightDeviceReverseHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "rightDeviceReverseHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateResult), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateResult" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateResult*)Obj)->rightDeviceForwardHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "rightDeviceForwardHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateResult), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateResult" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateResult*)Obj)->leftDeviceReverseHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "leftDeviceReverseHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateResult), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateResult" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic_SetBit(void* Obj)
	{
		((FBrilliantSoleUpdateResult*)Obj)->leftDeviceForwardHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic = { UE4CodeGen_Private::EPropertyClass::Bool, "leftDeviceForwardHaptic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleUpdateResult), &Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_status_MetaData[] = {
		{ "Category", "BrilliantSoleUpdateResult" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_status = { UE4CodeGen_Private::EPropertyClass::Str, "status", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleUpdateResult, status), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_status_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceReverseHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_rightDeviceForwardHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceReverseHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_leftDeviceForwardHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::NewProp_status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BrilliantSole,
		nullptr,
		&NewStructOps,
		"BrilliantSoleUpdateResult",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBrilliantSoleUpdateResult),
		alignof(FBrilliantSoleUpdateResult),
		Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BrilliantSole();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BrilliantSoleUpdateResult"), sizeof(FBrilliantSoleUpdateResult), Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult_CRC() { return 3724946221U; }
class UScriptStruct* FBrilliantSoleDevicesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BRILLIANTSOLE_API uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse, Z_Construct_UPackage__Script_BrilliantSole(), TEXT("BrilliantSoleDevicesResponse"), sizeof(FBrilliantSoleDevicesResponse), Get_Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBrilliantSoleDevicesResponse(FBrilliantSoleDevicesResponse::StaticStruct, TEXT("/Script/BrilliantSole"), TEXT("BrilliantSoleDevicesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleDevicesResponse
{
	FScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleDevicesResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BrilliantSoleDevicesResponse")),new UScriptStruct::TCppStructOps<FBrilliantSoleDevicesResponse>);
	}
} ScriptStruct_BrilliantSole_StaticRegisterNativesFBrilliantSoleDevicesResponse;
	struct Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rightDeviceRssi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rightDeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leftDeviceRssi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leftDeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isConnected_MetaData[];
#endif
		static void NewProp_isConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrilliantSoleDevicesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceRssi_MetaData[] = {
		{ "Category", "BrilliantSoleDevicesResponse" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceRssi = { UE4CodeGen_Private::EPropertyClass::Int, "rightDeviceRssi", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleDevicesResponse, rightDeviceRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceRssi_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceRssi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceName_MetaData[] = {
		{ "Category", "BrilliantSoleDevicesResponse" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "rightDeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleDevicesResponse, rightDeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceRssi_MetaData[] = {
		{ "Category", "BrilliantSoleDevicesResponse" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceRssi = { UE4CodeGen_Private::EPropertyClass::Int, "leftDeviceRssi", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleDevicesResponse, leftDeviceRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceRssi_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceRssi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceName_MetaData[] = {
		{ "Category", "BrilliantSoleDevicesResponse" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "leftDeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBrilliantSoleDevicesResponse, leftDeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected_MetaData[] = {
		{ "Category", "BrilliantSoleDevicesResponse" },
		{ "ModuleRelativePath", "Public/BrilliantSoleTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected_SetBit(void* Obj)
	{
		((FBrilliantSoleDevicesResponse*)Obj)->isConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected = { UE4CodeGen_Private::EPropertyClass::Bool, "isConnected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBrilliantSoleDevicesResponse), &Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceRssi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_rightDeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceRssi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_leftDeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::NewProp_isConnected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BrilliantSole,
		nullptr,
		&NewStructOps,
		"BrilliantSoleDevicesResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBrilliantSoleDevicesResponse),
		alignof(FBrilliantSoleDevicesResponse),
		Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BrilliantSole();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BrilliantSoleDevicesResponse"), sizeof(FBrilliantSoleDevicesResponse), Get_Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse_CRC() { return 3463386398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
