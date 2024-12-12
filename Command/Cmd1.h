#pragma once
#include "Command.h"

namespace patterns {
    class Cmd1 : public Command {
        public:
        void Implement() const override;
    };
}; //namespace patterns