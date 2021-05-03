// Collin McGhee
// CIS 1202 101
// 5 May 2021
#include<iostream>
#include<string>
using namespace std;

char character(char start, int offset)
{
	//--- ASCII Value ranges used here | A = 65 Z = 90, a = 97 z = 122
	char offLetter; //--- final offset letter to be returned
	int ascii = start; //--- convert the shar to an ascii int value to offset

	//--- check if the starting char is in the letter range
	//--- upperacse letter ---
	if (start >= 65 && start <= 90)
	{
		//--- add the offset to the starting value and store it in a seperate variable
		offLetter = start + offset;

		//--- check if the number goes out of range when offset is applied | if not return the letter
		if (offLetter >= 65 && offLetter <= 90)
		{
			return offLetter;
		}
		else
		{
			throw string("invalidRangeException");
		}
	}
	//--- lowercase letter ---
	else if (start >= 97 && start <= 122)
	{
		//--- add the offset to the starting value and store it in a seperate variable
		offLetter = start + offset;

		//--- check if the number goes out of range when offset is applied | if not return the letter
		if (offLetter >= 97 && offLetter <= 122)
		{
			return offLetter;
		}
		else
		{
			throw string("invalidRangeException");
		}
	}
	//--- throw an exception if the number is not a valid character
	else
	{
		throw string("invalidCharacterException");
	}
}

int main()
{
	char start = 'a';
	int offset = 1;
	try
	{
		cout << character(start, offset) << endl;
	}
	catch(string e)
	{
		cout << e << endl;
	}

	start = 'a';
	offset = -1;
	try
	{
		cout << character(start, offset) << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}

	start = 'Z';
	offset = -1;
	try
	{
		cout << character(start, offset) << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}

	start = '?';
	offset = 5;
	try
	{
		cout << character(start, offset) << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}

	start = 'A';
	offset = 32;
	try
	{
		cout << character(start, offset) << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}

	return 0;
}