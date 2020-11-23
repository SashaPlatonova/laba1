//
// Created by User on 16.11.2020.
//

#include <iostream>
#include "WarPoc.h"
#include <fstream>

WarPoc::WarPoc(int hp, int attack, int speed, std::string name, std::string enemyName){
    enemy_name = enemyName;
    this->name = name;
    this->hp = hp;
    this->attack = attack;
    this->speed = speed;
    special_attack = "Cross_Chop";
    special_defense = "Karate";
}

    std::string WarPoc::getName()  {
        return name;
    }

    void WarPoc::setName(std::string name) {
        WarPoc::name = name;
    }

    std::string WarPoc::getEnemyName(){
        return enemy_name;
    }

    void WarPoc::setEnemyName(std::string enemyName) {
        enemy_name = enemyName;
    }

    void WarPoc::fight(int attack) {
        setHp(getHp()-attack);
}

    void WarPoc:: print_info () {
        std:: cout << " Name is: " << getName() << "\n Enemy name is: " << getEnemyName() <<
        "\n Hp: " << getHp() << "\n Attack: " << getAttack() << "\n Special attack: " << getSpecialAttack()
        << "\n Special defense: " << getSpecialDefense() << "\n Speed: " << getSpeed() << std::endl;
    }

void WarPoc:: print_to_xml () {
    std::fstream file;
    file.open("Pockemon.xml", std::ios::app);
    if (file.is_open()){
        file << "\t" << "<Pockemons> " << "\n";
        file << "\t\t" << "<name> " << getName() << " </name>" << "\n";
        file << "\t\t" << "<HP> " << getHp() << " </HP>" << "\n";
        file << "\t\t" << "<Attack> " << getAttack() << " </Attack>" << "\n";
        file << "\t\t" << "<special_attack> " << getSpecialAttack() << " </special_attack>" << "\n";
        file << "\t\t" << "<special_defense> " << getSpecialDefense() << " </special_defense>" << "\n";
        file << "\t\t" << "<speed> " << getSpeed() << " </speed>" << "\n";
        file << "\t\t" << "<enemy_name> " << getEnemyName() << " </enemy_name>" << "\n";
        file << "\t" << "</Pockemons> " << "\n";
        file.close();
    } else
        std::cout << "Error";

}