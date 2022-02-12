//Write a C program to enter the radius of a circle and find its diameter, circumference and area//
#include<stdio.h>
int main()
{
    float r; 
	printf("the radius of the circle=");
	scanf("%f", &r);
	float d = r*2;
    float A = 3.14*r*r;
	printf("the diameter of the circle is %f",d);
	printf("\n area of the circle is %f",A);
	return 0;
}