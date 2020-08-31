#ifndef _PERSON_H_
#define _PERSON_H_
#include "Menu.h"

class Person
{
private:
    int num, age, height, money, min, WPC;
    char* menu; // Menu로 보낼 메뉴 이름 값
    int num2, EatPrice;   // Menu로 보낼 메뉴 개수 값, 식비
    char type[100];
public:
    Person() { money = 10000, min = 10, num = 1, age = 14, height = 150; WPC = 1; }
    Person(int myMoney, int m, int myAge, int h, int wpc) : money(myMoney), num(1), min(m), age(myAge), height(h), WPC(wpc) {};   // 음식점 , 디폴트
    Person(int myMoney, int m, int myAge, int h) :money(myMoney), num(1), min(m), age(myAge), height(h), WPC(0) {};

    int GetMoney() { return money; }
    int GetMin() { return min; }
    int GetAge() { return age; }
    int GetHeight() { return height; }
    int GetWPC() { return WPC; }

    ////void PAY();
    //void TAKE();
    void ChoiceMenu(Menu& eat, char* WantMenu, int n2);

};


#endif;