#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	
	int sum;
	int avg;

	cout <<"enter your marks ";
	cin >> a;
	cout << "enter your marks ";
	cin >> b;
	cout << "enter your marks ";
	cin >> c;
	cout << "enter your marks ";
	cin >> d;
	cout << "enter your marks ";
	cin >> e;
	sum = a + b + c + d + e;
	cout << "sum of 5 subjects = :" << a + b + c + d + e << endl;

	cout << "average of 5 subjects: " << sum/5;


	return 0;
}