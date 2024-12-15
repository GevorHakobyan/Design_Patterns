#include "Car.h"

namespace patterns {
    void Car::TransferTo(State state) {
        m_currentState.release();
        m_currentState = std::move(state);
    }

    void Car::Go() const {
        m_currentState->Go();
    }

    void Car::Stop() const {
        m_currentState->Stop();
    }
}