#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter upper limit ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of the odd number=%d",sum);
	return 0;
}
