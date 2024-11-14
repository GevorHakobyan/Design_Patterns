#pragma once
#include <string>

namespace patterns {
    class Printer {
        public:
        using Text = std::string;
        public:
        virtual void print(const Text&) = 0;
        virtual ~Printer() = default;
    };
}; //namespace patterns