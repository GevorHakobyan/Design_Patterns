#pragma once
#include <memory>
#include "Printer.h"
#include "Scroller.h"

namespace patterns {
    class Facade {
        public:
        using PrinterPtr = std::unique_ptr<Printer>;
        using ScrollerPtr = std::unique_ptr<Scroller>;
        public:
        Facade(PrinterPtr = nullptr, ScrollerPtr = nullptr);
        void Operation() const;

        private:
        PrinterPtr m_printer{nullptr};
        ScrollerPtr m_scroller{nullptr};
    };
}; //namespace patterns