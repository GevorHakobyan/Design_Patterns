#include "EngineOff.h"

namespace patterns {
    void EngineOff::Go() const {
        std::cout << "Cant go\n Engine is turned off\n";
        std::cout << "Probably you are a girl yeah??\n";
    }

    void EngineOff::Stop() const {
        std::cout << "It is stoped no need to press Break!!\n";
    }
}; //namespace patterns