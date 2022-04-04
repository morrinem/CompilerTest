
#include <stdio.h>

int A[4];
int k;


void f(int *x, int *y)
{
	*x = *x+2;
	k = k+1;
	A[k] = A[k]*2;
	*y = *y-1;
	printf("A: %i %i %i %i\nx: %i\ny: %i\n", A[0], A[1], A[2], A[3], x, y);
	printf("values at\nx: %i\ny: %i\n", *x, *y);
}

void main (int argc, char **argv)
{
	k = 0;
	while (k < 4)
	{
		A[k] = k-1;
		k = k+1;
	}
	k = 0;
	f(&k, &A[k]);
}
