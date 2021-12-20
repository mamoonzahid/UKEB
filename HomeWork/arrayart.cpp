#include<iostream>
using namespace std;
int main()
{
	char a[5][5] = { {'-','-','-','-','-'},{'-','O','-','O','-'},{'-','@','@','@','-'},{'-','^','^','^','-'},{'-','v','v','v','-'} }; // declaring and initializing a 2d array
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}