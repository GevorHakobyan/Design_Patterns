#pragma once
#include "Creator.h"
#include "Rectangle.h"

namespace patterns {
    class RectangleCreator : public Creator {
        public:
        RectangleCreator(const double size1, const double size2);   
        private:
        thisPtr Build_obj(const double, const double) override; 
    };
    #include "RectangleCreator.inl"
}; //namespace patterns