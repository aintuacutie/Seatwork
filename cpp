#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	string name;
	char choice, continuous;
	int n1, n2, result;
	do {
		cout << "Enter your name:";
		cin >> name;
		system("cls");
		cout << "Welcome " << name << endl;

		cout << "Press 1 for Addition" << endl;
		cout << "Press 2 for Subtraction" << endl;
		cout << "Press 3 for Multiplication" << endl;
		cout << "Press 4 for Division" << endl;
		cout << "Press 5 for Modulus" << endl;
		cout << "Press 6 for Power" << endl;
		cout << "Press 0 for Exit" << endl;
		cout << "Choose what operator to use:";
		cin >> choice;
		cout << "Enter first value: ";
		cin >> n1;
		cout << "Enter second value:";
		cin >> n2;


		switch (choice) {
		case '1':
			result = n1 + n2;
			break;

		case '2':
			result = n1 - n2;
			break;
		case '3':
			result = n1 * n2;
			break;
		case '4':
			result = n1 / n2;
			break;
		case'5':
			result = n1 % n2;
			break;
		case '6':
			result = pow(n1, n2);
			break;
		case '0':
			exit(0);

		}
		cout << "Result is:" << result << endl;
		cout << "Do you want another calculation? (Y/N)" << endl;
		cout << "Your choice:";
		cin >> continuous;
		continuous = toupper(continuous);
		system("cls");
	} while (continuous == 'Y');
}
