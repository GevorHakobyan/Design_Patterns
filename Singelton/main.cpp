#include "SingleTool.h"
#include <thread>

void ThreadRunner(const std::string& messeage) {
    auto ptr = patterns::SingleTool::getInstance(messeage);
    ptr->print();    
}

int main() {
    std::string messeage1{"ob1"};
    std::string messeage2{"ob2"};
    std::thread t1{ThreadRunner, messeage1};
    std::thread t2{ThreadRunner, messeage2};

    t1.join();
    t2.join();
    return 0;
}