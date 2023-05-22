#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("before swapping:\na=%d  b=%d",a,b);
	swap(&a,&b);
	printf("\nafter swapping:\na=%d b=%d",a,b);
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}