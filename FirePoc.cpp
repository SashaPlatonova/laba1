//
// Created by User on 16.11.2020.
//

#include "FirePoc.h"
#include <fstream>
FirePoc::FirePoc(int hp, int attack, int speed, std::string name, std::string enemyName) :
Pockemon(hp, attack, speed), name(name), enemy_name(enemyName) {
    special_attack = "HeatWave";
    special_defense = "Fire shield";
}

    std::string FirePoc::getName() {
        return name;
    }

    void FirePoc::setName(std::string name) {
        FirePoc::name = name;
    }

    std::string FirePoc::getEnemyName(){
        return enemy_name;
    }

    void FirePoc::setEnemyName(std::string enemyName) {
        enemy_name = enemyName;
    }

    void FirePoc::fight(int attack) {
        setHp(getHp()-attack);
    }

    void FirePoc:: print_info () {
        std:: cout << " Name is: " << getName() << "\n Enemy name is: " << getEnemyName() <<
                   "\n Hp: " << getHp() << "\n Attack: " << getAttack() << "\n Special attack: " << getSpecialAttack()
                   << "\n Special defense: " << getSpecialDefense() << "\n Speed: " << getSpeed() << std::endl;
    }

void FirePoc:: print_to_xml () {
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