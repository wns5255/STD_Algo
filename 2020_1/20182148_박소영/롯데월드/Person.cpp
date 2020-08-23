#include <iostream>
#include "Person.h"
using namespace std;
	//void Person::Buy_Food(const OfferMenu & menu, int pay);

	void Person::PAY()
	{

		if (money >= ride.SaleRide(age,num))
			cout << "거스름돈: " << money - ride.SaleRide(age, num) << "\n";
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
