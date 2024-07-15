#ifndef UTILS_GREET // if not defined, then define a CONSTANT
// so the first time the hpp is called somewhere else all the code will be executed but the second time it will stop after the first line because it is already defined somewhere
#define UTILS_GREET

#include <string>

namespace messaging {
    // function declaration
    void greet(std::string name);
}


#endif
