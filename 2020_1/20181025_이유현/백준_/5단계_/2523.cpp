#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = n; i < (2 * n); i++)
	{
		for (int j = n; j > i - n; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}