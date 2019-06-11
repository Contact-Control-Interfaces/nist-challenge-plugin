// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBrilliantSoleUpdateResult;
struct FBrilliantSoleDevicesResponse;
struct FBrilliantSoleUpdateRequest;
#ifdef BRILLIANTSOLE_BrilliantSoleBPLibrary_generated_h
#error "BrilliantSoleBPLibrary.generated.h already included, missing '#pragma once' in BrilliantSoleBPLibrary.h"
#endif
#define BRILLIANTSOLE_BrilliantSoleBPLibrary_generated_h

#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedUpdateResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBrilliantSoleUpdateResult*)Z_Param__Result=UBrilliantSoleBPLibrary::GetCachedUpdateResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedDevicesResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBrilliantSoleDevicesResponse*)Z_Param__Result=UBrilliantSoleBPLibrary::GetCachedDevicesResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUpdateRequest) \
	{ \
		P_GET_STRUCT(FBrilliantSoleUpdateRequest,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBrilliantSoleBPLibrary::SendUpdateRequest(Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStateRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBrilliantSoleBPLibrary::SendStateRequest(); \
		P_NATIVE_END; \
	}


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedUpdateResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBrilliantSoleUpdateResult*)Z_Param__Result=UBrilliantSoleBPLibrary::GetCachedUpdateResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedDevicesResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBrilliantSoleDevicesResponse*)Z_Param__Result=UBrilliantSoleBPLibrary::GetCachedDevicesResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUpdateRequest) \
	{ \
		P_GET_STRUCT(FBrilliantSoleUpdateRequest,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBrilliantSoleBPLibrary::SendUpdateRequest(Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStateRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBrilliantSoleBPLibrary::SendStateRequest(); \
		P_NATIVE_END; \
	}


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrilliantSoleBPLibrary(); \
	friend struct Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBrilliantSoleBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BrilliantSole"), NO_API) \
	DECLARE_SERIALIZER(UBrilliantSoleBPLibrary)


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBrilliantSoleBPLibrary(); \
	friend struct Z_Construct_UClass_UBrilliantSoleBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBrilliantSoleBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BrilliantSole"), NO_API) \
	DECLARE_SERIALIZER(UBrilliantSoleBPLibrary)


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrilliantSoleBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrilliantSoleBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrilliantSoleBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrilliantSoleBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrilliantSoleBPLibrary(UBrilliantSoleBPLibrary&&); \
	NO_API UBrilliantSoleBPLibrary(const UBrilliantSoleBPLibrary&); \
public:


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrilliantSoleBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrilliantSoleBPLibrary(UBrilliantSoleBPLibrary&&); \
	NO_API UBrilliantSoleBPLibrary(const UBrilliantSoleBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrilliantSoleBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrilliantSoleBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrilliantSoleBPLibrary)


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_27_PROLOG
#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_RPC_WRAPPERS \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_INCLASS \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BrilliantSoleBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Users_info_Desktop_Temp_BrilliantSole_HostProject_Plugins_BrilliantSole_Source_BrilliantSole_Public_BrilliantSoleBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
