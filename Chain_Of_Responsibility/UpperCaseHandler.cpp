#include "UpperCaseHandler.h"

namespace patterns {
    bool UpperCaseHandler::Validate(String name, int age) const {
        if ("" == name) {
            return (m_nextHandler != nullptr) ? m_nextHandler->Validate(name, age) : true;
        }

        if (std::isupper(name[0])) {
            return true; 
        }

        return false;
    }
}; //namespace patterns