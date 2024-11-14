#include <iostream>
#include "ArabicPrinter.h"
#include "NormalPrinter.h"
#include "Abstraction.h"

int main() {
    auto ArabicPtr = std::make_unique<patterns::ArabicPrinter>();
    auto NormalPtr = std::make_unique<patterns::NormalPrinter>();
    const std::string text{"Hellow Worls"};

    patterns::Abstraction arabicAbst{std::move(ArabicPtr)};
    patterns::Abstraction normalAbst{std::move(NormalPtr)};

    arabicAbst.Implement(text);
    normalAbst.Implement(text);
    return 0;
}