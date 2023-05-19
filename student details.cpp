#include<stdio.h>
struct student
{
	char name[30],dept[30];
	int id;
}st[100];
int main()
{
int i,n;
	printf("enter the no of students");
	scanf("%d",&n);
	printf("enter the student's name,id,dept:");
	for(i=1;i<=n;i++)
	{
		scanf("%s%d%s",&st[i].name,&st[i].id,&st[i].dept);
	}
	printf("the student details are:\nNAME\tID\tDEPT\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t%d\t%s\n",st[i].name,st[i].id,st[i].dept);
	}
	return 0;
}