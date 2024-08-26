#pragma once
#include "CoreMinimal.h"
#include "DuopedeSegment.h"
#include "VexableDuopedeSegment.generated.h"

class UMaterialInterface;
class UParticleSystemComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class AVexableDuopedeSegment : public ADuopedeSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* VexedParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* VexedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> VexedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* NonVexedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> NonVexedMaterials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVexed, meta=(AllowPrivateAccess=true))
    bool IsVexed;
    
public:
    AVexableDuopedeSegment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsVexed(bool InIsVexed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVexed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVexed() const;
    
};

