#pragma once

#include <string>
using namespace std;
namespace ariel{
    class card
    {
            int value;
            string shape;
        public:
            card(int val, string shape);
            int getVal() const;
            string getShape() const;
     
    };
    
}
