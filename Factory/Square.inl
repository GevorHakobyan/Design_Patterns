#include "Square.h"

patterns::Square::Square(const Heigth height, const Width width)
: Shape(height, width) {};

void patterns::Square::print() const{
    Heigth tmp_height{m_heigth};
    Width tmp_width{m_width};

    while(0 != tmp_width) {
        std::cout << "* ";
        --tmp_width;
    }
    tmp_width = m_width;
    std::cout << "\n";

    while(0 != tmp_height) {
        std::cout << "*" << std::setw(m_width + 3) << " " << "*";
        std::cout << "\n";
        --tmp_height;
    }

    while (0 != tmp_width) {
        std::cout << "* ";
        --tmp_width;
    }
    std::cout << "\n";
}