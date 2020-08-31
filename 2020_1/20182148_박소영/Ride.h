#ifndef __RIDE_H
#define __RIDE_H
#include "Person.h"

class Ride
{
	Person person;
	int cost, num, min;
	int age;//정원 9, min 10분
	mutable int height;
public:
	Ride() { num = 10, min = 10, age = 14, height = 150; }
	Ride(int n, int m, int myAge) : num(n), min(m), age(myAge) {}
	Ride(int n, int m, int myAge, int h) : num(n), min(m), age(myAge),height(h) {} //오버로딩

	Ride& SetSeat()
	{
		num -= 1;
		return *this; //this
	}
	bool Full()
	{
		if (1 <= num)
			return true;
		else
			return false;
	}//정원 찼는지
	bool WaitTime()
	{
		if (person.GetMin() % min == 0)
			return true;
		else
			return false;
	}
	bool HeightCheck()
	{
		if (person.GetHeight() >= height)
			return true;
		else
			return false;

	}//키 체크
	bool WithParents()
	{
		if (person.GetWPC() == 1)
		{
			height -= 10;
			return true;
		}
		else
			return false;

	}//부모님과 함께왔는지
};

#endif