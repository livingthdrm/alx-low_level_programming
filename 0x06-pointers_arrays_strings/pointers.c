#include <stdio.h>

void main()
{
	int *p;
	int n = 420;

	p = &n;
	*p = 423;

	printf("%d: ", n);

}
