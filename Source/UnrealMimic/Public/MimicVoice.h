
#pragma once

#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

#include "Windows/AllowWindowsPlatformTypes.h" 
#include "mimic.h"
#include "cst_voice.h"

#include "MimicVoice.generated.h"

UCLASS(hidecategories=Object, BlueprintType)
class UNREALMIMIC_API UMimicVoice : public UObject
{
	GENERATED_BODY()
public:

	void Serialize(FArchive& Ar) override;

	UPROPERTY()
	FString FilePath;

	cst_voice* Vox;

	UFUNCTION(BlueprintCallable, Category = "TTS")
	void Init();

	UFUNCTION(BlueprintCallable, Category="TTS")
	class USoundWaveProcedural* Say(FString Text);

	//FUntypedBulkData BulkData;

};
