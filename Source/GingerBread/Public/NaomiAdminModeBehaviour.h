#pragma once
#include "CoreMinimal.h"
#include "NaomiBehaviour.h"
#include "NaomiAdminModeBehaviour.generated.h"

class ANaomiSecretFile;

UCLASS(Blueprintable)
class GINGERBREAD_API UNaomiAdminModeBehaviour : public UNaomiBehaviour {
    GENERATED_BODY()
public:
    UNaomiAdminModeBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void OnSingleCorruptionDestroyed(ANaomiSecretFile* SecretFile);
    
    UFUNCTION(BlueprintCallable)
    void OnAllCorruptionsDestroyed(ANaomiSecretFile* SecretFile);
    
};

