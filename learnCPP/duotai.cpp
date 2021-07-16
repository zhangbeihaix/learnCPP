//
//  duotai.cpp
//  learnCPP
//
//  Created by ruizwang on 2021/7/16.
//

#include <stdio.h>
#include <iostream>

class Car {
public:
    virtual void run() {
        std::cout << "unknown car running" << std::endl;
    }
};

class benz:public Car {
public:
    void run() {
        std::cout << "bens is running" << std::endl;
    }
};

class tesla:public Car {
public:
    void run() {
            std::cout << "tesla xxxrun " << std::endl;
    }
};




int main(void) {
    Car *carPtr;
    benz benzCar;
    tesla teslaCar;
    Car knownCar;
    carPtr = &knownCar;
    carPtr->run();
    carPtr = &benzCar;
    carPtr->run();
    carPtr = &teslaCar;
    carPtr->run();
    return 0;
}
