#include<iostream>
using namespace std;
int main()
{
	int PurchasePrice;
	int SalePrice;
	int checker;
	cout << "Enter the purchase price: ";
	cin >> PurchasePrice;
	cout << "Enter the sale price: ";
	cin >> SalePrice;
	checker = SalePrice - PurchasePrice; // calculation
	if (checker > 0) // to check the profit
	{
		cout << "Profit: " << checker << endl;
	}
	else if (checker < 0) // to check the loss
	{
		cout << "Loss: " << checker << endl;
	}
	else // If there isn't any profit or loss
	{
		cout << "No loss. No profit." << endl;
	}
	return 0;
}