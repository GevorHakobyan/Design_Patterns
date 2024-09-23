#pragma once
#include <iostream>
#include <iomanip>

namespace patterns {
    class Shape {
        public: //usings
        using Heigth = int;
        using Width = int;

        public: //methods
        Shape(const Heigth, const Width);
        virtual ~Shape()  = default;
        virtual void print() const = 0;
        protected:
        Heigth m_heigth;
        Width m_width;
    };
    #include "Shape.inl"
}; //namespace patterns