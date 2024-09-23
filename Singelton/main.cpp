#include "SomeTool.h"

int main() {
    std::string messeage1 = {"this is Ob1"};
    auto ob1{patterns::SomeTool::getInstance(messeage1)};
    ob1->printMesseage();

    std::string messeage2 = {"this is Ob2"};
    auto ob2{patterns::SomeTool::getInstance(messeage2)};
    ob2->printMesseage();

    std::cout << ob1 << " " << ob2 << "\n";
    return 0;
}