/*
	当fahr = 0，20，30...时，分别打印华氏温度与摄氏温度对照表
*/

/*
#include<stdio.h>
int main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		//printf("%d\t%d\n", fahr, celsius);
		printf("%3d %6d\n", fahr, celsius);//输出数字右对齐

		fahr = fahr + step;
	}

	return 0;
}*/

//上面的版本不严谨，使用的int类型变量，下面进行改进

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/ 9.0) * (fahr - 32) ;//5.0和9.0时两个浮点数相除，结果不会舍位
		printf("%3.0f %6.1f\n", fahr, celsius);//输出数字右对齐

		fahr = fahr + step;
	}

	return 0;
}