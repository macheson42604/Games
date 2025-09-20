#include <iostream>

#include "Card.hpp"
#include "Player.hpp"

using namespace std;

// Method Declarations
void game_setup();
Player* make_player_list();

int main() {
    game_setup();

}

// Method Definitions
void game_setup() {
    Player currentPlayer = make_player_list();
}


Player* make_player_list() {
    Player* humanPlayer = new Player(false);
    Player* currentPlayer = humanPlayer;

    int numPlayers = 1;
    cout << "How many opponents would you like?";
    cin >> numPlayers;

    for (int i = numPlayers; i > 0; i --) {
        Player* nextPlayer = new Player(true);
        currentPlayer->set_nextPlayer(nextPlayer);

        currentPlayer = nextPlayer;
    }

    currentPlayer->set_nextPlayer(humanPlayer); // set last player's nextPlayer to the first player
}