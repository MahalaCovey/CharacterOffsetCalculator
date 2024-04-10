// Mahala Covey
// CIS 1202 800
// April 10, 2024

// Implementation file for the Offset class
#include "Offset.h";
#include <cctype> // For isalpha
using namespace std;

//*******************************************************************************************************************************************************
// The character function takes a starting character and adds the passed in offset, resulting in the target. If the starting character is not a letter, *
// the invalidCharacterException is thrown, if the target is not a letter, the invalidRangeException is thrown.											*
//*******************************************************************************************************************************************************

char Offset::character(char start, int offset)
{
	char target = start + offset;

	if (!isalpha(start)) 
	{
		throw invalidCharacterException(); // Start is not a letter
	}
	else if (!isalpha(target))
	{
		throw invalidRangeException(); // Target is not a letter 
	}
	else
		return target;
}