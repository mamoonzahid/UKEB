#include<iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int grade;
	cout << "Enter Student's full name: ";
	getline(cin, name); // Using getline function to take multiple words as the input
	cout << "How much marks you got: " << endl;
	cin >> grade;
	switch (grade / 10) // diving the input by 10 so we can get the correct grade
	{
	case 10: // using switch statement
	case 9:
	{
		cout << name << " your grade is A" << endl;
		break;
	}
	case 8:
	{
		cout << name << " your grade is B" << endl;
		break;
	}
	case 7:
	{
		cout << name << " your grade is C" << endl;
		break;
	}
	case 6:
	{
		cout << name << " your grade is D" << endl;
		break;
	}
	case 5:
	{
		cout << name << " your grade is E" << endl;
		break;
	}
	case 4:
	{
		cout << name << " your grade is F" << endl;
		break;
	}
	case 3:
	case 2:
	case 1:
	case 0:
	{
		cout << name << " your grade is F" << endl;
		break;
	}
	default: // default case if the user enters an invalid value
	{
		cout << "You entered an invalid value" << endl;
		break;
	}
	}
	return 0;
}