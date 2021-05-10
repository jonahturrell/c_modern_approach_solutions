#include <stdio.h>

int main(void)
{
	float loan_amount = 0, interest_rate = 0, monthly_payment = 0;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	loan_amount = (loan_amount - monthly_payment) + (loan_amount * interest_rate / 100.0f / 12.0f);
	printf("\nBalance remaining after first payment: %.2f\n", loan_amount);

	loan_amount = (loan_amount - monthly_payment) + (loan_amount * interest_rate / 100.0f / 12.0f);
	printf("Balance remaining after second payment: %.2f\n", loan_amount);

	loan_amount = (loan_amount - monthly_payment) + (loan_amount * interest_rate / 100.0f / 12.0f);
	printf("Balance remaining after second payment: %.2f\n", loan_amount);
	

	return 0;
}
