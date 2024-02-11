#include <iostream>
using namespace std;
#include <string>
#include "Shotgun.cpp"


int main() {

    Shotgun shotgun = Shotgun("Nova", 16, 2, 15);
    shotgun.Shoot();

    return 0;
}
