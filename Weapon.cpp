


#include <iostream>
using namespace std;

//Абстрактный класс "оружие"

class Weapon {
public:
    string name;
    int ammoAmount;

    Weapon(string Name, int AmmoAmount){
        name = Name;
        ammoAmount = AmmoAmount;
    }


};
