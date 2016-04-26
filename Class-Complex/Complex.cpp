#include<iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
};

Complex::Complex(int r)
{
	real = r;
	im = 0;
}

Complex::Complex(int r, int i)
{
	real = r;
	im = i;
}

Complex::Complex(const Complex &c)   
{
	real = c.real;
	im = c.im;
}

Complex::~Complex()
{
}

double Complex::Mod()
{
	return sqrt(real * real + im * im);
}

void Complex::Write(char sym)
{
	if (im > 0)
		cout << endl <<sym <<  " = " << real << " + " << im << "i";
	else cout <<endl << sym<< " = " << real << im << "i";
}

void Complex::Draw()
{
	char arr[20][20];
	int i, j;
	cout << endl;

	for (i = 0; i < 20; i++)
	for ( j = 0; j < 20; j++)
		arr[i][j] = ' ';

	for (i = 0; i < 20; i++)
		arr[i][10] = '|';
	
	for (j = 0; j < 20; j++)
		arr[10][j] = '--';

	arr[real + 9][im + 9] = '*';

	for (i = 0; i < 20; i = i++)
	{
		for ( j = 0; j < 20; j++)
			cout << arr[i][j];
		cout << endl;
	}
}

double Complex::Argument()
{
	return atan(im / real);
}

void Complex::RootsExtract(int x)
{
	cout << endl << "Roots are: " << sqrt(abs(x)) << ", " << -sqrt(abs(x));
}
