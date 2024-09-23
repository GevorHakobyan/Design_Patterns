#pragma once
#include "Shape.h"

namespace patterns {
    class Creator {
        public: //usings
        using thisPtr = std::unique_ptr<patterns::Shape>;
        using objSize = std::pair<double, double>;

        public:
        Creator(const double size1, const double size2);
        virtual ~Creator() = default;
        void operator() () ;

        private: //methods
        virtual thisPtr Build_obj(const double size1, const double size2) = 0;

        private: //members
        thisPtr m_ptr{nullptr};
        objSize m_sizes{};
    };
    #include "Creator.inl"
};//namespace patterns