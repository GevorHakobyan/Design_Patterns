#include "ClientCode.h"

void patterns::ClientCode::printContent(const Content& text) {
    std::shared_ptr<Printer> printer = std::make_shared<Printer>();
    std::shared_ptr<Scroller> scroller = std::make_shared<Scroller>();
    std::shared_ptr<Boarder> boarder = std::make_shared<Boarder>();

    printer->setNextDecorator(scroller);
    printer->setContent(text);
    scroller->setNextDecorator(boarder);

    //printing
    printer->print();
}