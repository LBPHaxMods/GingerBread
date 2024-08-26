#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugVariableInfo.h"
#include "DebugNode.generated.h"

class UDebugNode;
class UGingerbreadWidgetElement;

UCLASS(Blueprintable)
class UDebugNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugNode*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugVariableInfo VariableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetElement* NodeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetElement* ChildrenWidgetContainer;
    
    UDebugNode();

    UFUNCTION(BlueprintCallable)
    UGingerbreadWidgetElement* GetParentNodeWidget();
    
};

