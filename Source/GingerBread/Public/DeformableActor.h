#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SackboyWalkable.h"
#include "DeformableActor.generated.h"

class UDeformableMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ADeformableActor : public AActor, public ISackboyWalkable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeformableMeshComponent* Mesh;
    
public:
    ADeformableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReinflateMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MeshGeneration();
    

    // Fix for true pure virtual functions not being implemented
};

