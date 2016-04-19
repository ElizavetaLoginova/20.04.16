#include<iostream>
#include "Array.h"

using namespace std;

Array::Array(int n)
{
	SetSize(n);
	a = AllocMemory(size);
	//cout << "Object created!" << endl;
}

int Array::TheElement(int num) //???????????????????????????????????????????????????????????
{
	int key;
	key = num;
	return key;
}

Array::Array(int* x, int n)
{
	SetSize(n);
	//a = x;//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	a = new int[n];
	for (int i = 0; i < size; i++)
	{
		a[i] = x[i];
	}
}

void Array::RandomArray()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % N;
	}
}

void Array::EnterArray(int* x)
{
	//TODO
}

void Array::BubbleSort()
{
	for (int i = size - 1; i >= 1; i--)
	for (int j = 1; j <= size; j++)
	if (a[j] > a[j - 1]) Swap(a[j], a[j - 1]);
}
void Array::InsertionSort()
{
	for (int i = 1; i < size; i++)
	for (int j = i; j > 0 && a[j - 1] < a[j]; j--)
		swap(a[j - 1], a[j]);
}
void Array::SelectionSort()
{
	for (int i = 1; i <= size - 1; i++)
	{
		int max = i - 1;
		for (int j = i - 1; j <= size - 1; j++)
		if (a[j] > a[max])
			max = j;
		Swap(a[i - 1], a[max]);
	}
}
void Array::Merge(int first, int last)
{
	int middle, start, final, j;
	int *mas = new int[100];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
	if ((start <= middle) && ((final > last) || (a[start] < a[final])))
	{
		mas[j] = a[start];
		start++;
	}
	else
	{
		mas[j] = a[final];
		final++;
	}
	//возвращение результата в список
	for (j = first; j <= last; j++) a[j] = mas[j];
	delete[]mas;
};//рекурсивная процедура сортировки
void Array::MergeSort(int first, int last)
{
	if (first < last)
	{
		MergeSort(first, (first + last) / 2); //сортировка левой части
		MergeSort((first + last) / 2 + 1, last); //сортировка правой части
		Merge(first, last); //слияние двух частей
	}
}
void Array::QuickSort()
{
	QuickSort(0, size - 1);
}
void Array::QuickSort( int left, int right)
{
	int i = left, j = right;
	int m = a[(i + j) / 2];
	while (i <= j)
	{
		while (a[i] < m) i++;
		while (a[j]>m) j--;
		if (i <= j)
		{
			Swap(a[i], a[j]);
			i++;
			j--;
		}
		if (left < j) QuickSort(left, j);
		if (i < right) QuickSort(i, right);
	}
}
void Array::Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

int Array::GetByIndex(int i) const
{
	if (i < 0 || i >= size)
	{
		cout << "out of range!" << endl;
		return 0;
	}
	return a[i];
}
void Array::SetByIndex(int i, int value)
{
	if (i < 0 || i >= size)
	{
		cout << "out of range!" << endl;
		return;
	}

	a[i] = value;
}

int Array::CompareTo(Array other)
{
	if (GetSize() > other.GetSize())
		return 1;
	else if (GetSize() < other.GetSize())
		return -1;
	else return 0;
}

int Array::BinarySearch(int key)
{
	int left = 0, right = N, mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (key<a[mid]) right = mid - 1;
		else if (key>a[mid]) left = mid + 1;
		else return mid;
	}
	return -1;
}

int Array::GetSize() const
{
	return size;
}

int Array::FindMin()
{
	int min = 0;
	for (int i = 1; i < size; i++)
	if (a[i] < a[min])
		min = i;
	return min;
}
int Array::FindMax()
{
	int max = 0;
	for (int i = 1; i < size; i++)
	if (a[i] >= a[max])
		max = i;
	return max;
}

void Array::DisplayArray()
{
	for (int i = 0; i < size; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
}

Array::~Array()
{
	delete[] a;
	//cout << "Object destroyed!" << endl;
}

void Array::SetSize(int n)
{
	if (n <= 0) size = N;
	else size = n;
}

int* Array::AllocMemory(int n)
{
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	return a;
}

