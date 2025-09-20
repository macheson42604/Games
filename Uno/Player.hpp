#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>

#include "Card.hpp"

class Player {
private:
    // Variables
    vector<Card> hand;
    bool skipped;
    int extraDraw;
    bool out;
    Player* nextPlayer;

public:
    // Methods
    Player(Player*);
    vector<Card> read_hand() const;
    bool read_skipped() const;
    int read_extraDraw() const;
    bool read_out() const;
    Player* read_nextPlayer() const;
    void draw_card(Card);
};

#endif