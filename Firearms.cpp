





#include <iostream>
using namespace std;
#include "Weapon.cpp"
#include "IShootable.cpp"

//Наследник класса "оружие" с доп полем, которые реализует интерфейс IShootable.

class Firearms : public Weapon, public IShootable{
public:

    int chanceToExplode;
    Firearms(string name, int ammoAmount, int ChanceToExplode) : Weapon(name, ammoAmount) {
        chanceToExplode = ChanceToExplode;
    }

    //Тут реализован метод стрельбы, пушта мб большинство оружий стреляют по 1 патрону и если создавать какой нибудь класс
    //типа "Винтовка" или "Снайперка", то метод не нужно будет переопределять.
    virtual void Shoot() override{
        ammoAmount -= 1;
        cout << "Bang"  << endl;
    }

};

