#pragma once
#include "Printer.h"

namespace patterns {
    class ArabicPrinter : public Printer {
        public:
        void print(const Text&) override;
    };
}; //namespace patters