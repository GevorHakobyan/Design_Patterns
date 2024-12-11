#pragma once
#include "View.h"

namespace patterns {
    class Printer : public View {
        public:
        void print() const override;
    };
}; //namespace patterns