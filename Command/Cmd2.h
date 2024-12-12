#pragma once
#include "Command.h"

namespace patterns {
    class Cmd2 : public Command {
        public:
        void Implement() const override;
    };
}; //namespace patterns