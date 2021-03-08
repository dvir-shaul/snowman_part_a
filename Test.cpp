#include "doctest.h"
#include "iostream"
#include "snowman.cpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Difrent hats"){
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));        //Straw Hat

    CHECK(snowman(21114411) == string(" ___ \n.....\n(.,.)\n( : )\n( : )"));    //Mexican Hat

    CHECK(snowman(31114411) == string("  _  \n /_\\ \n(.,.)\n( : )\n( : )"));    //Fez

    CHECK(snowman(41114411) == string(" ___ \n(_*_)\n(.,.)\n( : )\n( : )"));    //Rusiian Hat


}

TEST_CASE("Bad snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));


}

TEST_CASE("worng short input"){
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(32));
    CHECK_THROWS(snowman(123412));
}
TEST_CASE("worng long input"){
    CHECK_THROWS(snowman(12341231));
    CHECK_THROWS(snowman(111111111111));
    CHECK_THROWS(snowman(111111111111));
}

TEST_CASE("worng digits over 4 input"){
    CHECK_THROWS(snowman(12341284));
    CHECK_THROWS(snowman(85679865));
    CHECK_THROWS(snowman(29152388));
}
