#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGruntyStackBehaviourState.h"
#include "EGruntyStackPosition.h"
#include "OnStackDetatchedDelegate.h"
#include "OnStackPositionChangedDelegate.h"
#include "GruntyStackComponent.generated.h"

class AGruntyStack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyStackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketBottomAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketTopAttachName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStackDetatched OnDetachedFromStack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStackPositionChanged OnStackPositionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EGruntyStackBehaviourState StackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EGruntyStackPosition StackPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberPreDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberPostDamagePreDetachTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberPostDetachPreRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberLandAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberThrowDistConstOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimberThrowDistBetweenGruntys;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGruntyStack> CurrentStack;
    
public:
    UGruntyStackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartTimberAttack();
    
    UFUNCTION(BlueprintCallable)
    void StartCrashDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGruntyStackBehaviourState GetStackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGruntyStackPosition GetStackPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGruntyStack* GetStackActor();
    
    UFUNCTION(BlueprintCallable)
    bool DetachSelfFromStack();
    
    UFUNCTION(BlueprintCallable)
    void DetachEntireStack();
    
};

