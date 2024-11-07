#include "Printer.h"

void patterns::Printer::print() const {
    m_nextDecorator->print();
    std::cout << m_Conten << "\n";
}