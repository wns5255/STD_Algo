
#include <iostream>
#include "Person.h"
#include "Menu.h"
#include"Ticket.h"
#include "Ride.h"
#include <cstring>
using namespace std;

void Person::PAY()
{

	if (money >= Pcost)
		cout << "�Ž�����: " << money - Pcost << "\n";
	else
		cout << "�ѵ��ʰ�" << "\n";

}

void Person::TAKE()
{
	cnt++;
}



	void Person::ChoiceMenu(Menu& eat, char* WantMenu, int n2)
	{
		int len = strlen(WantMenu) + 1;
		menu = new char[len];

		EatPrice = eat.Calculate(WantMenu, n2);
		money -= EatPrice;

		if (money >= eat.Calculate(WantMenu, num2))
			cout << "�Ž����� : " << money - eat.Calculate(WantMenu, num2) << "\n";
		else
			cout << "�ѵ��ʰ�" << "\n";
	}