#include <stdio.h>

int main(void)
{
	float x = 0;

	printf("Please enter value for x: ");
	scanf("%f", &x);
	printf("The polynomial value is %f\n", 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7 * x - 6);

	return 0;
}
