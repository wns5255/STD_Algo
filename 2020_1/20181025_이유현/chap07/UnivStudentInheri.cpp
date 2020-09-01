#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName(void) const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou(void) const
	{
		cout << "I am " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage,  const char* mymajor) : Person(myage, myname)  // �θ� ������ ȣ���ؼ� �θ��� ��� �ʱ�ȭ
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou(void)
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}

/*
�ڽ� Ŭ������ �����ڴ� �θ� Ŭ������ ����� �ʱ�ȭ�� �ǹ��� �ִ�!

�ڽ� Ŭ������ �θ��� private ����� ���� �Ұ�. ( ����� ������ ������ X) (���������� �����ؾ���)
*/