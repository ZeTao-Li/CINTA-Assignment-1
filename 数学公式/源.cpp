#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c;
	cout << "����a��b��c��" << endl;
	cin >> a >> b >> c;
	cout << "�ж�a^3+b^3=c^3�Ƿ������";
	if (pow(a, 3.0) + pow(b, 3.0) == pow(c, 3.0))
		cout << "����" << endl;
	else
	{
		cout << "������" << endl;
		c = pow((pow(a, 3.0) + pow(b, 3.0)), 1.0 / 3.0);
		cout << "ʹ�ù�ʽ������cΪ��" << c << endl;
	}
	return 0;
}