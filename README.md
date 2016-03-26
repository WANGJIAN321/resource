#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Array[100], Arr[100][2];
	int	n = 0, j = 1, Max;
	cout << "请输入整数数组元素:" << endl;
	for (;; n++)
	{
		cin >> Array[n];
		if (cin.get() == '\n')
		{
			break;
		}
	}
	Arr[0][1] = Array[0];
	for (; j<n + 1; j++)
	{
		Arr[j][0] = max(Arr[j - 1][0], Arr[j - 1][1]);
		Arr[j][1] = max(Arr[j - 1][1] + Array[j], Array[j]);
		Max = max(Arr[j][0], Arr[j][1]);
	}
	cout << "该数组最大的子数组和为:" << Max << endl;
	return 0;
}
