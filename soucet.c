#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int a;
	int b;

	a = atoi (argv[1]);
	b = atoi (argv[2]);

	printf ("%i\n", (a + b));

	return 0;
}

