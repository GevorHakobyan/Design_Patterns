#pragma once
#include <memory>

namespace patterns {
    class AHandler {
        public:
        using Handler = std::unique_ptr<AHandler>;
        using String = std::string;
        public:
        void setNextHandler(Handler);
        virtual bool Validate(String = "", int = {}) const = 0;
        protected:
        Handler m_nextHandler{nullptr};
    };
}; //namespace patterns