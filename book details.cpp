#include<stdio.h>
struct books
{
	char name[30],author[30];
	int price;
}bks[100];
int main()
{
	int i,n;
	printf("enter the no of books:");
	scanf("%d",&n);
	printf("enter the book's name,author,price:");
	for(i=1;i<=n;i++)
	{
		scanf("%s%s%d",&bks[i].name,&bks[i].author,&bks[i].price);
	}
	printf("the book's details are:\nBK_NAME\tBK_AUTHOR\tBK_PRICE\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t%s\t%d\n",bks[i].name,bks[i].author,bks[i].price);
	}
	return 0;
}