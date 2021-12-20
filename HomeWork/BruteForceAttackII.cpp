#include<iostream>
using namespace std;
int main()
{
	string password = "246", input;
	int c = 5;
	cout << "enter the password: ";
	cin >> input;
	while (input != password && c > 0)
	{
		cout << "You got " << c << " tries left." << endl;
		c--;
		cout << "wrong password enter: ";
		cin >> input;
	}
	if (c==0)
	{
		cout << "the authorities have been alerted!" << endl;
	}
	else
	{
		cout << "Correct Password" << endl;
	}
	return 0;
}