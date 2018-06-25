//(Calculating a Circle’s Diameter, Circumference and Area) Write a program that reads the radius of a circle (as a double value) and computes and prints the diameter, the circumference and the area. Use the value 3.14159 for π .
#include <iostream>
using namespace std;
int main()
{
	double radius, diameter, circumference, area, pi = 3.14159;
	cout<< "Enter radius of  a circle: ";
	cin>>radius;
	diameter = 2 * radius;
	circumference = diameter * pi;
	area = radius *radius * pi;
	cout<< "Diameter of circle is: "<< diameter << endl;
        cout<< "Area of circle is: "<< area <<endl;
        cout<< "Circumference of circle is: "<< circumference  << endl;

		

	return 0;
}
