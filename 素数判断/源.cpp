#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	bool Isprime(int x);
	int x;
	cout << "请输入一个整数：" << endl;
	cin >> x;
	cout << "判断该数是否为素数：" << endl;
	Isprime(x);
	return 0;
}
bool Isprime(int x)
{
	if (x <= 1)
	{
		cout << x << "不是素数" << endl;
		return 0;
	}
	else
	{
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((x % i) == 0)
			{
				cout << x << "不是素数" << endl;
				return 0;
			}
		}
		cout << x << "是素数" << endl;
		return 1;
	}
}