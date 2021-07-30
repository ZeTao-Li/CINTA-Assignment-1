#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c;
	cout << "输入a，b，c：" << endl;
	cin >> a >> b >> c;
	cout << "判断a^3+b^3=c^3是否成立：";
	if (pow(a, 3.0) + pow(b, 3.0) == pow(c, 3.0))
		cout << "成立" << endl;
	else
	{
		cout << "不成立" << endl;
		c = pow((pow(a, 3.0) + pow(b, 3.0)), 1.0 / 3.0);
		cout << "使得公式成立的c为：" << c << endl;
	}
	return 0;
}