#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	printf("enter name");
	fgets(name,30,stdin);
	puts(name);
	return 0;
	
}
