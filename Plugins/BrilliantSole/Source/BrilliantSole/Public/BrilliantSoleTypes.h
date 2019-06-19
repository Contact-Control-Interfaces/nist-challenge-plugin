#pragma once
#include "Engine.h"
#include "JsonObjectConverter.h"
#include "BrilliantSoleTypes.generated.h"

/*
 * This file is meant to hold all type definitions for the BrilliantSoleModule.
 * As a result, this file defines what constitutes each request body and how to interpret responses.
 */

UENUM(BlueprintType)
enum class EBrilliantSoleActionEnum : uint8
{
	UPDATE	UMETA(DisplayName = "Update"),
	VIBRATE	UMETA(DisplayName = "Vibrate")
};

USTRUCT(BlueprintType)
struct FBrilliantSoleDevicesResponse {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool isConnected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString leftDeviceName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 leftDeviceRssi;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString rightDeviceName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 rightDeviceRssi;

	FBrilliantSoleDevicesResponse() {
		isConnected = false;
		leftDeviceName = rightDeviceName = "null";
		leftDeviceRssi = rightDeviceRssi = 0;
	}

	void updateFromJSON(TSharedPtr<FJsonObject> json) {
		isConnected = json->GetStringField("state") == "Connected";
		leftDeviceName = json->GetStringField("leftDeviceName");
		leftDeviceRssi = json->GetIntegerField("leftDeviceRssi");
		rightDeviceName = json->GetStringField("rightDeviceName");
		rightDeviceRssi = json->GetIntegerField("rightDeviceRssi");
	}
};

USTRUCT(BlueprintType)
struct FBrilliantSoleUpdateResult {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString status;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool leftDeviceForwardHaptic;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool leftDeviceReverseHaptic;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool rightDeviceForwardHaptic;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool rightDeviceReverseHaptic;

	FBrilliantSoleUpdateResult() {
		leftDeviceForwardHaptic = leftDeviceReverseHaptic = rightDeviceForwardHaptic = rightDeviceReverseHaptic = false;
		status = "";
	}

	void updateFromJSON(TSharedPtr<FJsonObject> json) {
		status = json->GetStringField("status");
		leftDeviceForwardHaptic = json->GetBoolField("leftDeviceForwardHaptic");
		leftDeviceReverseHaptic = json->GetBoolField("leftDeviceReverseHaptic");
		rightDeviceForwardHaptic = json->GetBoolField("rightDeviceForwardHaptic");
		rightDeviceReverseHaptic = json->GetBoolField("rightDeviceReverseHaptic");
	}
};

USTRUCT(BlueprintType)
struct FBrilliantSoleUpdateRequest {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBrilliantSoleActionEnum action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool leftDeviceForwardHaptic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool leftDeviceReverseHaptic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool rightDeviceForwardHaptic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool rightDeviceReverseHaptic;

	FBrilliantSoleUpdateRequest() {
		leftDeviceForwardHaptic = leftDeviceReverseHaptic = rightDeviceForwardHaptic = rightDeviceReverseHaptic = false;
	}

	/*
	 * Generates body for update request 
	 */
	FString toString(){
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

		JsonObject->SetStringField("action", this->action == EBrilliantSoleActionEnum::UPDATE ? "update" : "vibrate");
		JsonObject->SetBoolField("leftDeviceForwardHaptic", this->leftDeviceForwardHaptic);
		JsonObject->SetBoolField("leftDeviceReverseHaptic", this->leftDeviceReverseHaptic);
		JsonObject->SetBoolField("rightDeviceForwardHaptic", this->rightDeviceForwardHaptic);
		JsonObject->SetBoolField("rightDeviceReverseHaptic", this->rightDeviceReverseHaptic);

		FString OutputString;
		TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
		FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
		return OutputString;
	}
};