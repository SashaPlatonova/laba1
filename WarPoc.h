//
// Created by User on 16.11.2020.
//

#ifndef LABA1_WARPOC_H
#define LABA1_WARPOC_H


#include "Pockemon.h"

class WarPoc : protected Pockemon{
public:
    WarPoc(int hp, int attack, int speed, std::string name, std::string enemyName);
    std::string getName();

    void setName(std::string name);

    std::string getEnemyName();

    void setEnemyName(std::string enemyName);

    void fight(int attack);

    void print_info();

    void print_to_xml();
protected:

    std:: string name;
    std:: string enemy_name = "MagicPockemon";
};


#endif //LABA1_WARPOC_H
