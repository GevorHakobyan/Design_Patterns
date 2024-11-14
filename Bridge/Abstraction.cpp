#include "Abstraction.h"

patterns::Abstraction::Abstraction(ImplementerPtr ptr)
: m_ptr{std::move(ptr)} {};

void patterns::Abstraction::Implement(const Text& text) {
    m_ptr->print(text);
}
