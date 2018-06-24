//(Find the Two Largest Numbers) Using an approach similar to that in Exercise 4.17, find the two largest values among the 10 numbers. [Note: You must input each number only once.]
#include <iostream>
using namespace std;
int main()
{
        int counter = 0;
        int number = 0;
        int first_largest = 0;
	int second_largest = 0;
        while( counter < 10 )
        {
                cout<<"Enter your namber: ";
                cin>> number;

                if(number > first_largest)
                {
			second_largest = first_largest;
                        first_largest = number;
                }
                counter++;
        }

        cout << "The first largest number is: " << first_largest<< endl;
	cout << "The second largest number is:" << second_largest<< endl;
        return 0;
}
