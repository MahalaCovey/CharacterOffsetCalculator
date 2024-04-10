// Mahala Covey
// CIS 1202 800
// April 10, 2024

// Specification file for the Offset class
#ifndef OFFSET_H
#define OFFSET_H

class Offset
{
public:
	// Exception class for an invalid character
	class invalidCharacterException
	{};
	

	// Exception class for an invalid range
	class invalidRangeException
	{};

	// Function defined in Offset.cpp
	char character(char start, int offset);
};
#endif