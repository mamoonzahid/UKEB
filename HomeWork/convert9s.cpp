#include<iostream>
using namespace std;
int main()
{
	int sum = 0; 
	for (int i = 100; i < 201; i++) 
	{
		if (i % 9 == 0) 
		{
			sum += i;
		}
	}
	cout << "The sum of every 9, from 100 to 200 is: " << sum << endl;
}