#pragma once
#include "CoreMinimal.h"
#include "AppliedControlScheme.h"
#include "ESackboyActions.h"
#include "ESackboyActivity.h"
#include "SackboyBlueprintComponent_Base.h"
#include "ControlComponent.generated.h"

class UControlScheme;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UControlComponent : public USackboyBlueprintComponent_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UControlScheme*> AppliedSchemeTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppliedControlScheme> SchemeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppliedControlScheme EmptyControlScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UControlScheme*> SchemeCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* VirtualRemappingScheme;
    
public:
    UControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Remove(const UControlScheme* ControlSchemeTemplate);
    
    UFUNCTION(BlueprintCallable)
    bool PUSH(const UControlScheme* ControlSchemeTemplate);
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentControlSchemeEqual(const UControlScheme* ControlSchemeTemplate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityAllowed(ESackboyActivity Activity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppliedControlScheme GetCurrentControlScheme() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoundGamepadKeyNameForActionType(ESackboyActions ActionType, bool CheckAllPushedSchemes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoundGamepadKeyNameForActionName(FName ActionName, bool CheckAllPushedSchemes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Depth() const;
    
};

