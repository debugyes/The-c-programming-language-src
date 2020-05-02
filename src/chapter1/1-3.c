#include<stdio.h>
int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("convert C° to F°\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);//5.0和9.0时两个浮点数相除，结果不会舍位
		printf("%3.0f %6.1f\n", fahr, celsius);//输出数字右对齐

		fahr = fahr + step;
	}

	return 0;
}