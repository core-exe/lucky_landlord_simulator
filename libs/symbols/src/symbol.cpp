#include "symbols/symbol.hpp"

#include <cmath>
#include <string>

namespace Symbol{

int Symbol::get_value() {
    return std::ceil(this->base_value);
}

int Symbol::get_id() {
    return this->id;
}

std::string Symbol::get_name() {
    return this->name;
}

std::string Symbol::get_repr() {
    return this->repr;
}

}