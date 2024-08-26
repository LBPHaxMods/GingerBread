#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "MenuScreen.generated.h"

class UMenuScreen;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UMenuScreen : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString menu_screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString extended_screen_options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString referrer_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString referrer;
    
    UMenuScreen();

    UFUNCTION(BlueprintCallable)
    static UMenuScreen* NewMenuScreen();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _menu_screen);
    
};

