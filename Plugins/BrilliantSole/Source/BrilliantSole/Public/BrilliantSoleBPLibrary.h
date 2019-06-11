// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BrilliantSoleTypes.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "BrilliantSoleBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UBrilliantSoleBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static FBrilliantSoleDevicesResponse cachedDevicesResponse;
	static FBrilliantSoleUpdateResult cachedUpdateResult;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send State Request", Keywords = "Brilliant Sole BrilliantSole request state"), Category = "Brilliant Sole")
	static void SendStateRequest();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send Update Request", Keywords = "Brilliant Sole BrilliantSole request update"), Category = "Brilliant Sole")
	static FString SendUpdateRequest(FBrilliantSoleUpdateRequest data);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Cached State", Keywords = "Brilliant Sole BrilliantSole cached devices response state"), Category = "Brilliant Sole")
	static FBrilliantSoleDevicesResponse GetCachedDevicesResponse();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Cached Update Result", Keywords = "Brilliant Sole BrilliantSole cached update result response"), Category = "Brilliant Sole")
	static FBrilliantSoleUpdateResult GetCachedUpdateResult();

private:
	static void OnStateReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	static void OnUpdateReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
