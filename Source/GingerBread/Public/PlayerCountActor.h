#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCountActor.generated.h"

UCLASS()
class GINGERBREAD_API APlayerCountActor : public AActor
{
    GENERATED_BODY()


public:   
    // Bitfield for player counts
    uint8 bOnePlayer : 1;    // Mask: 0x1
    uint8 bTwoPlayer : 1;    // Mask: 0x2
    uint8 bThreePlayer : 1;  // Mask: 0x4
    uint8 bFourPlayer : 1;   // Mask: 0x8

    // Padding to align the struct size
    uint8 Pad_3C5[0x7];  // Fixes the struct size to align properly

    // Function to check if a specific player count is set to appear
    bool IsSetToAppear(int32 PlayerCount);
};
