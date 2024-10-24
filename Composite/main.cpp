#include <iostream>
#include "Box.h"

int main() {
    std::shared_ptr<patterns::Box> b1;
    std::shared_ptr<patterns::Box> b2;
    std::shared_ptr<patterns::Box> b3;
    std::shared_ptr<patterns::Box> b4;

    
    std::shared_ptr<patterns::Box> parent;
    parent->addItem(b1);
    parent->addItem(b2);
    parent->addItem(b3);
    parent->addItem(b4);

    std::cout << parent->getSum() << "\n";

    return 0;
}