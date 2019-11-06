// C++ program to demontrate use of foreach
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 30, 40 };

	// Printing elements of an array using
	// foreach loop
	int x=0;
	for ( x : arr)
		cout << x << endl;
}
