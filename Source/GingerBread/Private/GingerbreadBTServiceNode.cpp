#include "GingerbreadBTServiceNode.h"

UGingerbreadBTServiceNode::UGingerbreadBTServiceNode() {
    this->AIOwner = NULL;
    this->AIChar = NULL;
    this->bShowPropertyDetails = true;
}

bool UGingerbreadBTServiceNode::IsServiceActive() const {
    return false;
}


