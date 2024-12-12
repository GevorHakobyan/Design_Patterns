#pragma once
#include "Iobserver.h"
#include "Publisher.h"

namespace patterns {
    class Observer1 : public IObserver {
        using Uptr = std::unique_ptr<Publisher>;
        public:
        Observer1(Uptr);
        void notifyMe(const String&) override;
    };
};