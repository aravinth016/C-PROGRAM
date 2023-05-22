#include<stdio.h>
int main()
{
	int n,i,sum=0;
	int temp;
	temp=n;
	printf("enter the num:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%n==0)
		{
			sum=sum+i;
		}
	}
	if(sum=temp)
	{
		printf("perfect no");
	}
	else
	{
		printf("not a perfect no");
	}
	return 0;
}