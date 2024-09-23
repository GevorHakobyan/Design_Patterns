#include "SquareCreator.h"

patterns::SquareCreator::SquareCreator(const double size1, const double size2)
: Creator(size1, size2) {};

patterns::Creator::thisPtr patterns::SquareCreator::Build_obj(const double size1, const double size2) {
    return std::make_unique<Square>(Square(size1, size2));
}