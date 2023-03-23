#include<stdio.h>
int main()
{
	int n,x=0,remainder;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		x=x*10+remainder;
		n=n/10;
	}
	printf("the reverse number is %d",x);
	return 0;
}
