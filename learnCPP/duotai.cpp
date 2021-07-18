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
//    virtual关键字很重要，否则三个输出都是调用的下面这个函数，看的是指针类型
//    没有virtual算是静态链接，调用派生类的run都被链接到这里了
//    也称为早绑定
//    加了virtual之后，看指针内容而不看指针类型
//    虚函数 是在基类中使用关键字 virtual 声明的函数。在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
//    下面这种写法是纯虚函数，没有函数主体
//    virtual int run() = 0;???无法理解这什么玩意儿，那我void的纯虚怎么写？？？？？
//    virtual void run() {
//        std::cout << "unknown car running" << std::endl;
//    }
//    有一个以上的纯虚函数的类是抽象类，无法被实例化。。。。virtual void run() = 0;是可以这么写的
    virtual void run() = 0;
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
//    Car knownCar;
//    carPtr = &knownCar;
//    carPtr->run();
    carPtr = &benzCar;
    carPtr->run();
    carPtr = &teslaCar;
    carPtr->run();
    return 0;
}
