// A program that print out personal details.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	string Name, Surname, Nationality, IDnumber, Gender, City;
	int Age;

	cout << "Enter you name " << endl;
	cin >> Name;
	cout << "Enter your surname " << endl;
	cin >> Surname;
	cout << "Enter your gender " << endl;
	cin >> Gender;
	cout << "Enter your age " << endl;
	cin >> Age;
	cout << "Enter your city " << endl;
	cin >> City;
	cout << "Enter your nationality " << endl;
	cin >> Nationality;
	cout << "Enter your IDnumber" << endl;
	cin >> IDnumber;


	cout << "Your name is: " << Name << endl;
	cout << "Your surname is: " << Surname << endl;
	cout << "Your gender is: " << Gender << endl;
	cout << "Your age is: " << Age<<" years old " << endl;
	cout << "Your city is: " << City << endl;
	cout << "Your nationality is: " << Nationality << endl;
	cout << "Your IDnumber is: " << IDnumber << endl;

	return 0;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
