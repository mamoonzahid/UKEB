#include <iostream>
using namespace std;
int main()
{
	int answer;
	cout << "Enter the number of month: ";
	cin >> answer; // Putting the the input in the variable
	switch (answer) // switch statement
	{
	case 1: // Jan case
		cout << "January" << endl;
		cout << "This month has 31 days.";
		break;
	case 2: // Feb case
		cout << "February" << endl;
		cout << "This month has 28 days.";
		break;
	case 3: // Mar case
		cout << "march" << endl;
		cout << "This month has 31 days.";
		break;
	case 4: // Apr case
		cout << "April" << endl;
		cout << "This month has 30 days.";
		break;
	case 5: // May case
		cout << "May" << endl;
		cout << "This month has 31 days.";
		break;
	case 6: // June case
		cout << "June" << endl;
		cout << "This month has 30 days.";
		break;
	case 7: // July case
		cout << "July" << endl;
		cout << "This month has 31 days.";
	case 8: // Aug case
		cout << "August" << endl;
		cout << "This month has 31 days.";
		break;
	case 9: // Sept case
		cout << "September" << endl;
		cout << "This month has 30 days.";
		break;
	case 10: // Oct case
		cout << "October" << endl;
		cout << "This month has 31 days.";
		break;
	case 11: // Nov case
		cout << "November" << endl;
		cout << "This month has 30 days.";
		break;
	case 12: // Dec case
		cout << "December" << endl;
		cout << "This month has 31 days.";
		break;
	default: // Default case
	{
		cout << "You entered an invalid option" << endl;
	}

	}

	return 0;
}