#pragma once
#include "Printer.h"
#include "Scroll.h"
#include "Boarder.h"

namespace patterns {
    class ClientCode {
        using Content = std::string;
        public:
        void printContent(const Content&);
    };
};