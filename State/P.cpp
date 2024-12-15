#include "P.h"

namespace patterns {
    void P::Go() const {
        std::cout << "Can't go put on D\n";
    }

    void P::Stop() const {
        std::cout << "It is laready stopped\n";
    }
}