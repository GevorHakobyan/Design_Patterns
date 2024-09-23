#include "SomeTool.h"

patterns::SomeTool::thisPtr patterns::SomeTool::m_ptr{std::make_shared<patterns::SomeTool>(patterns::SomeTool())};

patterns::SomeTool::thisPtr patterns::SomeTool::getInstance(const std::string& messeage) {
    m_ptr->setMesseage(messeage);
    return m_ptr;
}


void patterns::SomeTool::printMesseage() const {
    std::cout << m_messeage << "\n";
}

void patterns::SomeTool::setMesseage(const std::string& messeage) {
    m_messeage = (m_messeage == messeage) ? m_messeage : messeage;
}