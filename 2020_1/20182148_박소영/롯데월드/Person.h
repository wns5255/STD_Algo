#define _CRT_SECURE_NO_WARNINGS
#ifndef _PERSON_H_
#define _PERSON_H_
#include <cstring>
//#include "Menu.h"
#include "Ride.h"

class Person {
private:
    Ride ride;
    //OfferMenu menu;
    int num, age, height, money, min, WPC;
    char type[100];
public:
    //void Buy_Food(const OfferMenu& menu, int pay);
    Person() { money = 10000, min = 10, num = 1, age = 14, height = 150; }
    Person(int myMoney, int n, int m, int myAge, int h) : money(myMoney), num(n), min(m), age(myAge), height(h){};   // 음식점 , 디폴트
    Person(int myMoney, int n, int m, int myAge) :money(myMoney), num(n), min(m), age(myAge) {};
    void PAY();
    void TAKE();
};
#endif