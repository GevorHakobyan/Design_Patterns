#include "AgeHandler.h"

namespace patterns {
    bool AgeHandler::Validate(String name, int age) const {
        if (0 == age) {
            return (m_nextHandler != nullptr) ? m_nextHandler->Validate(name, age) : true;
        }

        if (age > 18 && age < 35) {
            return true;
        }

        return false;
    }
}; //namespace patterns