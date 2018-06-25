//(Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard pattern. Your program must use only three output statements, one of each of the following forms:
//cout << "* ";
//cout << ' ';
//cout << endl;
#include <iostream>
using namespace std;
int main()
{
	int side = 8, row;
	while ( side-- > 0 ) 
	{
		row = 8;
		if ( side % 2 == 0 )
			cout << ' ';
		while ( row-- > 0 )
			cout << "* ";
		cout << '\n';
	}
		cout << endl;
		return 0;



}
