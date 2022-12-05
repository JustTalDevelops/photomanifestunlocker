#pragma once

#include <string>

namespace Core {

    class PathPart {
    public:
        std::string mUtf8StdString;
    };

    class Path {
    public:
        PathPart mPathPart;

        Path(const std::string &a) {
            mPathPart.mUtf8StdString = a;
        }
    };

}
