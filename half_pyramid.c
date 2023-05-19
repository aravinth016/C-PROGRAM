#include<stdio.h>
#include<conio.h>

int main(){
	int a,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		for(j=1;j<=a;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}