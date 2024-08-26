#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialMappedObject.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FMusicMaterialMappedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingsUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMeshComponent> TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MusicMatToMeshSlot;
    
    GINGERBREAD_API FMusicMaterialMappedObject();
};

