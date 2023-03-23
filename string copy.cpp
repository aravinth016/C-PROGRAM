#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[30];
	fgets(a,sizeof(a),stdin);
	strcpy(b,a);
	puts(a);
	puts(b);
}
