#pragma once
#include <vector>
#include <memory>
#include "Iobserver.h"

namespace patterns {

    class Publisher {
        public:
        using Upointer = std::unique_ptr<IObserver>;
        using List = std::vector<Upointer>;
        public:
        void Notify() const;
        void Subscribe(Upointer);
        void Unsubscribe(int);
        private:
        List m_Subscribers{};
    };

} //namespace patterns