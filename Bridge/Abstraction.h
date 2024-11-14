#pragma once
#include "Printer.h"
#include <memory>

namespace patterns {
    class Abstraction {
        public:
        using ImplementerPtr = std::unique_ptr<Printer>;
        using Text = std::string;

        Abstraction(ImplementerPtr);
        void Implement(const Text& text);
        
        private:
        ImplementerPtr m_ptr{nullptr};
    };
}; //namespace patterns