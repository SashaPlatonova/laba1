

#ifndef LABA1_POCKEMON_H
#define LABA1_POCKEMON_H

#include <iostream>
#include <string>

class Pockemon {
protected:
    int hp;
    int attack;
    std:: string special_attack = "nothing";
    std:: string special_defense = "nothing";
    int speed;
public:
    Pockemon();
    Pockemon(int hp, int attack, int speed);
    ~Pockemon();

    int getHp();

    int getAttack();

    int getSpeed();

    std::string getSpecialAttack();

    std::string getSpecialDefense();

    void setHp(int hp);

};


#endif //LABA1_POCKEMON_H
