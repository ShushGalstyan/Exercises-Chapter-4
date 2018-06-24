//(Sales Commission Calculator) A large company pays its salespeople on a commission basis.The salespeople each receive $200 per week plus 9% of their gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or atotal of $650. Develop a C++ program that uses a while statement to input each salesperson’s gross sales for last week and calculates and displays that salesperson’s earnings. Process one salesperson’s figures at a time.
#include <iostream>
using namespace std;
int main()
{
	int base = 200;
	int week = 1;
	double salary, commision;
	float sales;
	cout << "Enter sales in dollar(or -1 to quit): $";
	cin>> sales;
	while(sales != -1)
	{
		commision = 0.09 * sales;
		salary = commision + base;
		cout << "Salary is: $" << salary << endl;
		++week;
		cout << "Enter sales in dollar(or -1 to quit): $";
	        cin>> sales;

	}
	return 0;
}
