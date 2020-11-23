//
// Created by User on 16.11.2020.
//

#include "Pockemon.h"
    Pockemon::Pockemon() {
    }
    Pockemon::Pockemon(int hp, int attack, int speed) {
        this->hp=hp;
        this->attack=attack;
        this->speed=speed;
    }


int Pockemon::getHp()  {
        return hp;
    }

void Pockemon::setHp(int hp) {
    Pockemon::hp = hp;
}

int Pockemon::getAttack()  {
        return attack;
    }


    int Pockemon::getSpeed()  {
        return speed;
    }

    std::string Pockemon::getSpecialAttack() {
        return special_attack;
    }
    std::string Pockemon::getSpecialDefense() {
        return special_defense;
    }

    Pockemon::~Pockemon() {
        }






