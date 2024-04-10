// Mahala Covey
// CIS 1202 800
// April 10, 2024

#include "Offset.h"
#include <iostream>
using namespace std;

// Function prototype
char character(char, int);

int main()
{
	// Good data
	cout << "character('a', 1) = " << character('a', 1) << endl;
	cout << "character('Z', -1) = " << character('Z', -1) << endl;



	return 0;
}

char character(char start, int offset)
{
	return start + offset;
}