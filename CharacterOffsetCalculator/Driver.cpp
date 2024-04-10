// Mahala Covey
// CIS 1202 800
// April 10, 2024


// Driver for the Offset class
#include "Offset.h"
#include <iostream>
using namespace std;

int main()
{
	Offset offset;

	// a, 1
	try
	{
		cout << "offset.character('a', 1) = ";
		cout << offset.character('a', 1);
	}
	catch (Offset::invalidCharacterException)
	{
		cout << "Error: Start is not a letter.";
	}
	catch (Offset::invalidRangeException)
	{
		cout << "Error: Target is not within range.";
	}
	cout << endl;

	// a, -1
	try
	{
		cout << "offset.character('a',-1) = ";
		cout << offset.character('a', -1);
	}
	catch (Offset::invalidCharacterException)
	{
		cout << "Error: Start is not a letter.";
	}
	catch (Offset::invalidRangeException)
	{
		cout << "Error: Target is not within range.";
	}
	cout << endl;

	// Z, -1
	try
	{
		cout << "offset.character('Z',-1) = ";
		cout << offset.character('Z', -1);
	}
	catch (Offset::invalidCharacterException)
	{
		cout << "Error: Start is not a letter.";
	}
	catch (Offset::invalidRangeException)
	{
		cout << "Error: Target is not within range.";
	}
	cout << endl;

	// ?, -1
	try
	{
		cout << "offset.character('?',-1) = ";
		cout << offset.character('?', -1);
	}
	catch (Offset::invalidCharacterException)
	{
		cout << "Error: Start is not a letter.";
	}
	catch (Offset::invalidRangeException)
	{
		cout << "Error: Target is not within range.";
	}
	cout << endl;

	// A, -1
	try
	{
		cout << "offset.character('A',-1) = ";
		cout << offset.character('A', -1);
	}
	catch (Offset::invalidCharacterException)
	{
		cout << "Error: Start is not a letter.";
	}
	catch (Offset::invalidRangeException)
	{
		cout << "Error: Target is not within range.";
	}
	cout << endl;


	return 0;
}