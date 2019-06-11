// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BrilliantSoleBPLibrary.h"
#include "BrilliantSole.h"

// Make room for the cached data
FBrilliantSoleDevicesResponse UBrilliantSoleBPLibrary::cachedDevicesResponse = {};
FBrilliantSoleUpdateResult UBrilliantSoleBPLibrary::cachedUpdateResult = {};

UBrilliantSoleBPLibrary::UBrilliantSoleBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FBrilliantSoleDevicesResponse UBrilliantSoleBPLibrary::GetCachedDevicesResponse() {
	return cachedDevicesResponse;
}

FBrilliantSoleUpdateResult UBrilliantSoleBPLibrary::GetCachedUpdateResult() {
	return cachedUpdateResult;
}

void UBrilliantSoleBPLibrary::SendStateRequest() {
	//TODO store this request
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindStatic(&UBrilliantSoleBPLibrary::OnStateReceived);
	Request->SetURL("http://localhost:9000/api/devices");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

void UBrilliantSoleBPLibrary::OnStateReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
	if (bWasSuccessful) {
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

		// Deserialize and update cached devices response
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			cachedDevicesResponse.updateFromJSON(JsonObject);
		}
	}
}

FString UBrilliantSoleBPLibrary::SendUpdateRequest(FBrilliantSoleUpdateRequest data) {
	// Save and return update request body for debug
	FString temp = data.toString();

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindStatic(&UBrilliantSoleBPLibrary::OnUpdateReceived);
	Request->SetURL("http://localhost:9000/api/devices");
	Request->SetContentAsString(temp);
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
	return temp;
}

void UBrilliantSoleBPLibrary::OnUpdateReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
	if (bWasSuccessful) {
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

		// Deserialize and update cached update result
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			cachedUpdateResult.updateFromJSON(JsonObject);
		}
	}
}

