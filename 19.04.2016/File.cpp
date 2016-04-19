#include<iostream>
#include "Array.h"

using namespace std;

int main()
{
	int n = 10;
	Array arr(n), arr1, arr2(6);
	arr.RandomArray();
	cout << "Sorce array" << endl;
	arr.DisplayArray();
	cout << "Sorce array" << endl;
	arr1.DisplayArray();
	cout << "Sorce array" << endl;
	arr2.DisplayArray();
	int* a = new int[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = i + 1;
	}
	Array arr5(a, 5);

	arr5.DisplayArray();
	a[1] = 1111;
	for (int i = 0; i < 5; i++)
	{
		cout << "  " << a[i];
	}
	cout << endl;
	arr5.DisplayArray();
	arr5.SetByIndex(1111, 78);
	arr5.CompareTo(arr);
	delete[]a;
	return 0;
}