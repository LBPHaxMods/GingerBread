#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutomationTestRunner_Base.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AAutomationTestRunner_Base : public AActor {
    GENERATED_BODY()
public:
    AAutomationTestRunner_Base(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartMap();
    
    UFUNCTION(BlueprintCallable)
    void EndMap(const FString& reason);
    
    UFUNCTION(BlueprintCallable)
    void BeginVideoRecording();
    
    UFUNCTION(BlueprintCallable)
    void AddTest(const FString& testName);
    
    UFUNCTION(BlueprintCallable)
    void AddSection(const FString& sectionName);
    
    UFUNCTION(BlueprintCallable)
    void AddResult(const FString& resultName, const FString& resultDescription, const bool resultOutcome, const float resultTime);
    
};

