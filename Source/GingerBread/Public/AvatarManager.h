#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AvatarManager.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable)
class GINGERBREAD_API UAvatarManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2DDynamic*> AvatarUrlToTextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2DDynamic*> AvatarTextureMap;
    
public:
    UAvatarManager();

};

