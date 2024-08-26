#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "EVANBeginPlayMode.h"
#include "VertexAnimatedMeshClipPlayEndSignatureDelegate.h"
#include "VertexAnimatedMeshClipPlayLoopSignatureDelegate.h"
#include "VertexAnimatedMeshClipPlayStartSignatureDelegate.h"
#include "VertexAnimatedMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStickerMesh;
class UVertexAnimationSequence;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UVertexAnimatedMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimatedMeshClipPlayStartSignature OnClipPlayStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimatedMeshClipPlayEndSignature OnClipPlayEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimatedMeshClipPlayLoopSignature OnClipPlayLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStickerMesh* StickerMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LocalOverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> LocalOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimationSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateSequenceInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPS_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPS_Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomTimeOffsetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVANBeginPlayMode::Type> PlayModeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClipAnimReverse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipLoopCounter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VaposMapName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VanMapName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedMaterials;
    
    UVertexAnimatedMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(bool RESET);
    
    UFUNCTION(BlueprintCallable)
    UVertexAnimationSequence* SetSequence(UVertexAnimationSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentClip(int32 Index, bool PlayFromStart);
    
    UFUNCTION(BlueprintCallable)
    void SetClipTime(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMesh();
    
    UFUNCTION(BlueprintCallable)
    void QueueClip(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Play(bool RESET);
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClipQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVertexAnimationSequence* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQueuedClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClipTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClipDuration(int32 Index) const;
    
};

