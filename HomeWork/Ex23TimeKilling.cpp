#include<iostream>
using namespace std;
int main()
{
	int t;
	int m; // Taking a variable int m for money 
	cout << "Yo bro, how many mins till you get here? " << endl;
	cin >> t;
	if (t >= 15) // Outer if condition
	{
		cout << "Ugh, let's do something till he comes, let me check how much money i got." << endl;
		cin >> m;
		if (m > 5) // Inner if condition
		{
			cout << "Nice! I can buy a coffee and wait for him." << endl;
		}
		else // inner else condition 
		{
			cout << "Nevermind, I'll just walk around till he gets here." << endl;
		}
	}
	else // Outer Else condition
	{
		cout << "Alright, I'll wait for him in the park then." << endl;
	}
	return 0;
}