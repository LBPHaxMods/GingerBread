#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Attachment.h"
#include "CraftPlatformable.h"
#include "EAttachmentType.h"
#include "EChassisType.h"
#include "ThrowInfo.h"
#include "CreationAdditiveComponent.generated.h"

class AActor;
class AGingerbreadPlayerController;
class UCreationBaseComponent;
class UCreationRecipe;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCreationAdditiveComponent : public UActorComponent, public ICraftPlatformable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CreationObjectType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachment> SimpleAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachment> ThreadedAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachment> OtherAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowInfo ThrowInfo;
    
public:
    UCreationAdditiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecipeSatisfiedBP(bool bIsSatisfied, UCreationRecipe* SatisfiedRecipe, AActor* BaseObject);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetachBP(EAttachmentType AttachmentType, AActor* DetachedFromObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreationEnabledBP(bool bEnabled, const TArray<AGingerbreadPlayerController*>& PlayerControllers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachBP(EAttachmentType AttachmentType, AActor* AttachedToObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRecipes(TArray<UCreationRecipe*>& AllRecipes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConnectedActors(TArray<AActor*>& ConnectedActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EChassisType> GetChassisType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCreationBaseComponent* GetBaseCreationComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBaseCreationActor();
    
    UFUNCTION(BlueprintCallable)
    void GetAdditiveActorsByType(const TArray<FName>& AdditiveTypes, TArray<AActor*>& AdditiveActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindFirstAdditiveActor(const FName AdditiveType, TArray<AActor*>& AdditiveActors);
    
    UFUNCTION(BlueprintCallable)
    void ExitCraftingPlatform(AActor* CraftingPlatform);
    
    UFUNCTION(BlueprintCallable)
    void EnterCraftingPlatform(AActor* CraftingPlatform);
    
    UFUNCTION(BlueprintCallable)
    void EnableCreation(bool bEnable, const TArray<AGingerbreadPlayerController*>& PlayerControllers);
    

    // Fix for true pure virtual functions not being implemented
};

