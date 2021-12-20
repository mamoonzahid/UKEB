#include<iostream>
using namespace std;
int main()
{
	int Num;
	cout << "Enter a number you want the table of: ";
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input.\nTry again: ";
		cin >> Num;
	}
	for (int i = 1; i < 11; i++)
	{
		cout << Num << " x " << i << " = " << Num * i << endl;
	}
	return 0;
}