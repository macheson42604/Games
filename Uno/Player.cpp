#include "Player.hpp"

using namespace std;

Player::Player(Player* next) {
    skipped = false;
    out = false;
    extraDraw = 0;
    nextPlayer = next;
}

vector<Card> Player::read_hand() const {
    return hand;
}

bool Player::read_skipped() const {
    return skipped;
}

int Player::read_extraDraw() const {
    return extraDraw;
}

bool Player::read_out() const {
    return out;
}

Player* Player::read_nextPlayer() const {
    return nextPlayer;
}

void Player::draw_card(Card newCard) {
    hand.push_back(newCard);
}