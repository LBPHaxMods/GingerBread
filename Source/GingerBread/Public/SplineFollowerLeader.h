#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineLeaderSubject.h"
#include "SplineFollowerLeader.generated.h"

class USceneComponent;
class USplineComponent;
class USplineFollowerComponent;

UCLASS(Blueprintable)
class ASplineFollowerLeader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollowerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSplineLeaderSubject> SplineLeaderSubjects;
    
public:
    ASplineFollowerLeader(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnpauseSubjectActor(AActor* Subject);
    
    UFUNCTION(BlueprintCallable)
    void UnpauseSubject(USceneComponent* Subject);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetUp(USplineComponent* SplineComponent, bool Replicates, bool UseCSP, float CustomCSPDelay);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubjectActor(AActor* Subject, float SplinePosition);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubject(USceneComponent* Subject, float SplinePosition);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSceneComponent(USceneComponent* Subject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* Subject);
    
    UFUNCTION(BlueprintCallable)
    void PauseSubjectActor(AActor* Subject);
    
    UFUNCTION(BlueprintCallable)
    void PauseSubject(USceneComponent* Subject);
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
    UFUNCTION(BlueprintCallable)
    bool HasSubjects();
    
    UFUNCTION(BlueprintCallable)
    float GetSubjectSplinePosition(USceneComponent* Subject);
    
    UFUNCTION(BlueprintCallable)
    float GetSubjectActorSplinePosition(AActor* Subject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCSPDelay();
    
    UFUNCTION(BlueprintCallable)
    void AddSceneComponents(TArray<USceneComponent*> Subjects, float Spacing);
    
    UFUNCTION(BlueprintCallable)
    void AddSceneComponent(USceneComponent* Subject, float Position);
    
    UFUNCTION(BlueprintCallable)
    void AddActors(TArray<AActor*> Subjects, float Spacing);
    
    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* Subject, float Position);
    
};

