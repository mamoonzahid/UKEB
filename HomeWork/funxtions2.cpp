#include<algorithm>
#include<math.h> 
#include<iostream>
using namespace std;
string Exponent(int exponent); 
int main()
{
	long ExponentNum; 
	cout << "Enter the number for the exponent: "; 
	cin >> ExponentNum;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> ExponentNum;
	}
	cout << Exponent(ExponentNum) << endl; 
	return 0;
}
string Exponent(int exponent)
{
	string Statement = "The Exponent code is working";
	for (int i = 1; i <= 10; i++)
	{
		long Answer = pow(exponent, i); 
		cout << i << " root of " << exponent << " is: " << Answer << endl;
	}
	return Statement; 
}