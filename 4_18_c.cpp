//(Tabular Output) Write a C++ program that uses a while statement and the tab escape sequence \t to print the following table of values:
//N 10*N 100*N 1000*N
//1 10   100   1000
//2 20   200   2000
//3 30   300   3000
//4 40   400   4000
//5 50   500   5000

#include <iostream>
using namespace std;

int main()
{
	int count=1;
        cout<<"N\t"<<"10*N\t"<<"100*N\t"<< "1000*N"<<"\n"<<endl;

	while(count<=5)
	{
		cout<< count <<"\t"<< 10 * count <<"\t"<< 100 * count<<"\t"<<1000 * count<<endl;
		count++;
	}

	
	return 0;
}
