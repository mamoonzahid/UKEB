#include<iostream>
using namespace std;
int main()
{
	double fahrenheit; //Initializing Fahrenheit as double 
	double celsius; //Initializing Celsius as double
	int answer;
	cout << "Hello, please enter an option: " << endl;
	cout << "'1': To convert from Fahrenheit to Celsius" << endl;
	cout << "'2': To convert from Celsius to Fahrenheit" << endl;
	cin >> answer;
	if (answer == 1)
	{
		cout << "Enter the temperature in fahrenheit: ";
		cin >> fahrenheit; // Taking the temperature in Fahrenheit as input from the user
		cout << fahrenheit << " fahrenheit is " << (fahrenheit - 32) * 5 / 9 << " in Celsius." << endl; // Formula = (F-32)*5/9
	}
	else if (answer == 2)
	{
		cout << "Enter the temperature in celcius: ";
		cin >> celsius; // Taking the temperature in celcius as input from the user
		cout << celsius << " celcius is " << (celsius * 9 / 5) + 32 << " in fahrenheit." << endl; // Formula = (C*9/5) + 32
	}
	return 0;
}2