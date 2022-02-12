//Write a C program to enter two numbers and perform all arithmetic operations using switch case//
void main()
{
	int a;
	int b;
	int op;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter 1 for +\n;enter 2 for-\n;enter 3 for *\n;enter 4 for/\n");
	printf("enter of the vslue of op");
	scanf("%d",&op);
	switch(op){
	case 1:
		printf("%d",a+b);
		break;
	case 2:
		printf("%d",a-b);
		break;
	case 3:
		printf("%d",a*b);
		break;
	case 4:
		printf("%d",a/b);
		break;
	case 5:
		printf("%d",a%b);
		break;
	}
}