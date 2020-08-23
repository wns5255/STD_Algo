//#include <cstring>
//#include <iostream>
//#include "Menu.h"
//using namespace std;
//
//OfferMenu::OfferMenu() {} //디폴트 생성자
//
//OfferMenu::OfferMenu(const OfferMenu& copy)
//{
//    cout << " --------- MENU --------- " << "\n";
//
//}
//
//OfferMenu::ShowMenu(OfferMenu ob)
//{
//    cout << "|   OksusuButter   3000  |" << "\n";
//    cout << "|   JjamBbong      8000  |" << "\n";
//    cout << "|   GongCha      5000  |" << "\n";
//    cout << "|   HotDogSet      6000  |" << "\n";
//    cout << "|   KolPop         4500  |" << "\n";
//    cout << " ------------------------ " << "\n";
//}
//
//explicit int OfferMenu::SaleMenu(char* WantMenu, int num)
//{
//    int len = strlen(WantMenu) + 1;
//    Menu = new char[len];
//    strcpy(Menu, WantMenu);
//    this->num = num;
//
//    if (Menu == "OksusuButter")
//        price += 3000 * num;
//
//    if (Menu == "JjamBbong")
//        price += 8000 * num;
//
//    if (Menu == "GongChar")
//        price += 5000 * num;
//
//    if (Menu == "HotDogSet")
//        price += 6000 * num;
//
//    if (Menu == "KolPop")
//        price += 4500 * num;
//}
//
//OfferMenu::~OfferMenu()
//{
//    delete[]Menu;
//}
//
//void OfferMenu::ShowSaleFood()
//{
//    cout << "주문하신 메뉴 " << Menu << " 를 " << num << "개 주문하셨습니다." << endl;
//    cout << "총 가격은 " << price << "원 입니다." << endl;
//}