#include <iostream>
using namespace std;

class Player {
    private:
    int health;

    public:
    char level;

    // Method: getter
    int getHealth() {
        return health;
    }

    // method: setter
    int setHealth(int h) {
        health = h;
    }
};

int main() {
    Player player1; // creation of object
    player1.level = 'a';
    player1.setHealth(89);
    int health = player1.getHealth();

    cout<<player1.level<<endl;
    cout<<health<<endl;

    // let's see the size of the object
    cout<<sizeof(player1)<< " bytes"<<endl;

    return 0;
}