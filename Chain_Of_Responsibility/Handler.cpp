#include "Handler.h"

namespace patterns {
    void AHandler::setNextHandler(Handler handler) {
        m_nextHandler = std::move(handler);
    }
}; //namespace patterns