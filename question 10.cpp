#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char str[100][100],s[100];
	printf("enter the number of names ");
	scanf("%d",&n);
	printf("enter the names in order\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
	
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
	printf("the sorted order of names:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
	}
}
