#include<iostream>
using namespace std;
int main()
{
	int age = 18; // we took an variable int age with value 18
	if (age >= 18)  // using condition 
	{
		cout << "Yes! You can vote." << endl;
	}
	else // else block
	{
		cout << "No! You can't vote." << endl;
	}
	cin.get();
	return 0;
}