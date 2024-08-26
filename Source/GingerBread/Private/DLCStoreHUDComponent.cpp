#include "DLCStoreHUDComponent.h"

UDLCStoreHUDComponent::UDLCStoreHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoreContentRefreshSeconds = 300.00f;
    this->LastRefreshTime = 0.00f;
    this->BackedOutWhileConnecting = false;
}

void UDLCStoreHUDComponent::SendItemDetailViewTelemetry(const FPSNProductId& Product) {
}

bool UDLCStoreHUDComponent::RequestStoreConnection() {
    return false;
}

void UDLCStoreHUDComponent::RemoveItemFromCart(const FPSNProductId& ProductID) {
}

bool UDLCStoreHUDComponent::RefreshPromotionTiles() {
    return false;
}

FDLCPromotionTileData UDLCStoreHUDComponent::RefreshPromotionData(const FDLCPromotionTileData& PromotionData) {
    return FDLCPromotionTileData{};
}

void UDLCStoreHUDComponent::RecyclePromotion(int32 PromotionID) {
}

void UDLCStoreHUDComponent::OpenSystemCodeEntry() {
}

void UDLCStoreHUDComponent::OpenDLCStore_Implementation() {
}

void UDLCStoreHUDComponent::OnProductsUpdated_Implementation() {
}

void UDLCStoreHUDComponent::OnDLCOpenSuccess_Implementation() {
}

void UDLCStoreHUDComponent::OnDLCOpenFail_Implementation() {
}

void UDLCStoreHUDComponent::OnDLCOpenEmpty_Implementation() {
}

void UDLCStoreHUDComponent::OnCheckoutResponse_Implementation(bool Successful) {
}

bool UDLCStoreHUDComponent::LaunchCheckout() {
    return false;
}

bool UDLCStoreHUDComponent::IsItemInCart(const FPSNProductId& ProductID) {
    return false;
}

bool UDLCStoreHUDComponent::IsConnecting() const {
    return false;
}

bool UDLCStoreHUDComponent::IsConnected() const {
    return false;
}

bool UDLCStoreHUDComponent::HasOpenedSuccessfully() const {
    return false;
}

bool UDLCStoreHUDComponent::HasConnectionFailed() const {
    return false;
}

bool UDLCStoreHUDComponent::HasAttemptedConnection() const {
    return false;
}

void UDLCStoreHUDComponent::HandleAllProductsOwned() {
}

TArray<FDLCProductTileData> UDLCStoreHUDComponent::GetProductsInCart() {
    return TArray<FDLCProductTileData>();
}

bool UDLCStoreHUDComponent::GetProductDataFromID(const FPSNProductId& ProductID, FDLCProductTileData& OutProduct) {
    return false;
}

int32 UDLCStoreHUDComponent::GetNumItemsInCart() {
    return 0;
}

bool UDLCStoreHUDComponent::GetNextPromotion(EPromotionAreaTileSize DesiredSize, const TArray<int32>& PromotionIDsToSkip, FDLCPromotionTileData& OutPromotion) {
    return false;
}

FUnlockDetails UDLCStoreHUDComponent::GetItemUnlockDetails(const FUnlockableItemTag& ItemTag) {
    return FUnlockDetails{};
}

FString UDLCStoreHUDComponent::GetCurrencyCode() {
    return TEXT("");
}

FText UDLCStoreHUDComponent::GetCategoryTextFromId(FString& CategoryId) {
    return FText::GetEmpty();
}

TArray<FDLCProductTileData> UDLCStoreHUDComponent::GetCategoryProducts(FString& CategoryName) {
    return TArray<FDLCProductTileData>();
}

void UDLCStoreHUDComponent::CloseDLCStore_Implementation() {
}

void UDLCStoreHUDComponent::ClearStoreConnectionAttempt() {
}

void UDLCStoreHUDComponent::AddItemToCart(const FPSNProductId& ProductID) {
}


