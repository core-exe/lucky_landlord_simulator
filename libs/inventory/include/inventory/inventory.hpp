#pragma once

#include <vector>
#include <memory>
#include <string>

#include "items/item.hpp"
#include "symbols/symbol.hpp"

class Inventory {
    private:
    std::vector<std::shared_ptr<Item::Item>> item_list;
    std::vector<std::shared_ptr<Symbol::Symbol>> symbol_list;
    int n_coin;
    int n_reroll_token;
    int n_remove_token;
    int n_essense_token;

    Inventory(){};
    virtual ~Inventory(){};
};