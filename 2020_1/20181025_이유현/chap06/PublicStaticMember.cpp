#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;

	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü";
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü";
	// cout << sim1.simObjCnt << "��° SoSimple ��ü";
	// cout << sim2.simObjCnt << "��° SoSimple ��ü";
	//  ==> ������� �������� ���ظ� ����ų �� ����
	// static ��������� Ŭ���� �̸��� ���� �����ϴ� ���� ����!

	return 0;
}