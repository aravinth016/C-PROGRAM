#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("before swapping:\na=%d  b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping:\na=%d b=%d",a,b);
	return 0;
}