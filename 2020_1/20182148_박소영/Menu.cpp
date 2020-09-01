#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Menu.h"
using namespace std;

void Menu::ShowMenu(void)
{
	cout << " --------- MENU --------- " << "\n";
	cout << "|   OksusuButter	3000  |" << "\n";
	cout << "|   JjamBbong		8000  |" << "\n";
	cout << "|   GongCha		5000  |" << "\n";
	cout << "|   HotDogSet		6000  |" << "\n";
	cout << "|   KolPop			4500  |" << "\n";
	cout << " ------------------------ " << "\n";
}

Menu::Menu()			// ������
{
	WhatMenu = NULL;
	cost = 0;
	result = 0;
	cout << "�ֹ��Ͻ÷��� �Է����ּ���." << endl;
}

Menu::~Menu()			// �Ҹ���
{
	delete[]WhatMenu;
	cout << "�ֹ��� �����Ǿ����ϴ�." << endl;
}

int Menu::Calculate(const char* MenuName, int num) // �޴� �̸��� �޾Ƽ� �ش� �޴��� �������� ��ȯ
{
	int len = strlen(MenuName) + 1;
	WhatMenu = new char[len];
	strcpy(WhatMenu, MenuName);

	if (WhatMenu == "OksusuButter")
		cost = 3000;
	if (WhatMenu == "JjamBbong")
		cost = 8000;
	if (WhatMenu == "GongCha")
		cost = 5000;
	if (WhatMenu == "HotDogSet")
		cost = 6000;
	if (WhatMenu == "KolPop")
		cost = 4500;

	result = cost * num;

	return result;
}

void Menu::ShowOfferResult(void)		// ���� ��� ���
{
	cout << "�� �����ݾ��� " << result << "�� �Դϴ�." << endl;
}