//Program 2.8 calculations on a table
#include <stdio.h>

int main(void)
{
	double Pi = 3.1415926536;
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;
	
	printf("Please input the diameter of the table:");
	scanf("%f",&diameter);
	
	radius = diameter /2.0f;
	circumference = Pi * diameter;
	area = Pi * radius * radius;
	
	printf("The circumference of the table is %.2fcm.\nThe area of the table is %.4fcm².\n",circumference,area);

	return 0;
}