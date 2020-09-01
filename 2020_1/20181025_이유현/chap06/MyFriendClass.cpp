// friend ����
#include <iostream>
#include <cstring>
using namespace std;

class Girl;  // Girl�� Ŭ���� �̸��̶�� ���� �˸�. ��� ������ ����.

class Boy {
private:
	int height;
	friend class Girl;  // GirlŬ������ friend�� ���� + Girl Ŭ���� ����
public:
	Boy(int len) : height(len)
	{}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy_s(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;  // BoyŬ������ friend�� ����
};

// �����Ϸ��� �� �Լ��� ����� �����ϱ� ���ؼ��� GirlŬ������ phNum�� �����Ѵٴ� ���� Ȯ���ؾ��Ѵ�.
// ���� ���Ǹ� GirlŬ���� �ؿ� �� ��.
void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl;
}

int main(void) {
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}

/*
friend ������ �� Ŭ������ private ��� ������ �����ϰ� ���ش�.

private�����̵� public �����̵� �ƹ������� ���� ����.

friend ������ ����ģ ����� �ſ� ����. ���ȼ�DOWN!
*/