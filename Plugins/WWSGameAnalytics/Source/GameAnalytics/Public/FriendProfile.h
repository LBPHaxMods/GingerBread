#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "FriendProfile.generated.h"

class UFriendProfile;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UFriendProfile : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> friend_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> block_list;
    
    UFriendProfile();

    UFUNCTION(BlueprintCallable)
    static UFriendProfile* NewFriendProfile();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

