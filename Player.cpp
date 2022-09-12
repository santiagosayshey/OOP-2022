#include "Player.h"

    Player::Player()
    {

    }

    Player::~Player()
    {

    }

    int Player::getMove()
    {
        return recentMove;
    }

    bool Player::win(Player* opponent, Player* person)
    {
        if (person->getMove() == 1 && opponent->getMove() == 3)
        {
            std::cout << "you win!" << std::endl;
            return true;
        }

        else if (person->getMove() == 2 && opponent->getMove() == 1)
        {
            std::cout << "you win!" << std::endl;
            return true;
        }

        else if (person->getMove() == 3 && opponent->getMove() == 2)
        {
            std::cout << "you win!" << std::endl;
            return true;
        }

        else if(person->getMove() == opponent->getMove())
        {
            std::cout << "draw! go again" << std::endl;
            return false;
        }

        else 
        {
            std::cout << "you lose!" << std::endl;
            return false;
        }
    }
    