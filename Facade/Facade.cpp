#include "Facade.h"

namespace patterns {
    Facade::Facade(PrinterPtr printer, ScrollerPtr scroller) {
        m_printer = std::move(printer);
        m_scroller = std::move(scroller);
    }

    void Facade::Operation() const {
        if (m_printer) {
            m_printer->print();
        }

        if (m_scroller) {
            m_scroller->scroll();
        }
    }
}