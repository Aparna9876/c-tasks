#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30];
	int age=0;
	char phnumber[10];
	printf("Enter your name:\n");
	scanf("%s",name);
	printf("Enter your age:\n");
	scanf("%d",&age);
	printf("Enter your Phone number:\n");
	scanf("%s",phnumber);
	printf("Name: %s \n", name );
	printf("Age: %d \n" ,age);
	printf("phone number:%s \n" ,phnumber);
	getch();
}

