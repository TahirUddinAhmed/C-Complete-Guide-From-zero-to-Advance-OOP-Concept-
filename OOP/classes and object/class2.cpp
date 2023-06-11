#include <iostream>
#include "player.cpp"
using namespace std;

int main() {
    Player player1; // creation of object
    player1.level = 34;
    player1.health = 49;

    cout << player1.level << endl;
    cout << player1.health << endl;

    return 0;
}