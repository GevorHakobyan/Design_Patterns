#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

namespace patterns {

    class SingleTool {
        using thisPtr = SingleTool*;
        public://methods
        static thisPtr getInstance(const std::string&);
        void print() const;
        SingleTool(SingleTool&) = delete;
        SingleTool& operator=(const SingleTool&) = delete;

        private: //methods
        void setMesseage(const std::string&);
        SingleTool() {std::cout << "Constructor had been called\n";};
        ~SingleTool() = default;

        private://members
        static thisPtr m_ptr;
        static std::mutex m_mutex1;
        static std::mutex m_mutex2;
        std::string m_messeage{};
    };
    #include "SingleTool.inl"
    
}//namespace patterns