//
// Created by User on 16.11.2020.
//

#ifndef LABA1_FIREPOC_H
#define LABA1_FIREPOC_H


#include "Pockemon.h"

class FirePoc : Pockemon {
public:

    FirePoc(int hp, int attack, int speed, std::string name, std::string enemyName);
    std::string getName();

    void setName(std::string name);

    std::string getEnemyName();

    void setEnemyName(std::string enemyName);

    void fight(int attack);

    void print_info();

    void print_to_xml();

public:

protected:
    std:: string name;
    std:: string enemy_name = "WarPockemon";

};


#endif //LABA1_FIREPOC_H
