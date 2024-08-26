#include "entitlement.h"

Uentitlement::Uentitlement() {
    this->use_count = 0;
    this->is_consumable = false;
    this->use_limit = 0;
    this->preorder_flag = 0;
}

Uentitlement* Uentitlement::Newentitlement() {
    return NULL;
}

void Uentitlement::Init(const FString& _id) {
}


