#include<stdio.h>
int main()
{
  	int i,j,n,k=1;
  	scanf("%d",&n);
  	for(i=0;i<=n;i++)
  	{
  		for(j=n;j>=i;j--)
  		{
  			printf("%d  ",k++);
		  }printf("\n");
	  }
}
