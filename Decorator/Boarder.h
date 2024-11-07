#pragma once
#include "View.h"

namespace patterns {
    class Boarder : public View {
        public:
        void print() const override;
    };
}; //namespace patterns