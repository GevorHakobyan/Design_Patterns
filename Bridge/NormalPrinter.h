#pragma once
#include "Printer.h"

namespace patterns {
    class NormalPrinter : public Printer {
        void print(const Text&) override;
    };
}; //namespace patterns