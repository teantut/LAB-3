#include <iostream>
#include "Header.h"
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	String a("45");
	String b("75");
	String sum = a + b;
	cout << "первай переменная : " << a << "вторая переменная : " << b << endl;
	cout << "сумма: " << sum << endl;
	String input;
	cin >> input;
	if (input == sum)
		cout << "равенство:" << endl;
	else if (input < sum)
		cout << "меньше:" << endl;
	else if (input > sum)
		cout << "Больше" << endl;
	int num;
	cin >> num;
	cout << num << endl;
	int k;
	cin >> k;
	String repeat;
	input = repeat.repeater(input, k);
	cout << input;
	_getch();
}