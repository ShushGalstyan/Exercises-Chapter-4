//(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several trips by recording miles driven and gallons used for each trip. Develop a C++ program that uses a while statement to input the miles driven and gallons used for each trip. The program should calculate and display the miles per gallon obtained for each trip and print the combined miles per gallon obtained for all tankfuls up to this point.
#include <iostream>
using namespace std;
int main()
{
	int total_miles = 0, total_gallons = 0;
	int miles, gallons;
	double MPG_this_total, total_MPG;
	cout<< "\n Enter miles drive (-1 to quit)"<< endl;
	cin >> miles;
	while(miles != -1)
	{
		cout <<"Enter gallons used:" << endl;
		cin >> gallons;
		total_miles += miles;
		total_gallons += gallons;
		MPG_this_total = miles/gallons;
		total_MPG = total_miles/total_gallons;
		cout<<"MPG this total: "<< MPG_this_total<<endl;
		cout<<"Total MPG: " << total_MPG<<endl;
		cout<<"Enter miles drive (-1 to quit)"<< endl;
		cin >> miles;
	}
	
	return 0;

}
