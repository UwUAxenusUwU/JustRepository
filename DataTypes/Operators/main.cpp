//Operators
#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS		//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR             //2) Оператор присваивания
//#define INCREMENT_DECREMENT             //3) (++/--)
//#define COMPOUND_ASSIGNMENT               //4) Составные присваивания
#define COMPARISON_OPERATORS                //5) Операторы сравнения

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef ARITHMETICAL_OPERATORS
	cout << "Hello Operators" << endl;
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary asterisk
	//*3;	//Have no sense!!!

	//Unary: +, -;
	//Binary:+, -, *, /, %;
	//		 % - остаток от деления (modulo)
	cout << 17. / 5 << endl;
	//cout << 17 % 5. << endl;
	//Integer - целое число
	//Integral - целочисленный  
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	// int a = 2;
	// int b = a;
	// int c = (a + b * 4) / 5;

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT

#endif INCREMENT_DECREMENT



}
