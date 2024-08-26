#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStickerLevelType.h"
#include "EStickerMeshAnimMode.h"
#include "StickerMesh.generated.h"

class UDataTable;
class UMaterialInstance;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class GINGERBREAD_API UStickerMesh : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStickerMeshAnimMode::Type> AnimMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStickerLevelType::Type> StickerLevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaterialDataTable;
    
public:
    UStickerMesh();

};

