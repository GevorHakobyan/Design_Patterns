#include "Publisher.h"

namespace patterns {
    void Publisher::Notify() const {
        for (const auto& subscriber: m_Subscribers) {
            subscriber->notifyMe("Be notified");
        }
    }

    void Publisher::Subscribe(Upointer subscriber) {
        m_Subscribers.push_back(std::move(subscriber));
    }

    
}//namespace patterns