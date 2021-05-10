#include <stdio.h>

int main(void)
{
	int dollar_amount = 0, amount_of_20s = 0, amount_of_10s = 0, amount_of_5s = 0, amount_of_1s = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar_amount);

	amount_of_20s = dollar_amount / 20;
	dollar_amount -= amount_of_20s * 20;	
	amount_of_10s = dollar_amount / 10;
	dollar_amount -= amount_of_10s * 10;	
	amount_of_5s = dollar_amount / 5;
	dollar_amount -= amount_of_5s * 5;	
	amount_of_1s = dollar_amount / 1;
	dollar_amount -= amount_of_1s * 1;	

	printf("\n20 dollar bills: %d\n10 dollar bills: %d\n5 dollar bills: %d\n1 dollar bills: %d\n", amount_of_20s, amount_of_10s, amount_of_5s, amount_of_1s);

	return 0;
}
