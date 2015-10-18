/*
miles driven per year - 2000
price of gas - 3.85
cost of hybrid - 30000
hybrid mpg - 40
resale of hybrid - 22000
cost of non-hybrid - 25000
non-hybrid mpg - 25
resale of non hybrid - 20000
Gas winner - hybrid - total gallons in 5 years = 250, total cost of owning = $8962.5
Total cost winner - non-hybrid - total gallons in 5 years = 400, total cost of owning = $6540

miles driven per year - 30,437
price of gas - 4.15
cost of hybrid - 35,999
hybrid mpg - 42
resale of hybrid - 32,008
cost of non-hybrid - 41,500
non-hybrid mpg - 24
resale of non hybrid - 34,050
Gas winner - hybrid - total gallons in 5 years = 3623, total cost of owning = $19,026.5
Total cost winner - hybrid - total gallons in 5 years = 3623, total cost of owning = $19,026.5

miles driven per year - 50,124
price of gas - 4.04
cost of hybrid - 42,768
hybrid mpg - 25
resale of hybrid - 26,097
cost of non-hybrid - 36,077
non-hybrid mpg - 33
resale of non hybrid - 31,599
Gas winner - non-hybrid - total gallons used in 5 years = 7594, total cost of owning = 35157.8
Total cost winner - non-hybrid - total gallons used in 5 years = 7594, total cost of owning = 35157.8
*/


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double miles_per_year = 0;
	double price_gas = 0;
	double hybrid_cost = 0;
	double hybrid_mpg = 0;
	double hybrid_resale = 0;
	double non_hybrid_cost = 0;
	double non_hybrid_mpg = 0;
	double non_hybrid_resale = 0;
	const int time_elapse = 5;
	double total_cost_hybrid = 0;
	double total_cost_non = 0; //non hybrid car
	double hybrid_depreciation = 0;
	double non_hybrid_depreciation = 0;


	cout << "estimated miles driven per year: ";
	cin >> miles_per_year;
	if (miles_per_year < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "estimated miles driven per year: ";
		cin >> miles_per_year;
	}
	cout << "estimated price of gas: ";
	cin >> price_gas;
	if (price_gas < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "estimated price of gas :";
		cin >> price_gas;
	}
	cout << "cost of a hybrid car: ";
	cin >> hybrid_cost;
	if (hybrid_cost < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "cost of a hybrid car: ";
		cin >> hybrid_cost;
	}
	cout << "efficiency of the hybrid car in mpg: ";
	cin >> hybrid_mpg;
	if (hybrid_mpg < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "efficiency of the hybrid car in mpg: ";
		cin >> hybrid_mpg;
	}
	cout << "estimated resale value of a hybrid after 5 years: ";
	cin >> hybrid_resale;
	if (hybrid_resale < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "estimated resale value for a hybrid after 5 years: ";
		cin >> hybrid_resale;
	}
	cout << "cost of a non-hybrid car: ";
	cin >> non_hybrid_cost;
	if (non_hybrid_cost < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "cost of a non-hybrid car: ";
		cin >> non_hybrid_cost;
	}

	cout << "efficiency of a non-hybrid car in mpg: ";
	cin >> non_hybrid_mpg;
	if (non_hybrid_mpg < 0)
	{
		cout << "Error. Only positive numbers are valid." << endl;
		cout << "efficiency of a non-hybrid car in mpg: ";
		cin >> non_hybrid_mpg;
	}
	cout << "estimated resale value of a non-hybrid car after 5 years: ";
	cin >> non_hybrid_resale;
	if (non_hybrid_resale < 0)
	{
		cout << "Error. Only positive numbers are valid " << endl;
	cout << "estimated resale value of a non-hybrid car after 5 years: ";
	cin >> non_hybrid_resale;
    }
		string criterion;
		string hybrid;
		
		
		cout << "please enter either g for gas or t for total cost: ";
		cin >> criterion;

		

		int hybrid_gas_5_years = 0;
		int gas_5_years = 0;
	
		hybrid_gas_5_years = (miles_per_year * time_elapse) / hybrid_mpg; //hybrid gas over 5 years
		gas_5_years = (miles_per_year * time_elapse) / non_hybrid_mpg; // non hybrid gas over 5 years
		hybrid_depreciation = hybrid_cost - hybrid_resale;
		non_hybrid_depreciation = non_hybrid_cost - non_hybrid_resale;
		total_cost_hybrid = hybrid_depreciation + (hybrid_gas_5_years * price_gas);
		total_cost_non = non_hybrid_depreciation + (gas_5_years * price_gas);

		if (criterion == "g")
		{
			if (hybrid_mpg > non_hybrid_mpg)
			{
				cout << "The winner is a hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << hybrid_gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_hybrid << endl;
				cout << "" << endl;
				cout << "The loser is a non-hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_non << endl;
			}
			if (non_hybrid_mpg > hybrid_mpg)
			{

				cout << "The winner is a non-hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_non << endl;
				cout << "" << endl;
				cout << "The loser is a hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << hybrid_gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_hybrid << endl;
			}
		}
		if (criterion == "t")
		{
			if (non_hybrid_cost < hybrid_cost)
			{

				cout << "The winner is a non-hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_non << endl;
				cout << "" << endl;
				cout << "The loser is a hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << hybrid_gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_hybrid << endl;
			}
			if (hybrid_cost < non_hybrid_cost)
			{

				cout << "The winner a hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << hybrid_gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_hybrid << endl;
				cout << "" << endl;
				cout << "The loser is a non-hybrid car." << endl;
				cout << "Total gallons used in 5 years: " << gas_5_years << endl;
				cout << "Total cost of owning the car for 5 years: " << total_cost_non << endl;
			}
		}
    
		system("pause");
	return 0;
}
