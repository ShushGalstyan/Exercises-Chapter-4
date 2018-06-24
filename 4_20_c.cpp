//(Validating User Input) The examination-results program of Fig. 4.16 assumes that any value input by the user that’s not a 1 must be a 2. Modify the application to validate its inputs. On any input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
#include <iostream>
using namespace std;
int main()
{
	int passes=0, failures=0;
	int result, counter=1;
	while(counter <= 10)
	{
		cout<< "Enter your result(1 to pass, 2 to fail): ";
		cin >> result;
		if ( result == 1 )
		{
			passes = passes + 1;
		}
		else if( result == 2 )
		{
			failures = failures + 1;
		}
		else
		{

				cout<<"Incorrect input! Try again."<<endl;
				counter--;
		}
		counter++;
	}
	cout<< "Passes: "<< passes << "  " << "Failures: " << failures<< endl;
	return 0;
}
