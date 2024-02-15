//
// Created by Den on 14.02.2024.
//

#include "Shotgun.h"


void Shotgun::Shoot() {
    set_ammo_amount(get_ammo_amount() - 4);
    cout << "Bang Bang Bang Bang"  << endl;
}