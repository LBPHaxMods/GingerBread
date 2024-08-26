#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GingerbreadPlayerId.h"
#include "CostumePartPermission.generated.h"

class UGingerbreadNotificationHUDComponent;

UCLASS(Blueprintable)
class UCostumePartPermission : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadNotificationHUDComponent* mpNotificationComponent;
    
public:
    UCostumePartPermission();

    UFUNCTION(BlueprintCallable)
    void OnCostumeThumbnailsReady(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnCostumePartNoPermission(const FGingerbreadPlayerId& PlayerId, int32 HangerID, const FName& costumeName);
    
    UFUNCTION(BlueprintCallable)
    void NotificationCallback(int32 iresult);
    
};

