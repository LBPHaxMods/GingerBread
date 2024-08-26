#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "score.generated.h"

class Uscore;

UCLASS(Blueprintable)
class GAMEANALYTICS_API Uscore : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score_value;
    
    Uscore();

    UFUNCTION(BlueprintCallable)
    static Uscore* Newscore();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

