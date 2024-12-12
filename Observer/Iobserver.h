#pragma once
#include <string>
#include "Publisher.h"

namespace patterns {
    class IObserver {
        public:
        using String = std::string;
        using Uptr = std::unique_ptr<Publisher>;

        public:
        IObserver(Uptr);
        virtual void notifyMe(const String&) = 0;
        protected:
        String m_data; 
        Uptr m_Publisher{nullptr};
    };
}; //namespace pattern