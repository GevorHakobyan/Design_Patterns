#pragma once
#include <string>
#include <memory>
#include <iostream>

namespace patterns {
    class View {
        public:
        using Content = std::string;
        using NextDecorator = std::shared_ptr<View>;

        public:
        virtual void print() const = 0;
        void setContent(const Content&);
        void setNextDecorator(const NextDecorator);
        protected:
        Content m_Conten{};
        NextDecorator m_nextDecorator{nullptr};
    };
}; //namespace patterns