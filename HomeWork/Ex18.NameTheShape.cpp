#include<iostream>
using namespace std;
int main()
{
	int s; // took an variable int sides
	cout << "Enter the number of sides: "; 
	cin >> s;
	if (s == 3) // using conditions 
	{
		cout << "It's a Triangle" << endl;
	}
	else if (s == 4) 
	{
		cout << "It's a square" << endl;
	}
	else if (s == 5)
	{
		cout << "It's a Pentagon" << endl;
	}
	else if (s == 6)
	{
		cout << "It's a Hexagon" << endl;
	}
	else if (s == 7)
	{
		cout << "It's a Heptagon" << endl;
	}
	else if (s == 8)
	{
		cout << "It's a Octagon" << endl;
	}
	else if (s == 9)
	{
		cout << "It's a Nontagon" << endl;
	}
	else if (s == 10)
	{
		cout << "It's a Decagon" << endl;
	}
	else // false condition
	{
		cout << "Not a viable option" << endl;
	}
	return 0;
}