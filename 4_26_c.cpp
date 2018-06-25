//(Palindromes) A palindrome is a number or a text phrase that reads the same backward as forward. For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether it’s a palindrome. [Hint: Use the division and modulus operators to separate the number into its individual digits.]
#include <iostream>
using namespace std;
int main()
{
	int first_digit, second_digit, fourth_digit, fifth_digit, number ;
	cout<<"Enter a five_digit number: ";
	cin>>number;
	first_digit = number / 10000;
	second_digit= (number % 10000)/1000;
	fourth_digit = ((((number % 10000) % 1000) %100)/10);
	fifth_digit = ((((number % 10000)%1000)%100)%10);
	if( first_digit == fifth_digit && second_digit == fourth_digit )
		cout<<number<<" is a palindrome."<< endl;
	else
		cout<<number<< " is not a palindrome."<<endl;
	return 0;

}
