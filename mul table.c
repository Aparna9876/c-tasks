#include<stdio.h>
#include<conio.h>
int main()
{
int n,i=1;
printf("enter the number:\n");
scanf("%d",&n);
printf("multiplication table of %d:\n",n);
while(i<=10)
{
printf("%d * %d = %d\n",n,i,n*i);
i++;
}
}
