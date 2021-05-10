#include <stdio.h>

int main(void)
{
	float gross_amount;

	printf("Enter an amount: ");
	scanf("%f", &gross_amount);
	printf("With tax added: %.2f\n", gross_amount * 1.05);

	return 0;	
}
