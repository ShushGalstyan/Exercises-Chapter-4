//(Credit Limits) Develop a C++ program that will determine whether a department-store customer has exceeded the credit limit on a charge account. For each customer, the following facts  are available:
//a) Account number (an integer)
//b) Balance at the beginning of the month
//c) Total of all items charged by this customer this month
//d) Total of all credits applied to this customer's account this month
//e) Allowed credit limit
//The program should use a while statement to input each of these facts, calculate the new balance (= beginning balance + charges – credits) and determine whether the new balance exceeds thecustomer’s credit limit. For those customers whose credit limit is exceeded, the program should display the customer’s account number, credit limit, new balance and the message “Credit Limit Exceeded.”
#include <iostream>
using namespace std;

int main()
{
	int account_number;
	double begining_balance, charger, credit, limit, new_balance;
	cout << "Enter account number(ar -1 to quit): ";
	cin >> account_number;
	while( account_number != -1 )
	{
		cout << "Enter begining balance: ";
	        cin >> begining_balance ;
       		cout<<"Enter total chager: ";
        	cin>> charger;
        	cout<<"Enter total credit: ";
        	cin>> credit;
        	cout<<"Enter credit limit: ";
        	cin>> limit;
                new_balance = ( begining_balance + charger - credit);
		cout<< "New balance is :"  << new_balance<< endl;
		if( new_balance > limit )
			cout<< "Credit Limit Exceeded."<< endl;
	        cout << "Enter account number(ar -1 to quit): ";
        	cin >> account_number;
	}	
	return 0;

}
