#include<iostream>
using namespace std;
int main()
{
	int a[5], sum = 0; 
	cout << "Enter the marks." << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid number\nTry again: ";
			cin >> a[i];
		}
		sum += a[i];
	}
	cout << "The average is : " << sum / 5 << endl;
	return 0;
}