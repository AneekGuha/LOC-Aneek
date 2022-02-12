//write a C program to check whether a number is even or odd using switch case//
#include<stdio.h>
int  main()
{
	int a;
	printf("Enter the value of A=");
	scanf("%d",&a);
	switch(a%2)
    {
    	case 0:
    	printf("the given number is even");
		break;
		default:
		printf("the given number is odd");
		break;
	}
	return 0;
}