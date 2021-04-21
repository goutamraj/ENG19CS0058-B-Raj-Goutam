//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf(“Enter number: \n”);
	scanf(“%d”,&a);
	printf(“Enter number: \n”);
	scanf(“%d”,&b);
	c=a+b;
	printf(“Sum of %d and %d is: %d\n”,a,b,c);
	return 0;
}
