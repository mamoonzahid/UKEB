#include<iostream>
using namespace std;
int main()
{
	string a; 
	cout << "Name the capital of France?" << endl;
	cin >> a;
	for (int i = 0; i < a.length(); i++) //to make the input in lowercase  
	{
		a[i] = tolower(a[i]);
	}
	if (a == "paris") //condition
	{
		cout << "You are correct!" << endl;
	}
	else // false block
	{
		cout << "You are incorrect!" << endl;
	}
	return 0;
}
