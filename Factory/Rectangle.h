#pragma once
#include "Shape.h"

namespace patterns {
    class Rectangle : public Shape {
        public:
        Rectangle(const Heigth, const Width);
        public:
        void print() const override;
    };
    #include "Rectangle.inl"
}; //namespace patterns