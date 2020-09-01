#ifndef __RIDE_H
#define __RIDE_H
#include "Person.h"

static int cnt;

class Ride :public Person
{
	int Rcost, Rnum, Rmin;
	int Rage;//���� 9, min 10��
	mutable int Rheight;
public:
	Ride() { Rnum = 10, Rmin = 10, Rage = 14, Rheight = 150; }
	Ride(int n, int m, int myAge) : Rnum(n), Rmin(m), Rage(myAge) {}
	Ride(int n, int m, int myAge, int h) : Rnum(n), Rmin(m), Rage(myAge), Rheight(h) {} //�����ε�
	void Check()
	{
		if (WithParents() == true or false)
		{
			if (HeightCheck() == true)
			{
				if (Full() && WaitTime())
					cout << "ž���ϼ���" << endl;
				else if (WaitTime() == 0 or Full() == 0)
					if (WaitTime() == 0)
						cout << min % 10 << "�� �� ž�� ����" << endl;
					else if (Full() == 0)
						cout << "�������� ���� ž�� �Ұ���" << endl;
			}
			else
				cout << "Ű�� ���� ž�� �Ұ����մϴ�." << endl;
		}

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
		if (GetMin() % Rmin == 0)
			return true;
		else
			return false;
	}
	bool HeightCheck()
	{
		if (GetHeight() >= height)
			return true;
		else
			return false;

	}//Ű üũ
	bool WithParents()
	{
		if (GetWPC() == 1)
		{
			height -= 10;
			return true;
		}
		else
			return false;

	}//�θ�԰� �Բ��Դ���
};

#endif