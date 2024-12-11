#pragma once
#include "Handler.h"

namespace patterns {
    class AgeHandler : public AHandler {
        public:
        bool Validate(String, int) const override;
    };
}; //namespace patterns