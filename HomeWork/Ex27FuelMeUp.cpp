#include<iostream>
using namespace std;
int main()
{
	char type;
	int l;
	int t;
	cout << "Enter the type of petrol you want " << endl;
	cout << "Enter P for petrol and D for diesel" << endl;
	cin >> type;
	switch (type) // using switch to check for the correct input
	{
	case 'p':
	case 'P':
	case 'd':
	case 'D': // using 4 cases 2 for P and 2 for D (Upper case and lower case)
	{
		cout << "Enter the amount of ltrs you want: ";
		cin >> l;
		if (l > 0 && (type == 'p' || type == 'P')) // using if to print out different prices according to user's input
		{
			cout << "You got it, that'll be " << l * 2.22 << endl;
		}
		else if (l > 0 && (type == 'd' || type == 'D'))
		{
			cout << "You got it, that'll be " << l * 2.42 << endl;
		}
		else
		{
			cout << "You didn't enter a valid number." << endl;
		}
		break;
	}
	default: // default case
	{
		cout << "You didn't pick a valid option" << endl;
		break;
	}
	}
	return 0;
}