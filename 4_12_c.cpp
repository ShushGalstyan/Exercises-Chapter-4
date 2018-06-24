#include <iostream>
using namespace std;

int main()
{
	int y;
	int x = 1;
	int total = 0;
	while(x<=10)
	{
		y = x*x;
		cout<< y<<endl;
		total= total + y;

		x=x+1;
	
	}

	cout<< "total is: " << total<<endl;


}	
	
