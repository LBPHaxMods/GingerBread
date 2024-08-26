#include "GingerbreadSaveGameManager.h"

UGingerbreadSaveGameManager::UGingerbreadSaveGameManager() {
    this->m_default_main_save = NULL;
    this->m_default_image_set_save = NULL;
    this->m_default_settings_save = NULL;
    this->m_default_global_settings_save = NULL;
    this->CrossPlatformTransferSaveData = NULL;
}


