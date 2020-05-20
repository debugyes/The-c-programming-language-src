#include<stdio.h>

#define STEP 20
#define UPPER 300
#define LOWER 0

int convert();

int main(void)
{
	convert();
	return 0;
}

int convert()
{
	double fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%6.1f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}
