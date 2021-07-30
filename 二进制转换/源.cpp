#include<iostream>
using namespace std;
int i = 0;
int main()
{
	void binary(int x, int* p);
	int x;
	int p[100];
	cout << "输入整数：" << endl;
	cin >> x;
	cout << "该数二进制为：" << endl;
	if (x == 0)
		cout << "0" << endl;
	else
	{
		binary(x, p);
		for (int j = i - 1; j >= 0; j--)
			cout << p[j];
		cout << endl;
	}
	return 0;
}

void binary(int x, int* p)
{
	if (x == 0) return;
	else
	{
		p[i] = x % 2;
		i++;
		binary(x / 2, p);
	}
}