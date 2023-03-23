#include<stdio.h>
int main()
{
	int age,p;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=18)
	{printf("eligible\n");
	}
	else
	{printf("not eligible\n");
	}
	p=18-age;
	printf("years left for eligibility is %d",p);
}
