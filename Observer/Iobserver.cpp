#include "Iobserver.h"

namespace patterns {
    IObserver::IObserver(Uptr publisher)
    : m_Publisher{std::move(publisher)} {};

}; //namespace patterns