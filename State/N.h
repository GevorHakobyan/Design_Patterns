#pragma once
#include "State.h"

namespace patterns {
    class N : public State {
        public:
        void Go() const override;
        void Stop() const override;
    };
}; //namesapce patterns