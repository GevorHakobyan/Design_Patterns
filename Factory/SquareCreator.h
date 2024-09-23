#pragma once
#include "Creator.h"
#include "Square.h"

namespace patterns {
    class SquareCreator : public Creator {
        public:
        SquareCreator(const double size1, const double size2);   
        private:
        thisPtr Build_obj(const double, const double) override; 
    };
    #include "SquareCreator.inl"
}; //namespace patterns