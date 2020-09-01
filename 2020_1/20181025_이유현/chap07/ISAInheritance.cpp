#include <iostream>
#include <cstring>
using namespace std;

class Computer 
{
private:
	char owner[50];
public:
	Computer(const char* name) {
		strcpy(owner, name);
	}
	void Calculate(void)
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class Notebook : public Computer
{
private:
	int Battery;
public:
	Notebook(const char* name, int initChag) : Computer(name), Battery(initChag)
	{}
	void Charging(void) { Battery += 5; }
	void UseBattery(void) { Battery -= 1; }
	void MovingCal(void)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo(void) {	return Battery;	}
};

class TabletNotebook : public Notebook
{
private:
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) : Notebook(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(const char* penInfo) 
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;  // void�� �Լ� ����(Ż��)
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�.";
		UseBattery();
	}
};

int main(void)
{
	Notebook nc("�̼���", 5);
	TabletNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}

/*
strcmp : ���ڿ� �� �Լ�
���ϴ� �� ���ڿ��� ������ 0�� ��ȯ.

��� ����� IS-A�����϶� ���� �����ϴ�!
��Ʈ�� is a ��ǻ��.
Ÿ�� is a ��Ʈ��. Ÿ�� is a ��ǻ��.
*/