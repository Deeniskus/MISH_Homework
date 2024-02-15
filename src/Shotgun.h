//
// Created by Den on 14.02.2024.
//

#ifndef HELLOWORLD_SHOTGUN_H
#define HELLOWORLD_SHOTGUN_H

#include "Firearms.h"

class Shotgun : public Firearms{
public:
    //Класс дробовика, который наследуется от огнестрельного с доп полем "разброс" и переопределённым методом стрельбы
    Shotgun(string name, int ammoAmount, int chanceToExplode, int Spread) : Firearms(std::move(name), ammoAmount, chanceToExplode), spread(Spread) {
    }

    void Shoot() override;
private:
    int spread;

};


#endif //HELLOWORLD_SHOTGUN_H
