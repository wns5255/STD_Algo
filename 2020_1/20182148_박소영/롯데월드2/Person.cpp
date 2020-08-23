#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Person.h"
#include <cstring>
using namespace std;
	//void Person::Buy_Food(const OfferMenu & menu, int pay);

	void Person::PAY()
	{

		if (money >= ride.SaleRide(age,num))
			cout << "거스름돈: " << money - ride.SaleRide(age, num) << "\n";
		else
			cout << "한도초과" << "\n";

	}

	void Person::ChoiceMenu(const char*WantMenu, int n2)
	{
		n2 = num2;
		int len = strlen(WantMenu) + 1;
		Menu = new char[len];

	/*	cout << "메뉴와 갯수를 말씀해주세요" << endl;
		cin >> WantMenu >> num2;*/

		strcpy(Menu, WantMenu);
	}

	void Person::PAY2()
	{
		if (money >= menu.SaleMenu(Menu, num2))
			cout << "거스름돈: " << money - menu.SaleMenu(Menu, num2) << "\n";
		else
			cout << "한도초과" << "\n";

	}

	void Person::TAKE()
	{
		if (ride.HeightCheck(height) == true)
		{
			if (ride.Full(num) && ride.WaitTime(min))
				cout << "탑승하세요" << endl;
			else if (ride.WaitTime(min) == 0 or ride.Full(num) == 0)
				if (ride.WaitTime(min) == 0)
					cout << min % 10 << "분 뒤 탑승 가능" << endl;
				else if (ride.Full(num) == 0)
					cout << "정원으로 인해 탑승 불가능" << endl;
		}
		else
			cout << "키로 인해 탑승 불가능합니다." << endl;
	}
