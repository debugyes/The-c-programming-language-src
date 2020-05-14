#include<stdio.h>
int main(void)
{
	long nc = 0; // number char
	/*
	while (getchar() != EOF)
	{
		nc++;
	}
	*/

	for (nc = 0; getchar() != EOF; ++nc)
	{
		;
	}

	printf("%ld\n", nc);

	return 0;
}