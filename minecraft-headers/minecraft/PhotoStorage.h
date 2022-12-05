#pragma once

#include <unordered_set>
#include <vector>
#include "Core.h"
#include "PhotoStorageContainer.h"

class PhotoStorage {
private:
    Core::HeapPathBuffer mBaseDir;
    Core::HeapPathBuffer mBookDir;
    Core::HeapPathBuffer mPhotoDir;
    Core::HeapPathBuffer mPhotoItemDir;
    Core::HeapPathBuffer mManifestDir;

    std::unordered_set<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
            std::hash<std::string>, std::equal_to<>, std::allocator<std::__cxx11::basic_string<char,
                    std::char_traits<char>, std::allocator<char>>>> mChecksums;

public:
    PhotoStorage(const Core::Path &);

    const Core::HeapPathBuffer &getPhotoPath(void);

    Core::HeapPathBuffer getBookPath(const std::string &);

    const Core::HeapPathBuffer &getBookPath(void);

    const Core::HeapPathBuffer &getPhotoItemPath(void);

    static Core::HeapPathBuffer getScreenshotFilename(void);

    Core::HeapPathBuffer getPath(const PhotoStorageContainer &);

    void storePhoto(const PhotoStorageContainer &, const std::string &, const std::string &);

    void getPhoto(const PhotoStorageContainer &, const std::string &, std::string &);

    void setValidLoosePhoto(const PhotoStorageContainer &, const std::string &);
};
