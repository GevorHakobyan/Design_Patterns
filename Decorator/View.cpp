#include "View.h"

void patterns::View::setContent(const Content& text) {
    m_Conten = text;
}

void patterns::View::setNextDecorator(const NextDecorator decorator) {
    m_nextDecorator = decorator;
}