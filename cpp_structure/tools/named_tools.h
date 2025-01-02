#pragma once
#include <iostream>

namespace cpp_structure::named_tools {
    class NamedTools {
        private:
            std::string name;
        public:
            explicit NamedTools(std::string name);
            ~NamedTools() = default;
            void printHello() const;
    };
}