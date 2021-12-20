#include<algorithm>
#include<math.h>  
#include<iostream>
using namespace std;
string Root(int root); 
int main()
{
	long RootNum; 
	cout << "Enter the number for the root: ";
	cin >> RootNum; 
	while (cin.fail()) 
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> RootNum;
	}
	cout << Root(RootNum) << endl << endl;  
	return 0;
}
string Root(int root) 
{
	string Statement = "The Root code is working";
	for (float i = 2; i <= 10; i++)
	{
		float Answer = pow(root, 1 / i); 
		cout << i << " root of " << root << " is: " << Answer << endl;
	}
	return Statement;
}