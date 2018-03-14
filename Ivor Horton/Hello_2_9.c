//Program 2.9 More round table
#include <stdio.h>
#define PI	3.1415926536f

int main(void)
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;
	
	printf("Please input the diameter of the table:");
	scanf("%f",&diameter);
	
	radius = diameter /2.0f;
	circumference = PI * diameter;
	area = PI * radius * radius;
	
	printf("The circumference of the table is %.2fcm.\nThe area of the table is %.4fcm².\n",circumference,area);

	return 0;
}