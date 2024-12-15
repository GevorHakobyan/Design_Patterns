#pragma once
#include <memory>
#include "D.h"
#include "P.h"
#include "N.h"
#include "EngineOff.h"

namespace patterns {
    class Car {
        public:
        using State = std::unique_ptr<State>;
        public:
        void TransferTo(State);
        void Go() const;
        void Stop() const;
        private:
        State m_currentState{nullptr};
    };
}; //namesapce patterns