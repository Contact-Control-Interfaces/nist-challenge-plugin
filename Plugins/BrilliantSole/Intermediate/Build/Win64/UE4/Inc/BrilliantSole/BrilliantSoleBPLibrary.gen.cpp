// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrilliantSole/Public/BrilliantSoleBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrilliantSoleBPLibrary() {}
// Cross Module References
	BRILLIANTSOLE_API UClass* Z_Construct_UClass_UBrilliantSoleBPLibrary_NoRegister();
	BRILLIANTSOLE_API UClass* Z_Construct_UClass_UBrilliantSoleBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BrilliantSole();
	BRILLIANTSOLE_API UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse();
	BRILLIANTSOLE_API UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult();
	BRILLIANTSOLE_API UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest();
	BRILLIANTSOLE_API UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest();
	BRILLIANTSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest();
// End Cross Module References
	void UBrilliantSoleBPLibrary::StaticRegisterNativesUBrilliantSoleBPLibrary()
	{
		UClass* Class = UBrilliantSoleBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedDevicesResponse", &UBrilliantSoleBPLibrary::execGetCachedDevicesResponse },
			{ "GetCachedUpdateResult", &UBrilliantSoleBPLibrary::execGetCachedUpdateResult },
			{ "SendStateRequest", &UBrilliantSoleBPLibrary::execSendStateRequest },
			{ "SendUpdateRequest", &UBrilliantSoleBPLibrary::execSendUpdateRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics
	{
		struct BrilliantSoleBPLibrary_eventGetCachedDevicesResponse_Parms
		{
			FBrilliantSoleDevicesResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BrilliantSoleBPLibrary_eventGetCachedDevicesResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FBrilliantSoleDevicesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Brilliant Sole" },
		{ "DisplayName", "Get Cached State" },
		{ "Keywords", "Brilliant Sole BrilliantSole cached devices response state" },
		{ "ModuleRelativePath", "Public/BrilliantSoleBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrilliantSoleBPLibrary, "GetCachedDevicesResponse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BrilliantSoleBPLibrary_eventGetCachedDevicesResponse_Parms), Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics
	{
		struct BrilliantSoleBPLibrary_eventGetCachedUpdateResult_Parms
		{
			FBrilliantSoleUpdateResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BrilliantSoleBPLibrary_eventGetCachedUpdateResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FBrilliantSoleUpdateResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Brilliant Sole" },
		{ "DisplayName", "Get Cached Update Result" },
		{ "Keywords", "Brilliant Sole BrilliantSole cached update result response" },
		{ "ModuleRelativePath", "Public/BrilliantSoleBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrilliantSoleBPLibrary, "GetCachedUpdateResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BrilliantSoleBPLibrary_eventGetCachedUpdateResult_Parms), Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Brilliant Sole" },
		{ "DisplayName", "Send State Request" },
		{ "Keywords", "Brilliant Sole BrilliantSole request state" },
		{ "ModuleRelativePath", "Public/BrilliantSoleBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrilliantSoleBPLibrary, "SendStateRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics
	{
		struct BrilliantSoleBPLibrary_eventSendUpdateRequest_Parms
		{
			FBrilliantSoleUpdateRequest data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BrilliantSoleBPLibrary_eventSendUpdateRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Struct, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BrilliantSoleBPLibrary_eventSendUpdateRequest_Parms, data), Z_Construct_UScriptStruct_FBrilliantSoleUpdateRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Brilliant Sole" },
		{ "DisplayName", "Send Update Request" },
		{ "Keywords", "Brilliant Sole BrilliantSole request update" },
		{ "ModuleRelativePath", "Public/BrilliantSoleBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrilliantSoleBPLibrary, "SendUpdateRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BrilliantSoleBPLibrary_eventSendUpdateRequest_Parms), Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBrilliantSoleBPLibrary_NoRegister()
	{
		return UBrilliantSoleBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BrilliantSole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedDevicesResponse, "GetCachedDevicesResponse" }, // 1259166905
		{ &Z_Construct_UFunction_UBrilliantSoleBPLibrary_GetCachedUpdateResult, "GetCachedUpdateResult" }, // 2694092103
		{ &Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendStateRequest, "SendStateRequest" }, // 2557008528
		{ &Z_Construct_UFunction_UBrilliantSoleBPLibrary_SendUpdateRequest, "SendUpdateRequest" }, // 3812230754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BrilliantSoleBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BrilliantSoleBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrilliantSoleBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::ClassParams = {
		&UBrilliantSoleBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrilliantSoleBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrilliantSoleBPLibrary, 1750959183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrilliantSoleBPLibrary(Z_Construct_UClass_UBrilliantSoleBPLibrary, &UBrilliantSoleBPLibrary::StaticClass, TEXT("/Script/BrilliantSole"), TEXT("UBrilliantSoleBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrilliantSoleBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
