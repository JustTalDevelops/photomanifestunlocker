#pragma once

#include "PhotoType.h"
#include "ActorUniqueID.h"

struct PhotoStorageContainer {
    PhotoType mType;
    ActorUniqueID mOwnerId;
};
