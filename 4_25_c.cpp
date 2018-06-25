//(Square of Asterisks) Write a program that reads in the size of the side of a square then prints a hollow square of that size out of asterisks and blanks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 5, it should print
//*****
//*   * 
//*   * 
//*   *
//*****
//
#include <iostream>
using namespace std;
int main()
{
	int side, rowPosition,size;
	cout<< "Enter the square side: ";
	cin>> side;
	size = side;
	while( side >0 )
	{
		rowPosition = size;
		while( rowPosition>0 )
		{
			if( size == side || side ==1 || rowPosition ==1 || rowPosition==size )
				cout<< "*";
			 else
				cout<<" ";
			--rowPosition;
			
		}
		cout<<"\n";
		--side;
	}  
}
