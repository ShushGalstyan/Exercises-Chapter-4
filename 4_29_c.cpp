//(Multiples of 2 with an Infinite Loop) Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16, 32, 64, etc. Your while loop should not terminate (i.e., you should create an  infinite loop). To do this, simply use the keyword true as the expression for the while statement. What happens when you run this program?
#include <iostream>
using namespace std;
int main()
{
	int power_of_number_2 =1;
	while(power_of_number_2 *=2)
	{
		cout<<power_of_number_2<<endl;

	}
	return 0;

}
