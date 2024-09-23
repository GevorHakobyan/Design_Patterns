#include "SingleTool.h"

patterns::SingleTool::thisPtr patterns::SingleTool::m_ptr{nullptr};
std::mutex patterns::SingleTool::m_mutex1;
std::mutex patterns::SingleTool::m_mutex2;

patterns::SingleTool::thisPtr patterns::SingleTool::getInstance(const std::string& messeage) {
    std::lock_guard<std::mutex> lock{m_mutex1};
    if (!m_ptr) {
        m_ptr = new SingleTool();
    }
    std::lock_guard<std::mutex> lock2{m_mutex2};
    m_ptr->setMesseage(messeage);

    return m_ptr;
}

void patterns::SingleTool::setMesseage(const std::string& messeage) {
    m_messeage = messeage;
}

void patterns::SingleTool::print() const {
    std::cout << m_messeage << "\n";
}


