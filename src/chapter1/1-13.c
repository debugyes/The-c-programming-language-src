//error´ý½â¾ö
#include<stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, state = OUT;
	int nc = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
		{
			state = OUT;
		}

		if (state == OUT)
		{
			state = IN;
		}

		if (state == IN)
		{
			nc++;
		}
	}


	return 0;
}