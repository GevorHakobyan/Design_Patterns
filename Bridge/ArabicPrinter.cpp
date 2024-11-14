#include "ArabicPrinter.h"
#include <algorithm>
#include <iostream>

void patterns::ArabicPrinter::print(const Text& text) {
    auto copyText = text;
    std::reverse(copyText.begin(), copyText.end());
    std::cout << copyText << "\n";
}