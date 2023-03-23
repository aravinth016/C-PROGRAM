#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c;
	int lowercase,uppercase;
	scanf("%c",&c);
	uppercase=(c=='A'| c=='E'| c=='I'|c=='O'|c=='U');
	lowercase=(c=='a'|c=='e'| c=='i'|c=='o'|c=='u');
if (!isalpha(c))
{
	printf("non alphabatical character");
	}	
	else if(lowercase|uppercase)
	{
		printf("vowel");
	
	}
	else
{

		printf("consonant");
	}
}
