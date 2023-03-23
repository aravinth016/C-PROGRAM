#include<stdio.h>
int main()
{
	int i,j;
	int a[2][3]={{10,20},{30,40,50}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("value of a[%d][%d] is %d\n",i,j,a[i][j]);
		}
	}
}
