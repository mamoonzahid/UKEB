#include<iostream>
using namespace std;
int main()
{
	int a[5]; 
	for (int i = 0; i < 5; i++) 
	{
		cout << "Enter value number " << i + 1 << " : " << endl;
		cin >> a[i];
		while (cin.fail()) 
		{
			cout << "Incorrect! Enter a number again : ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> a[i];
		}
	}
	for (auto b : a) 
	{
		cout << b << endl;
	}
	return 0;
}