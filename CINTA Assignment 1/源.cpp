#include<iostream>
using namespace std;
int main()
{
	void sort(int array[], int n);
	int a[5];
	cout << "键入5个数字：" << endl;
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << endl;
	sort(a, 5);
	cout << "排序后的数组：" << endl;
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void sort(int array[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (array[j] < array[k])
				k = j;
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}