#include "Creator.h"

patterns::Creator::Creator(const double size1, const double size2) {
    m_sizes.first = size1;
    m_sizes.second = size2;
}

void patterns::Creator::operator() () {
    thisPtr t = Build_obj(m_sizes.first, m_sizes.second);
    t->print();
}