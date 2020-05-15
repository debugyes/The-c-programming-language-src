#include<stdio.h>

#define OUT 0
#define IN 1

int main(void)
{
	int c, state, nc, nw, nl;

	nc = nw = nl = 0;
	state = OUT;

	while ((c = getchar()) != EOF)
	{
		nc++;

		if (c == '\n')
		{
			nl++;
		}

		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				printf("\n");
				state = OUT;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			nw++;
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}