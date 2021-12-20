#include<iostream>
using namespace std;
int main()
{
	int Num, counter = 1;
	cout << "Enter a number you want the table of: ";
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input.\nTry again: ";
		cin >> Num;
	}
	while (counter < 11)
	{
		cout << Num << " x " << counter << " = " << Num * counter << endl;
		counter++;
	}
	return 0;
}