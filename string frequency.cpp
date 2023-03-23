#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],search;
	int i,count=0;
	fgets(a,sizeof(a),stdin);
	scanf("%c",&search);
	for(i=0;a[i]!=0;i++)
	{
		if(search==a[i])
		{
			count++;
		}
	}
	printf("%d",count);
}
