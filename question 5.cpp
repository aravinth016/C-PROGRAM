#include<stdio.h>
int tmp=20; 
main()
{
	printf("%d",tmp);
	func();
	printf("%d",tmp);
	
}
func();
{
	static in tmp=10;
	printf("%d",&tmp);
}

