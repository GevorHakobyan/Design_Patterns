#include "SquareCreator.h"
#include "RectagleCreator.h"

int main() {
    patterns::SquareCreator builder{5.5, 6.7};
    builder();

    patterns::RectangleCreator builder2{5, 7};
    builder2();
    return 0;
}