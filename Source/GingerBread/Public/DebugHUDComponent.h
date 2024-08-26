#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "DebugHUDComponent.generated.h"

class UDataTable;
class UDebugNode;
class UDebugOptionsCreator;
class UGingerbreadDebugManager;
class UGingerbreadWidgetElement;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDebugHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelNamesDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadDebugManager* DebugManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugOptionsCreator* OptionsCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugNode*> DebugMenuNodes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMenuVisible;
    
public:
    UDebugHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowDebugHUD(bool Show);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVariableRemoved(const FName variablePath);
    
    UFUNCTION(BlueprintCallable)
    void OnVariableAdded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabFocusChanged(UGingerbreadWidgetElement* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRightPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPreviousPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPageUpPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPageDownPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnNextPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnLeftPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnDownPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackPressed();
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugHUD(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNewTab(FName TabName, UDebugNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNewMenu(FName menuName, UDebugNode* Node, bool isComboBox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNewExecutable(FName menuName, UDebugNode* Node);
    
};

