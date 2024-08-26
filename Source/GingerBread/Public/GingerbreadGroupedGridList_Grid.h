#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadGroupedGridList_Grid.generated.h"

class UGingerbreadGridWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadGroupedGridList_Grid : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadGridWidget* InternalGrid;
    
    UGingerbreadGroupedGridList_Grid();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGridData();
    
private:
    UFUNCTION(BlueprintCallable)
    void AssignInternalGrid(UGingerbreadGridWidget* Grid);
    
};

