#include<iostream>
using namespace std;
int main()
{
	int a; // took a variable in n 
	cout << "Enter a number: ";
	cin >> a; // taking input from user
	if (a > 0) // For posivive numbers    
	{
		cout << "The number is positive." << endl;
	}
	else if (a < 0) //  For negative numbers
	{
		cout << "The number is negative." << endl;
	}
	else if (a == 0) // For 0
	{
		cout << "The number is zero." << endl;
	}
	else // Invalid  number entered
	{
		cout << "Invalid Number." << endl;
	}
	return 0;
}