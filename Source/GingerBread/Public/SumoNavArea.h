#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "SumoNavArea.generated.h"

UCLASS(Blueprintable, HideDropdown, Config=Engine)
class USumoNavArea : public UNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationFilterFlags NavAreaFlags;
    
    USumoNavArea();

};

