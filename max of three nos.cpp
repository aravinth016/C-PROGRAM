#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the values of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b && a>c)?a:(b>c)?b:c;
	printf("the maximum between %d,%d and %d is %d",a,b,c,max);
}
