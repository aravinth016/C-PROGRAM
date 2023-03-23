#include<stdio.h>
#include<string.h>
int main()
{
	char string[20];
	int i;
	fgets(string,sizeof(string),stdin);
	printf("the characters of the string are:\n");
	for(i=0;i<strlen(string);i++)
	{
		printf("%c\t",string[i]);
	}
	return 0;
}
