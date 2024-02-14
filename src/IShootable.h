//
// Created by Den on 14.02.2024.
//

#ifndef HELLOWORLD_ISHOOTABLE_H
#define HELLOWORLD_ISHOOTABLE_H

//Интерфейс, который содержит чисто виртуальный метод стрельбы

class IShootable{

public:
    virtual void Shoot() = 0;

};


#endif //HELLOWORLD_ISHOOTABLE_H
