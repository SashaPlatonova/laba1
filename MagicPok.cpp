//
// Created by User on 16.11.2020.
//

#include "MagicPok.h"
#include <iostream>
#include <fstream>
    MagicPok::MagicPok(int hp, int attack, int speed, std::string name, std::string enemyName){
        enemy_name = enemyName;
        this->name = name;
        this->hp = hp;
        this->attack = attack;
        this->speed = speed;
        special_attack = "Moonblast";
        special_defense = "Magic shield";
    }

    std::string MagicPok::getName(){
        return name;
    }

    void MagicPok::setName(std::string name) {
        MagicPok::name = name;
    }

    std::string MagicPok::getEnemyName(){
        return enemy_name;
    }

    void MagicPok::setEnemyName(std::string enemyName) {
        enemy_name = enemyName;
    }

    void MagicPok::fight(int attack) {
        setHp(getHp()-attack);
    }
    void MagicPok:: print_info () {
        std:: cout << " Name is: " << getName() << "\n Enemy name is: " << getEnemyName() <<
                   "\n Hp: " << getHp() << "\n Attack: " << getAttack() << "\n Special attack: " << getSpecialAttack()
                   << "\n Special defense: " << getSpecialDefense() << "\n Speed: " << getSpeed() << std::endl;
    }

void MagicPok:: print_to_xml () {
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

