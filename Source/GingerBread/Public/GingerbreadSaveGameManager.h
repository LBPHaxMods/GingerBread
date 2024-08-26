#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveQueueEntry.h"
#include "GingerbreadSaveGameManager.generated.h"

class UGingerbreadSaveGlobalSettings;
class UGingerbreadSaveImageSet;
class UGingerbreadSaveSettings;
class UGingerbreadSaveUser;
class ULoadSaveWrapper;

UCLASS(Blueprintable)
class GINGERBREAD_API UGingerbreadSaveGameManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSaveQueueEntry> SaveQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSaveUser* m_default_main_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSaveImageSet* m_default_image_set_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSaveSettings* m_default_settings_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSaveGlobalSettings* m_default_global_settings_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadSaveWrapper* CrossPlatformTransferSaveData;
    
public:
    UGingerbreadSaveGameManager();

};

