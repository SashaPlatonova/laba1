//
// Created by User on 16.11.2020.
//

#ifndef LABA1_MAGICPOK_H
#define LABA1_MAGICPOK_H


#include "Pockemon.h"

class MagicPok: protected Pockemon {


protected:

    std:: string name;
    std:: string enemy_name = "WarPockemon";

public:
    MagicPok(int hp, int attack, int speed, std::string name, std::string enemyName);

    std::string getName();

    void setName(std::string name);

    std::string getEnemyName();

    void setEnemyName(std::string enemyName);

    void print_info();

    void fight(int attack);

    void print_to_xml();
};


#endif //LABA1_MAGICPOK_H
