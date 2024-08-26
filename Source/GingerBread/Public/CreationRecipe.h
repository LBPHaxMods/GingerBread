#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "RecipeCriteria.h"
#include "Templates/SubclassOf.h"
#include "CreationRecipe.generated.h"

class UCreationHandlingConfig;

UCLASS(Blueprintable)
class GINGERBREAD_API UCreationRecipe : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecipeCriteria> SimpleAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecipeCriteria> ThreadedAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecipePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecipeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreationHandlingConfig> HandlingConfig;
    
    UCreationRecipe();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredAttachment(const FDataTableRowHandle& CreationTypeA, const FDataTableRowHandle& CreationTypeB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachmentRequired(const FName CreationTypeA, const FName CreationTypeB) const;
    
};

