#include<iostream>
using namespace std;
int main()
{
	int n; // declaring a variable int n 
	cout << "Enter a number: ";
	cin >> n;
	if (n % 2 == 0) // took a condition to check if the number is even or not
	{
		cout << "Even" << endl;
	}
	else  if (n % 2 == 1) // condition to check if the number is odd or not
	{
		cout << "Odd" << endl;
	}
	else // Invalid text
	{
		cout << "Invalid" << endl;
	}
	return 0;
}