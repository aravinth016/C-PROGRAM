#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[30];
	fgets(a,sizeof(a),stdin);
	fgets(b,sizeof(b),stdin);
	printf("the return value is %d",strcmp(a,b));
	
}
