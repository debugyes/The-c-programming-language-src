//打印摄氏度转华氏度
#include<stdio.h>
int main(void)
{
	float cel, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	cel = lower;

	while (cel <= 300)
	{
		fahr = cel * 9.0 / 5.0 + 32;
		printf("%6.1f %6.1f\n", cel, fahr);
		cel += step;
	}

	return 0;
}