#include <stdio.h>
#include "main.h"

int _isupper(int c);

char c;

int _isupper(char c)
{
	int asciValue = (int)c;

	if (asciiValue >= 65 && asciiValue <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
