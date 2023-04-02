#include "player.hpp"
namespace ariel
{
    Player::Player(std::string name) : playerName(name) {}

    int Player::cardesTaken() {
        return 0;
    }

    int Player::stacksize() {
        return 26;
    }
    std::string Player::getName() {
        return playerName;
    }
}