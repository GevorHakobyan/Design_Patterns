#pragma once
#include <iostream>

namespace patterns {
    class Command {
        public:
        virtual void Implement() const = 0;
    };
}; //namespace patterns