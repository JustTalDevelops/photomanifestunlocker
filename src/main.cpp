#include <iostream>
#include <fstream>
#include "minecraft/PhotoStorage.h"
#include "json.hpp"

extern "C" void modloader_on_server_start(void *server) {
    std::ifstream ifs("config.json");
    auto config = nlohmann::json::parse(ifs);

    auto storage = new PhotoStorage(Core::Path(config["base_directory"]));
    for (const auto &name: config["names"]) {
        storage->setValidLoosePhoto(PhotoStorageContainer{
                .mType = PhotoType::Book,
                .mOwnerId = ActorUniqueID{.rawID = config["target_unique_id"]},
        }, name);
    }

    std::cout << "Unlocked photo storage!" << std::endl;
}
