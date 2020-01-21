#include <stdio.h>

/*
int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;
	for ( i =1; i <= n; ++i )
	triangularNumber += i;
	return triangularNumber;
}
int main (void)
{
	printf ("Triangular number %i is %i\n", 10, calculateTriangularNumber (10));
	printf ("Triangular number %i is %i\n", 20, calculateTriangularNumber (20));
	printf ("Triangular number %i is %i\n", 30, calculateTriangularNumber (50));	
	return 0;
}
*/


/*
int compute (char src[], char result[], int n)
{
	int intValue, result1 = 0, result2 = 0, flag_to_r2 = 0;
	
	for (int i = 0; i < 3; i++)
	{
		if (src[i] = ' ')
			flag_to_r2 = 1;

		if (src[i] >= '0' && src[i] <= '9')
		{
			intValue = src[i] - '0';
			if (!flag_to_r2)
				result1 = result1 * 10 + intValue;
			else
				result2 = result2 * 10 + intValue;
		}

		printf ("%i\n", result1);
		printf ("%i\n", result2);
	}

	return 1;
}
*/

int strToInt (const char string[])
{
	int i, intValue, result = 0;

	for ( i = 0; string[i] >= '0' && string[i] <= '9'; ++i )
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return result;
}

int main (void)
{



	/*

	int strToInt (const char string[]);

	printf ("%i\n", strToInt("245"));
	printf ("%i\n", strToInt("100") + 25);
	printf ("%i\n", strToInt("13x5"));

	return 0;



	
	char r[5];
	int v;
	v = compute("10 20", r, 5);
	
	if (v)
		printf("%s\n", r);
	else
		printf("vysledek je moc velky\n");
		
	return 0;
	*/
}

