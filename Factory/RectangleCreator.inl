#include "RectagleCreator.h"


patterns::RectangleCreator::RectangleCreator(const double size1, const double size2)
: Creator(size1, size2) {};

patterns::Creator::thisPtr patterns::RectangleCreator::Build_obj(const double size1, const double size2) {
    return std::make_unique<Rectangle>(Rectangle(size1, size2));
}