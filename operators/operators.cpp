#include <iostream>
using namespace std;

// operators + - * / = != == < > <= >=%
// unarni 5 -5 (-) ++ 
// binary 

int main()
{
	//int a = 5;
	//int b = 8;

	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;
	//cout << a % b << endl;
	//cout << 3 % 7 << endl; // 3
	//cout << 8 % 9 << endl; // 8
	//// 3 % 7 = 0.42

	//// increament and decreament

	//a = 2;
	//cout << "a = " << a << endl;

	//a = a + 1;

	//cout << "a = " << a << endl;

	//// increament

	//a++; // postfix from incremeant
	//cout << "a = " << a;

	//++a; // prefix from incremeant
	//cout << "a = " << a;

	//// decreameant

	//a--; // postfix from decremeant
	//cout << "a = " << a;

	//--a; // prefix from decremeant
	//cout << "a = " << a;

	//int c = 5;
	//
	//cout << c++ << endl; // ------>
	//cout << ++c << endl; // <------
	//cout << c << endl;

	//int A = 3.33;
	//cout << "A = " << A << endl;


	//double pi = 3.14;

	//cout << "pi = " << pi << endl;

	//unsigned int salary = 1230923104324832904;

	//cout << "your salary = " << salary << endl;

	//double num = 37.4; // 37.4000000000000001

	//float num2 = num; // 37.40000001

	//if (num2 == num) //umova
	//{
	//	// diya
	//}
	//else
	//{
	//	// diya
	//}

	//int number1, number2;
	//cout << "enter number 1 -> ";
	//cin >> number1;
	//cout << "enter number 2 -> ";
	//cin >> number2;
	//float result = number1 / number2;
	//if (number2 == 0) {
	//	cout << "division by zero" << endl;
	//}
	//else
	//{
	//	cout << "result: " << number1 << " / " << (float) number2 << " = " << result << endl;
	//}

	//// ternarniy operator
	//(number2 == 0) ? cout << "division by zero!!!!!!!!" << endl : cout << "result: " << number1 << " / " << number2 << " = " << result << endl;

	//int day;
	//cout << "enter number of day -> ";
	//cin >> day;
	//if (day == 1) {
	//	cout << "Monday" << endl;
	//}
	//else if (day == 2) {
	//	cout << "Tuesday" << endl;
	//}
	//else if (day == 3) {
	//	cout << "Wednesday" << endl;
	//}
	//else if (day == 4) {
	//	cout << "Thursday" << endl;
	//}
	//else if (day == 5) {
	//	cout << "Friday" << endl;
	//}
	//else if (day == 6) {
	//	cout << "Saturday" << endl;
	//}
	//else if (day == 7) {
	//	cout << "Sunday" << endl;
	//}
	//else
	//{
	//	cout << "такого дня немає" << endl;
	//}

	float a, b, result;
	char key;

	cout << "enter first number -> ";
	cin >> a;

	cout << "enter second number -> ";
	cin >> b;

	cout << "[+] - add number\n[-] - sub number\n[*] - multy number\n[/] - divide number";

	cout << "choose operation -> ";
	cin >> key;

	if (key == '+') {
		result = a + b;
		cout << "result: " << result;
	}

	else if (key == '-') {
		result = a - b;
		cout << "result: " << result;
	}

	else if (key == '*') {
		result = a * b;
		cout << "result: " << result;
	}

	else if (key == '/') {
		result = a / b;
		cout << "result: " << result;
	}

	cout << "enter first number -> ";
	cin >> a;

	cout << "enter second number -> ";
	cin >> b;

	cout << "[+] - add number\n[-] - sub number\n[*] - multy number\n[/] - divide number";

	cout << "choose operation -> ";
	cin >> key;

	switch (key)
	{
	case '+':
	{
		result = a + b;
		break;
	}
	case '-':
	{
		result = a - b;
		break;
	}
	case '*':
	{
		result = a * b;
		break;
	}
	case '/':
	{
		result = a / b;
		break;
	}

	cout << "result: " << result;



	int day = 5;
	cout << "enter number of day";
	cin >> day;

	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "its working day!" << endl;
		break;
	case 6:
	case 7:
		cout << "its weekend!" << endl;







	}