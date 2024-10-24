#include "Component.h"

void patterns::Component::setParent(const ParentPtr parent) {
    this->m_parent = parent;
}

patterns::Component::ParentPtr patterns::Component::getParent() const {
    return m_parent;
}

