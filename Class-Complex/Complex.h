const int N = 100;

class Complex
{
public:
	Complex();
	Complex(int r);
	Complex(int r, int i);
	Complex(const Complex &c);   // конструктор копирования
	~Complex();
	double Mod();
	void Draw();
	void Write(char);
	double Argument();
	void RootsExtract(int);
	

private:
	int real;
	int im;	
};
