#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace ariel {

    class Player {
    private:
        std::string playerName;

    public:
        Player(std::string name);
        int cardesTaken();
        int stacksize();
        std::string getName();
    };
}

