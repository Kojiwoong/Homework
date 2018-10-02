#include <iostream>
using namespace std;
class Complex {
private:
	double real;
	double image;
public:
	Complex() {}
	Complex(double r, double i)
	{
		real = r;
		image = i;
	}
	Complex operator +(Complex C);
	Complex operator -(Complex C);
	Complex operator *(Complex C);
	Complex operator *(double mult);
	void OutComplex()
	{
		cout << real << '+' << image << 'i' << endl;
	}
};
Complex Complex::operator +(Complex C)
{
	Complex T;
	T.real = real + C.real;
	T.image = image + C.image;
	return T;
}
Complex Complex::operator -(Complex C)
{
	Complex T;
	T.real = real - C.real;
	T.image = image - C.image;
	return T;
}
Complex Complex::operator *(Complex C)
{
	Complex mult;
	mult.image = image * C.image;
	mult.real = real * C.real;
	return mult;
}
Complex Complex::operator *(double mult)
{
	Complex result;
	result.real = real * mult;
	result.image = image * mult;
	return result;
}


int main()
{
	Complex COMa(1.5,2.3);
	Complex COMb(2.4,5.3);
	Complex COM1, COM2;
	COM1 = COMa + COMb;
	COM2 = COMa - COMb;
	Complex COM3;
	COM3 = COMa * COMb;
	cout << "COMa : ";COMa.OutComplex();
	cout << "COMb : ";COMb.OutComplex();
	cout << "Complex + : ";COM1.OutComplex();
	cout << "Complex - : ";COM2.OutComplex();
	cout << "Complex * : ";COM3.OutComplex();
}