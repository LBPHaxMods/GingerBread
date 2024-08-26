#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GingerbreadWidgetElement.h"
#include "PersistentLevelData2.h"
#include "VoidSelectWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVoidSelectWidgetBase : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LevelReference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSeenBefore;
    
public:
    UVoidSelectWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetSeenBefore();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelMastered(const FPersistentLevelData2& LevelData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSeenBefore() const;
    
};

