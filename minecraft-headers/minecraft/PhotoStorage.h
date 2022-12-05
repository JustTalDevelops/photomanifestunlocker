#pragma once

#include <unordered_set>
#include <vector>
#include "Core.h"
#include "PhotoStorageContainer.h"

class PhotoStorage {
    char filler[216];

public:
    PhotoStorage(const Core::Path &);

    void setValidLoosePhoto(const PhotoStorageContainer &, const std::string &);
};
