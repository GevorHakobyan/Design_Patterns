#include "Rectangle.h"

patterns::Rectangle::Rectangle(const Heigth heigth, const Width width)
: Shape(heigth, width) {};

void patterns::Rectangle::print() const {
    Heigth tmp = m_heigth;
    size_t i{1};
    size_t j{tmp};

    std::cout << std::setw(j) << " " << "#\n";
    --j;
    while (0 != tmp) {
        std::cout << std::setw(j) << " " << "#" << std::setw(i) << " " << "#\n";
        --tmp;
        ++i;
        --j;
    }

    while(0 != i--) {
        std::cout << "#";
    };
    std::cout << "\n";
}