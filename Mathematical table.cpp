#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=12;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
