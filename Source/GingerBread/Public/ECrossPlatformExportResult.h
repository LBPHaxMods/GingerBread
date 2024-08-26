#pragma once
#include "CoreMinimal.h"
#include "ECrossPlatformExportResult.generated.h"

UENUM(BlueprintType)
enum class ECrossPlatformExportResult : uint8 {
    Undefined,
    OK,
    No,
    Failed = 128,
    ConnectionIssue,
    UploadIssue,
    DownloadIssue,
    NotSignedIn,
};

