#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

namespace patterns {

    class SomeTool {
        using thisPtr = std::shared_ptr<SomeTool>;
        public://methods
        static thisPtr getInstance(const std::string&);
        void setMesseage(const std::string&);
        void printMesseage() const;
        ~SomeTool() = default;

        private: //methods
        SomeTool() = default;

        private://members
        static thisPtr m_ptr;
        std::string m_messeage{};
    };
    #include "SomeTool.inl"
    
}//namespace patterns