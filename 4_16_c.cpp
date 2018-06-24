//(Salary Calculator) Develop a C++ program that uses a while statement to determine the gross pay for each of several employees. The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.You are given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of each employee. Your program should input this information for each employee and should determine and display the employee’s gross pay.
#include <iostream>
using namespace std;
int main()
{
	int hours_worked;
	double hour_rate_of_the_employee;
	double salary;
	cout << "Enter hours worked(or -1 to quit): ";
	cin >> hours_worked;
	while(hours_worked != -1)
	{
		cout<< "Enter hourly rate of the employee($00.00): ";
		cin>> hour_rate_of_the_employee;
		salary = hours_worked * hour_rate_of_the_employee;
		cout<< "Salary is: $" << salary << endl;
	        cout << "Enter hours worked(or -1 to quit): ";
        	cin >> hours_worked;

	}
	return 0;

}
