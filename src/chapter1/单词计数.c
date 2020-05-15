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
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			nw++;
		}
	}

	printf("new line:%d new word:%d new char:%d\n", nl, nw, nc);
	return 0;
}