#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int a;
	int b;
	int vysledek;
	char zn; 		//znamenko
	a = atoi (argv[1]);
	b = atoi (argv[3]);
	zn = argv[2][0];
	
	switch (zn)
	{
		case '+':
			vysledek = a + b;
			break;
		case '-':
			vysledek = a - b;
			break;
		case 'x':
			vysledek = a * b;
			break;
		case '/':
			vysledek = a / b;
			break;
	}

	printf ("a = %i\n", a);
	printf ("b = %i\n", b);
	printf ("znamenko = %c\n\n", zn);
	printf ("%i\n", vysledek);

	return 0;
}

