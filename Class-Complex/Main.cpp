#include<iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

int main()
{
	int rePart, imPart;

	cout << "Enter the real part: ";
	cin >> rePart;
	cout << "Enter the imaginary part: ";
	cin >> imPart;


	Complex a(rePart, imPart);
	Complex b(3, 2);
	Complex c(-2, -2);

	a.Write('a');
	b.Write('b');
	c.Write('c');

	if (rePart>0 && imPart>0)
	cout << endl<< "The argument of " << 'a'<<" is = " << a.Argument();

	//1) Если(1 - я и 4 - я координатные четверти, или правая полуплоскость), то аргумент нужно находить по формуле .
	//	2) Если(2 - я координатная четверть), то аргумент нужно находить по формуле pi+arctg .
	//	3) Если(3 - я координатная четверть), то аргумент нужно находить по формуле -pi+arctg .

	/*a.Draw();*/

	int n;
	cout << endl <<"Enter the number (n<0) for taking roots " << endl;
	cin >> n;
	a.RootsExtract(n);

	system("pause");
	return 0;
}
