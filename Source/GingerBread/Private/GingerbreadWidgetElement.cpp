#include "GingerbreadWidgetElement.h"
#include "Templates/SubclassOf.h"

UGingerbreadWidgetElement::UGingerbreadWidgetElement() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentWidget = NULL;
    this->BoundToWidget = NULL;
    this->ChildrenContainer = NULL;
}


void UGingerbreadWidgetElement::SetParentScrollBox(UScrollBox* ScrollBox) {
}

void UGingerbreadWidgetElement::SetEnabledVisual(bool Enabled) {
}

void UGingerbreadWidgetElement::SetDefaultNavigations(UGingerbreadWidgetElement* UpNavigation, UGingerbreadWidgetElement* DownNavigation, UGingerbreadWidgetElement* LeftNavigation, UGingerbreadWidgetElement* RightNavigation) {
}

void UGingerbreadWidgetElement::SetDefaultNavigation(EUINavigationDirection NavigationDirection, UGingerbreadWidgetElement* NavigationLink) {
}








bool UGingerbreadWidgetElement::IsMouseInputActive() {
    return false;
}


UPanelWidget* UGingerbreadWidgetElement::GetFirstPanelType(TSubclassOf<UPanelWidget> PanelType, TArray<UWidget*>& OutContentStack) {
    return NULL;
}

void UGingerbreadWidgetElement::ApplyNewRandomAngle(bool ResetIfZero) {
}


