#pragma once

#include <string>
#include <memory>

#include "items/item.hpp"
#include "inventory/inventory.hpp"

namespace Symbol{

class Symbol;

class Symbol {
    private:
    float base_value;
    int id = 0;
    std::string name = std::string("symbol");
    std::string repr = std::string("sym");
    
    public:
    Symbol(){ base_value = 1; }
    virtual ~Symbol(){}

    int get_id();
    std::string get_name();
    virtual std::string get_repr();

    virtual int get_value();
    inline virtual void on_adjacent(Symbol symbol){}
    inline virtual void on_item_trigger(Item::Item item){}
    inline virtual void on_destroy(std::shared_ptr<Inventory> inventory){}
    inline virtual void on_remove(std::shared_ptr<Inventory> inventory){}
};

}