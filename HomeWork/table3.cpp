#include<iostream>
using namespace std;
int main()
{
	int Num, desiredNum;
	cout << "Enter a number you want the table of: ";
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input.\nTry again: ";
		cin >> Num;
	}
	cout << "at what number you want the table to end: ";
	cin >> desiredNum;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input.\nTry again: ";
		cin >> desiredNum;
	}
	for (int i = 1; i <= desiredNum; i++)
	{
		cout << Num << " x " << i << " = " << Num * i << endl;
	}
	return 0;
}