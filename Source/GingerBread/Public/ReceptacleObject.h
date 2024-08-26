#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ReceptacleObject.generated.h"

class ACritterReceptacle;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UReceptacleObject : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IReceptacleObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitReceptacleBP(ACritterReceptacle* Receptacle);
    
    UFUNCTION()
    virtual void OnExitReceptacle(ACritterReceptacle* Receptacle) PURE_VIRTUAL(OnExitReceptacle,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterReceptacleBP(ACritterReceptacle* Receptacle);
    
    UFUNCTION()
    virtual void OnEnterReceptacle(ACritterReceptacle* Receptacle) PURE_VIRTUAL(OnEnterReceptacle,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEjectedByReceptacleBP(ACritterReceptacle* Receptacle);
    
    UFUNCTION()
    virtual void OnEjectedByReceptacle(ACritterReceptacle* Receptacle) PURE_VIRTUAL(OnEjectedByReceptacle,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyByReceptacleBP(ACritterReceptacle* Receptacle);
    
    UFUNCTION()
    virtual void OnDestroyByReceptacle(ACritterReceptacle* Receptacle) PURE_VIRTUAL(OnDestroyByReceptacle,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountedByReceptacleBP(ACritterReceptacle* Receptacle);
    
    UFUNCTION()
    virtual void OnCountedByReceptacle(ACritterReceptacle* Receptacle) PURE_VIRTUAL(OnCountedByReceptacle,);
    
};

