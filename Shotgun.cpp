#include "Firearms.cpp"

class Shotgun : public Firearms{

public:
    //Класс дробовика, который наследуется от огнестрельного с доп полем "разброс" и переопределённым методом стрельбы
    int spread;
    Shotgun(string name, int ammoAmount, int chanceToExplode, int Spread) : Firearms(name, ammoAmount, chanceToExplode) {
        spread = Spread;
    }

    //Переобределённый метод стрельбы, пушта дробовик сто проц не по пульке стреляет
    void Shoot() override{
        ammoAmount -= 4;
        cout << "Bang Bang Bang Bang"  << endl;
    }
};
