#include<stdio.h>
int main()
{
	char x;
	printf("enter the character\n");
	scanf("%c",&x);
	(x>='a' && x<'z')||(x>='A' && x<'Z')?printf("alphabet"):printf("not alphabet");
	return 0;
}
