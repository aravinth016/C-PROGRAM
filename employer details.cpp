#include<stdio.h>
struct employer
{
	char name[30];
	int empId,salary,age;
}emp[100];
int main()
{
	int i,j,n;
	printf("enter the no of employees:");
	scanf("%d",&n);
	printf("enter the employee's name,id,age,salary");
	for(i=1;i<=n;i++)
	{
		scanf("%s %d %d %d",&emp[i].name,&emp[i].empId,&emp[i].age,&emp[i].salary);
	}
	printf("the employer's details are:\nEMP_NAME\tEMP_ID\tEMP_AGE\tEMP_SALARY\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].empId,emp[i].age,emp[i].salary);
	}
	return 0;
}