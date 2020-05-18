#include<stdio.h>

int main(int argc, char const *argv[])
{
	int c, i, nwhite, nother;
	int ndigit[10];

	//初始化
	nwhite = nother = 0;
	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;

	}

	while((c = getchar()) != EOF)
	{
		if (c > '0' || c < '9')
		{
			/* code */
			++ndigit[c-'0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			/* code */
			++nwhite;
		}
		else
		{
			++nother;
		}
	}


	printf("digit:");
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		printf("%d = %d ", i, ndigit[i]);
	}
	printf("\n");
	printf("white = %d, other = %d\n", nwhite, nother);
	return 0;
}