#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter first string:");
	scanf("%s",s1);
	printf("enter last string:");
	scanf("%s",s2);
	strcat(s1,s2);
	printf("the full name is %s",s1);
	getch();
}
