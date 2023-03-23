#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	fgets(a,sizeof(a),stdin);
	printf("%s",strupr(a));
}
