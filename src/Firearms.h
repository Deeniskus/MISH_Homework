//
// Created by Den on 14.02.2024.
//

#ifndef HELLOWORLD_FIREARMS_H
#define HELLOWORLD_FIREARMS_H


#include "Weapon.h"
#include "IShootable.h"
using std::cout;
using std::endl;
using std::string;
//Наследник класса "оружие" с доп полем, которые реализует интерфейс IShootable.

class Firearms : public Weapon, public IShootable{
public:

    Firearms(string name, int ammo_amount, int Chance_To_Explode) : Weapon(std::move(name), ammo_amount), chance_to_explode(Chance_To_Explode) {
    }


    void Shoot() override;

private:
    int chance_to_explode;

};


#endif //HELLOWORLD_FIREARMS_H
