//(Sides of a Triangle) Write a program that reads three nonzero double values and determines and prints whether they could represent the sides of a triangle.
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Enter three floating point numbers: ";
	cin >> a >> b >> c;
	if ( c * c == a * a + b * b )
		cout<<"The three numbers could"<<" be sides of a right triangle"<< endl;
	else
		cout<<"The three numbers probably"<<" are not the sides of a right triangle" << endl;
	return 0;
}
