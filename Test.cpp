#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */


TEST_CASE("Good snowman code") {
    CHECK_NOTHROW(snowman(12114411));
    CHECK_NOTHROW(snowman(12114311));
    CHECK_NOTHROW(snowman(12113311));
    CHECK_NOTHROW(snowman(12224411));
    CHECK_NOTHROW(snowman(12114411));
    CHECK_NOTHROW(snowman(12114441));
    CHECK_NOTHROW(snowman(12314411));
    CHECK_NOTHROW(snowman(12214411));
    CHECK_NOTHROW(snowman(12111411));
    CHECK_NOTHROW(snowman(11114411));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1111111111111));
    CHECK_THROWS(snowman(000000));
    CHECK_THROWS(snowman(999));
    CHECK_THROWS(snowman(1011144));
    CHECK_THROWS(snowman(54));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(3));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(4));
    CHECK_THROWS(snowman(222));
    CHECK_THROWS(snowman(23232));
    CHECK_THROWS(snowman(11111));
        
}
TEST_CASE("for loop") {
	for(int i = 0; i< 100000; i++){
		CHECK_NOTHROW(snowman(i));
	}
}
