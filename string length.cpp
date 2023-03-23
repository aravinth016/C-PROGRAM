#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	int length;
	fgets(name,sizeof(name),stdin);
	length=strlen(name);
	printf("length is %d",length);
}
