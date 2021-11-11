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


#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Complex
{
	double real; 
	double image; 
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	~Complex();


	void SetReal(double);
	void SetImage(double);
	double GetReal() const;
	double GetImage() const;

	Complex& operator = (const Complex&);
	operator string() const;
	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator - (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend Complex operator / (const Complex&, const Complex&);
	friend Complex operator ^ (const Complex&, const unsigned);
	friend Complex operator += (const Complex& x, const Complex& y);
	friend Complex operator *= (const Complex& x, const Complex& y);
	friend Complex operator -= (const Complex& x, const Complex& y);
	friend Complex operator /= (const Complex& x, const Complex& y);
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
	friend bool operator==(const Complex& x, const Complex& y);
	Complex& operator ++();
	Complex& operator --();
	Complex operator ++(int);
	Complex operator --(int);
};