#include<stdio.h>
int main(void)
{
	long ns, nt, nl; // new space, new tab, new line
	char c;
	ns = nt = nl = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			ns++;
		}
		else if (c == '\t')
		{
			nt++;
		}
		else if (c == '\n')
		{
			nl++;
		}
	}

	printf("new space = %ld, new line = %ld, new tab = %ld", ns, nl, nt);
	return 0;
}