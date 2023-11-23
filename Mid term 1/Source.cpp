#include<iostream>
using namespace std;

int main()
{
	
	    int Quantity;
	    double price, taxRate, totalCost, discount = 0.0;
	    char User_choice='y'||'N';
	do
	{
		cout << "Enter the price of Product:";
		cin >> price;
		cout << "Enter the Quantity of Product:";
		cin >> Quantity;
		cout << "Enter the sales taxRate(in percent) :";
		cin >> taxRate;
		if (Quantity > 10)
		{
			discount = 0.1;
		}
		else
		{
			discount = 0.0;
		}
		totalCost = Quantity * price;
		if (discount > 0)
		{
			totalCost -= totalCost * discount;
		}
		double taxAmount = totalCost * (taxRate / 100);
		totalCost += taxAmount;

		cout << "The Total Cost of Given Producuct is :" << totalCost << endl;
		cout << "Do you Want to Continue(Y/N):";
		
	} while (User_choice=='Y'/'y');
	
	
	return 0;

}