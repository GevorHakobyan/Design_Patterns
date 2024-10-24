#include "Box.h"

void patterns::Box::addItem(const ItemPtr item) {
    m_items.push_back(item);
    item->setParent(std::make_shared<Component>(*this));
}

void patterns::Box::removeItem(size_t index) {
    m_items.erase(m_items.begin() + index);
}

int patterns::Box::getSum() const {
    int sum{0};
    for (const auto elem : m_items) {
        sum += elem->getCount();
    }

    return sum;
}

int patterns::Box::getCount() const {
    return m_count;
}