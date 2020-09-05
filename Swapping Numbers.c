#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number :"); //getting first number
	scanf("%d", &a);
	printf("Enter second number :"); //getting second number
	scanf("%d", &b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("swapped numbers are %d (first) and %d(second)",a,b );
}
