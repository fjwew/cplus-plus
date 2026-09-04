#include <iostream>
using namespace std;

int main() {
	/*const int usa = 1;
	const int france = 33;
	const int ukraine = 380;
	const int italy = 39;
	const int australia = 61;
	const int kazakhstan = 7;*/

	/*enum countries {
		usa = 1 , france = 33, ukraine = 380,
		italy = 39, australia = 61, kazakhstan = 7
	};

	enum coins {
		penny = 1, nickel = 5, dime = 10, quarter = 25,
		half = 50, dollar = 100
	};

	int coin;

	cout << "choose coins value -> ";
	cin >> coin;

	switch (coin)
	{
	case penny:
		cout << "\npenny costs " << penny << "cent" << endl;
		break;
	case nickel:
		cout << "\nnickel costs " << nickel << "cent" << endl;
		break;
	case dime:
		cout << "\ndime costs " << dime << "cent" << endl;
		break;
	case quarter:
		cout << "\nquarter costs " << quarter << "cent" << endl;
		break;
	case half:
		cout << "\nhalf costs " << half << "cent" << endl;
		break;
	case dollar:
		cout << "\ncent costs " << dollar << "cent" << endl;
		break;
	default:
		break;
	}

	enum genres {
		comedy, fantasy, novel, opovydania, fairytale
	};

	genres genre;
	genre = comedy;*/


	/*int counter = 0;

	while (counter < 15)
	{
		++counter;
		cout << "i prisisted" << counter << "times" << endl;
	}

	int seats = 0;
	do
	{
		++seats;
		cout << "i prisisted" << seats << "times" << endl;
	} while (seats < 15);*/

	/*float a;
	float b;
	char key;
	float result;*/

	/*while (key != 'e') {
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
		cout << "result: " << result << endl;

		}*/

		/*float a;
		float b;
		char key;
		float result = 0;

		do
		{
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

				result = a + b;
				break;

			case '-':

				result = a - b;
				break;

			case '*':

				result = a * b;
				break;

			case '/':

				result = a / b;
				break;
			case 'e':
				cout << "goodbye!";
			}
			cout << "result: " << result << endl;
		} while (key != 'e');*/



		/*for (int i = 0; i < 10; i++) {
			cout << i << " ";
		}
		cout << endl;

		for (int i = 0; i <= 10; i++) {
			cout << i << " ";
		}
		cout << endl;

		int i;
		for (i = 1; i <= 10; i += 2) {
			cout << i << " ";
		}
		cout << endl;

		float x = 1;
		for (; x <= 2; x += 0.2) {
			cout << i << " ";
		}
		cout << endl;











		int magicnumber = 2;
		cout << "=======================================" << endl;
		cout << "\tmy magic number between 1 and 10" << endl;
		cout << "=======================================" << endl;
		int user = 0;
		for (int i = 1; i <= 5; i++)
		{
			cout << "your number _ -> ";
			cin >> user;
			if (user == magicnumber) {
				cout << "congratulations! you are winner!!!!!";
				break;
			}
			else {
				cout << "that's not my number!" << endl;
			}
			if (i == 5) {
				cout << "you lost!!! try again later!!!!!!!" << endl;
			}
		}*/

	// 1
	int numbers = 0;

	while (numbers < 100) {
		++numbers;
		cout << numbers << " ";
	}

	numbers = 0;
	cout << endl;

	// 2
	int counter = 0;

	while (numbers != 200) {
		numbers += 2;
		counter += 1;
		cout << numbers << " ";
	}

	cout << "count of dodatni chisla -> " << counter << endl;

	// 3
	int N;
	int countofnumbers;
	int i = 0;
	int suma = 0;

	int numberofnumber = 0;
	
	cout << "enter number 0f numbers that you want to enter -> ";
	cin >> countofnumbers;

	while (i < countofnumbers) {
		++i;
		cout << "enter " << ++numberofnumber << " number";
		cin >> N;
		if (N % 2 == 0) {
			suma += N;
		}
	}

	cout << "\nsuma of numbers -> " << suma << endl;

	// 4

	int counthours = 0;

	int hours = 0;
	int minutes = 0;

	while (hours <= 23) {
		while (minutes <= 60) {
			minutes += 1;
			cout << hours << ":" << minutes;
		}
		hours += 1;
		cout << hours << ":" << minutes << " ";
	}



}