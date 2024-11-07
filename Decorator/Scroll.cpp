#include "Scroll.h"

void patterns::Scroller::print() const {
    m_nextDecorator->print();
    std::cout << "Scrolling..." << '\n';
}