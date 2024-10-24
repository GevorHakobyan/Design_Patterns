#pragma once
#include <memory>

namespace patterns {
    class Component {
        public:
        using ParentPtr = std::shared_ptr<Component>;

        public:
        Component() = default;
        virtual ~Component() = default;
        void setParent(const ParentPtr);
        ParentPtr getParent() const;

        protected:
        ParentPtr m_parent{nullptr};
    };
}; //namespace patterns