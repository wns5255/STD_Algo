#ifndef __MENU_H_
#define __MENU_H_
using namespace std;

class Menu
{
private:
	char* WhatMenu;	// �޴� �̸�
	int cost;		// �ش� �޴� ����
	int result;		// �� ����


public:
	Menu();			// ������	
	~Menu();		// �Ҹ���

	void ShowMenu(void);
	int Calculate(const char* MenuName, int num); // �޴� �̸��� �޾Ƽ� �ش� �޴��� �������� ��ȯ
	void ShowOfferResult(void);			// ���� ��� ���

};

#endif
