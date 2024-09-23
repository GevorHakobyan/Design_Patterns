#include "Tool.h"

patterns::SomeTool::thisPtr patterns::SomeTool::m_ptr{nullptr};
std::once_flag patterns::SomeTool::m_callFlag;

patterns::SomeTool::thisPtr patterns::SomeTool::getInstance() {
    std::call_once(m_callFlag, [&](){
        m_ptr = std::make_shared<SomeTool>(SomeTool());
    });

    return m_ptr;
}
