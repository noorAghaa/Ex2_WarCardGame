
#include <iostream>
#include <string>
using namespace std;

#include "card.hpp"
namespace ariel
{
    card::card(int value,std::string shape)
    {
        this->value=value;
        this->shape=shape;
    }
    int card::getVal() const
    {
        return value;
    }
    std::string card::getShape() const
    {
        return shape;
    }
    
}