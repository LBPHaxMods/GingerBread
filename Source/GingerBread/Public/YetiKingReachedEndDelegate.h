#pragma once
#include "CoreMinimal.h"
#include "YetiKingReachedEndDelegate.generated.h"

class AYetiKing;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYetiKingReachedEnd, AYetiKing*, YetiKing);

