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

using namespace std;

int main() {
	Complex num;
	Complex a, b;
	cin >> a;
	cout << endl << endl;
	cin >> b;
	cout << endl << endl;

	//print overloads
	Complex x;

	x = a + b;
	cout << "a + b:" << x;

	x = a - b;
	cout << "a - b:" << x;

	x = a * b;
	cout << "a * b:" << x;

	x = a / b;
	cout << "a / b:" << x;

	x = a += b;
	cout << "a += b:" << x;

	x = a -= b;
	cout << "a -= b:" << x;

	x = a *= b;
	cout << "a *= b:" << x;

	x = a /= b;
	cout << "a /= b:" << x;

	x++;
	cout << "x++" << x;

	x--;
	cout << "x--" << x;

	++x;
	cout << "++x" << x;

	--x;
	cout << "--x" << x;

}