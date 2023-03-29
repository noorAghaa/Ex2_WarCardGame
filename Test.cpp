
#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("Init Values") {
    
        Player p1("noor");
        Player p2("aghaa");

        Game game(p1,p2);


        CHECK(p1.stacksize() == 26);
        CHECK(p2.stacksize() == 26);
        CHECK(p1.cardesTaken() == 0);
        CHECK(p2.cardesTaken() == 0);
        CHECK(!p1.stacksize() == 25);
        CHECK(!p1.stacksize() == 25);
    

    game.playAll();

    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.cardesTaken() == 26);
    CHECK(p2.cardesTaken() == 26);


    CHECK_NOTHROW(p1.cardesTaken());
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
     CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p2.stacksize() + p1.stacksize()==52);
    CHECK(p1.stacksize()<52);
    CHECK(p2.stacksize()<52);

}

TEST_CASE("CHECK throws:"){
    Player p1("mor");
    Player p2("Basan");
    Game game(p1,p2);

    CHECK_NOTHROW(p1.cardesTaken());
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.shuffleDeck());
    CHECK_NOTHROW(game.printWiner());
}
    
