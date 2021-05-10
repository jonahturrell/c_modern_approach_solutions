#include <stdio.h>
#include <math.h>

int main(void) 
{
	float r = 0;

	printf("Enter Sphere Radius: ");
	scanf("%f", &r);
	
	printf("Sphere volume is %f\n", (4.0f / 3.0f) * M_PI * (r * r * r));

	return 0;
}
