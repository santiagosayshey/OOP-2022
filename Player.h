#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <string>
#include <iostream>

class Player
{
public:
    Player();
    ~Player();

    virtual void move() = 0;
    virtual int* getMoves() = 0;

    int getMove();
    bool win(Player* opponent, Player* person);


protected:
    int recentMove;

};

#endif