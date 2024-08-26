#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCEAutomationActor.generated.h"

class UGetActorsContaining;
class UGetPlayerInfo;
class UGetSystemInfo;
class USCEConsoleCommand;
class USetPositionBP;
class USetRelPositionBP;
class USetToActorPosition;
class UToggleDebugMessages;

UCLASS(Blueprintable)
class GINGERBREAD_API ASCEAutomationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShowDebugMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGetActorsContaining* GetActorsContaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGetPlayerInfo* GetPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGetSystemInfo* GetSystemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USetPositionBP* SetPositionBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USetRelPositionBP* SetRelPositionBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USetToActorPosition* SetToActorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UToggleDebugMessages* ToggleDebugMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCEConsoleCommand* doConsoleCommand;
    
    ASCEAutomationActor(const FObjectInitializer& ObjectInitializer);

};

