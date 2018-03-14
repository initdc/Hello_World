//Program 2.10 round the table but shorter
#include <stdio.h>

int main(void)
{
	const double Pi = 3.1415926536;
	float radius = 0.0f;
	float diameter = 0.0f;

	printf("Please input the diameter of the table:");
	scanf("%f",&diameter);
	
//	Pi = Pi +1;
	radius = diameter /2.0f;

	printf("The circumference of the table is %.2fcm.\nThe area of the table is %.4fcm².\n",Pi * diameter,Pi * radius * radius);

	return 0;
}