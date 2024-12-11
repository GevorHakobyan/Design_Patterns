#pragma once
#include "Handler.cpp"

namespace patterns {
    class UpperCaseHandler : public AHandler {
        public:
        bool Validate(String = "", int = {}) const override;
    };
}; //namespace patterns