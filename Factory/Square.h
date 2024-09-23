#pragma once
#include "Shape.h"

namespace patterns {
    class Square : public Shape {
        public:
        Square(const Heigth, const Width);
        void print() const override;
    };
    #include "Square.inl"
}; //namespace patterns