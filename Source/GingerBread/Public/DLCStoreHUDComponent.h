#pragma once
#include "CoreMinimal.h"
#include "DLCProductTileData.h"
#include "DLCPromotionTileData.h"
#include "EPromotionAreaTileSize.h"
#include "GingerbreadHUDComponent.h"
#include "PSNProductId.h"
#include "UnlockDetails.h"
#include "UnlockableItemTag.h"
#include "DLCStoreHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDLCStoreHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoreContentRefreshSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> CategoryIdToDisplayTextMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CostFreeText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackedOutWhileConnecting;
    
public:
    UDLCStoreHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendItemDetailViewTelemetry(const FPSNProductId& Product);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestStoreConnection();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromCart(const FPSNProductId& ProductID);
    
    UFUNCTION(BlueprintCallable)
    bool RefreshPromotionTiles();
    
    UFUNCTION(BlueprintCallable)
    FDLCPromotionTileData RefreshPromotionData(const FDLCPromotionTileData& PromotionData);
    
    UFUNCTION(BlueprintCallable)
    void RecyclePromotion(int32 PromotionID);
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemCodeEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenDLCStore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProductsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDLCOpenSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDLCOpenFail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDLCOpenEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckoutResponse(bool Successful);
    
    UFUNCTION(BlueprintCallable)
    bool LaunchCheckout();
    
    UFUNCTION(BlueprintCallable)
    bool IsItemInCart(const FPSNProductId& ProductID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOpenedSuccessfully() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConnectionFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttemptedConnection() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleAllProductsOwned();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDLCProductTileData> GetProductsInCart();
    
    UFUNCTION(BlueprintCallable)
    bool GetProductDataFromID(const FPSNProductId& ProductID, FDLCProductTileData& OutProduct);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumItemsInCart();
    
    UFUNCTION(BlueprintCallable)
    bool GetNextPromotion(EPromotionAreaTileSize DesiredSize, const TArray<int32>& PromotionIDsToSkip, FDLCPromotionTileData& OutPromotion);
    
    UFUNCTION(BlueprintCallable)
    FUnlockDetails GetItemUnlockDetails(const FUnlockableItemTag& ItemTag);
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrencyCode();
    
    UFUNCTION(BlueprintCallable)
    FText GetCategoryTextFromId(UPARAM(Ref) FString& CategoryId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDLCProductTileData> GetCategoryProducts(UPARAM(Ref) FString& CategoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseDLCStore();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearStoreConnectionAttempt();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItemToCart(const FPSNProductId& ProductID);
    
};

