#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

namespace patterns {

    class SomeTool {
        using thisPtr = std::shared_ptr<SomeTool>;
        public://methods
        static thisPtr getInstance();
        ~SomeTool() = default;

        private: //methods
        SomeTool() = default;

        private://members
        static thisPtr m_ptr;
        static std::once_flag m_callFlag;
    };
    #include "Tool.inl"
    
}//namespace patterns