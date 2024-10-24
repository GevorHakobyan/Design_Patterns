#pragma once
#include "Component.h"
#include "vector"


namespace patterns {

    class Box : public Component {
        public:
        using ItemPtr = std::shared_ptr<Box>;
        using ItemList = std::vector<ItemPtr>;

        public:
        Box() = default;
        ~Box() = default;
        void addItem(const ItemPtr);
        void removeItem(size_t);
        int getSum() const;
        int getCount() const;

        private:
        int m_count{1};
        ItemList m_items{};
    };
}; //namespace patterns