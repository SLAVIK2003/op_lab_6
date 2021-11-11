/*
Комплексне число представляються парою дійсних чисел (real, image), де поля
• real – дійсна частина,
• image – уявна частина.
Реалізувати клас Complex для роботи з комплексними числами. Обов’язково
мають бути реалізовані методи:
• додавання add() (real1, image1) + (real2, image2) = (raal1 + real2, image1 + image2);
• множення mul() (real1, image1) × (real2, image2) = (real1·real2 – image1·image2, real1·image2 + real2·image1);
• порівняння equ() (real1, image1) = (real2, image2) , якщо (real1 = real2) і (image1 = image2).
*/


#include "Complex.h"

//constructors
Complex::Complex()
{
	this->real = 0;
	this->image = 0;
}

Complex::Complex(double _real, double _image)
{
	this->real = _real;
	this->image = _image;
}

Complex::Complex(const Complex& num)
{
	this->real = num.real;
	this->image = num.image;
}

//destructor
Complex::~Complex()
{
	this->real = 0;
	this->image = 0;
}

//setters, getters
void Complex::SetReal(double _real)
{
	real = _real;
}

void Complex::SetImage(double _image)
{
	image = _image;
}

double Complex::GetReal() const
{
	return real;
}

double Complex::GetImage() const
{
	return image;
}


// overload operators
Complex& Complex::operator = (const Complex& num)
{
	real = num.real;
	image = num.image;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << " Real = " << real << endl;
	ss << " Image = " << image << endl;
	return ss.str();
}

Complex operator + (const Complex& x, const Complex& y)
{
	return Complex(x.real + y.real, x.image + y.image);
}

Complex operator - (const Complex& x, const Complex& y)
{
	return Complex(x.real - y.real, x.image - y.image);
}

Complex operator * (const Complex& x, const Complex& y)
{
	double i, j;
	i = x.real * y.real - x.image * y.image;
	j = x.real * y.image + x.real * y.image;
	return Complex(i, j);
}

Complex operator / (const Complex& x, const Complex& y)
{
	double k, i, j;
	k = y.real * y.real + y.image * y.image;
	i = (x.real * y.real + x.image * y.image) / k;
	j = (y.real * x.image - x.real * y.image) / k;
	return Complex(i, j);
}

Complex operator ^ (const Complex& x, const unsigned n)
{
	Complex y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}

ostream& operator << (ostream& out, const Complex& num)
{
	cout << endl;
	out << string(num);
	cout << endl;
	return out;
}

istream& operator >> (istream& in, Complex& r)
{
	cout << endl;
	cout << " Real = "; in >> r.real;
	cout << " Image = "; in >> r.image;
	cout << endl;
	return in;
}


Complex& Complex::operator ++()
{
	real++;
	return *this;
}


Complex& Complex::operator --()
{
	real--;
	return *this;
}


Complex Complex::operator ++(int)
{
	Complex t(*this);
	image++;
	return t;
}


Complex Complex::operator --(int)
{
	Complex t(*this);
	image--;
	return t;
}

Complex operator += (const Complex& x, const Complex& y)
{
	return Complex(x.real + y.real, x.image + y.image);
}

Complex operator -= (const Complex& x, const Complex& y)
{
	return Complex(x.real - y.real, x.image - y.image);
}

Complex operator *= (const Complex& x, const Complex& y)
{
	double i, j;
	i = x.real * y.real - x.image * y.image;
	j = x.real * y.image + x.real * y.image;
	return Complex(i, j);
}

Complex operator /= (const Complex& x, const Complex& y)
{
	double k, i, j;
	k = y.real * y.real + y.image * y.image;
	i = (x.real * y.real + x.image * y.image) / k;
	j = (y.real * x.image - x.real * y.image) / k;
	return Complex(i, j);
}


bool operator == (const Complex& x, const Complex& y) {
	return (x.real == y.real && x.image == y.image);
}
