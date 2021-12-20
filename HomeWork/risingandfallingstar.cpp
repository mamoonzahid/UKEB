#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 6; i++)
	
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 4; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}