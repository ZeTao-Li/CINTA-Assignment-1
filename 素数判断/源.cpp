#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	bool Isprime(int x);
	int x;
	cout << "������һ��������" << endl;
	cin >> x;
	cout << "�жϸ����Ƿ�Ϊ������" << endl;
	Isprime(x);
	return 0;
}
bool Isprime(int x)
{
	if (x <= 1)
	{
		cout << x << "��������" << endl;
		return 0;
	}
	else
	{
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((x % i) == 0)
			{
				cout << x << "��������" << endl;
				return 0;
			}
		}
		cout << x << "������" << endl;
		return 1;
	}
}