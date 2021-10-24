#include<iostream>
using namespace std;
int main()
{
	float t, r, s, l, w;
	cout << "Enter the length : ";
	cin >> l;
	cout << "enter th width: ";
	cin >> w;
	t = l * w * 0.5;
	r = l * w;
	s = l * l;
	cout << "The area of rectangle is : " << r << endl;
	cout << "The area triangle is : " << t << endl;
	cout << "The area of square is : " << s << endl;

	return 0;
}