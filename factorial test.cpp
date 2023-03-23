#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the number");
	scanf("%d",n);
	for(i=1;i<=5;i++){
		fact=fact*n;
	}
	printf("the factorial of %d is: %d",n,fact);
}
