#include<stdio.h>
int main(void)
{
	int prec = 0, c;
	
	while ((c = getchar()) != EOF)
	{
		if (prec == ' ' && c == prec)
		{
			continue;
		}
		else
		{
			prec = c;
			putchar(c);			
		}
	}

	return 0;
}