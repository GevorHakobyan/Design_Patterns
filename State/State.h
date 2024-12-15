#pragma once
#include <iostream>

namespace patterns {
    class State {
        public:
        virtual void Go() const = 0;
        virtual void Stop() const = 0;
        virtual ~State() = default;
    };
}; //namespace patterns