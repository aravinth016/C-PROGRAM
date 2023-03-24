#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],result;
	int i,len;
	int max=-1;
	int freq[256]={0};
	printf("enter the string ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(max<freq[str[i]])
		{
		max=freq[str[i]];
		result=str[i];
}
	}
	printf("the maximum occuring character is %c",result);
}
