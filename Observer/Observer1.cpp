#include "Observer1.h"

namespace patterns {
    Observer1::Observer1(Uptr publisher)
    :IObserver{std::move(publisher)} {};
    
    void Observer1::notifyMe(const String& messeage) {
        m_data = messeage;
    }
};