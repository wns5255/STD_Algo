#ifndef __RIDE_H
#define __RIDE_H
#include "Person.h"

class Ride
{
	Person person;
	int cost, num, min;
	int age;//���� 9, min 10��
	mutable int height;
public:
	Ride() { num = 10, min = 10, age = 14, height = 150; }
	Ride(int n, int m, int myAge) : num(n), min(m), age(myAge) {}
	Ride(int n, int m, int myAge, int h) : num(n), min(m), age(myAge),height(h) {} //�����ε�

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
	}//���� á����
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

	}//Ű üũ
	bool WithParents()
	{
		if (person.GetWPC() == 1)
		{
			height -= 10;
			return true;
		}
		else
			return false;

	}//�θ�԰� �Բ��Դ���
};

#endif