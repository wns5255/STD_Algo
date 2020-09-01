// HAS-A ����(������ ����)�� ����� ������ ������ ���� ����� �̸� ����ϴ� ���� �Ϲ����̴�.

#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;  // �Ѿ��� ����
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot(void) {
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff(void)
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

};

int main(void) {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	return 0;
}

