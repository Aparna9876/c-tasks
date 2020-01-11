#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter a string:\n");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the string is palindrome");
else
printf("the string is not palindrome");
}
