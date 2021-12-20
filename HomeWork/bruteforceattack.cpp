#include<iostream>
using namespace std;
int main()
{
	string password = "246", input;
	cout << "enter the password: ";
	cin >> input;
	while (input != password)
	{
		cout << "wrong password enter: ";
		cin >> input;
	}
	cout << "Correct Password" << endl;

	return 0;
}