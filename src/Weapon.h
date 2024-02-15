//
// Created by Den on 14.02.2024.
//

#ifndef HELLOWORLD_WEAPON_H
#define HELLOWORLD_WEAPON_H

#include <iostream>
#include <utility>
#include <string>
//Абстрактный класс "оружие"

class Weapon {
public:
    Weapon(std::string Name, int Ammo_amount){
        name = std::move(Name); //Это мне посоветовал CLion, как я понял, мы "перемещаем" значение из Name в name, а не копируем, для экономии памяти?
        ammo_amount = Ammo_amount;
    }
    int get_ammo_amount(){
        return ammo_amount;
    };
    void set_ammo_amount(int value){
        ammo_amount = value;
    }

private:
    std::string name;
    int ammo_amount;

};


#endif //HELLOWORLD_WEAPON_H
