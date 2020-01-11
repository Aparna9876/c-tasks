#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,sum=0,rem=0,cube=0,temp;
printf("enter a number:\n");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
cube=pow(rem,3);
sum=sum+cube;
n=n/10;
}
if(sum==temp)
printf("the given number is armstrong number");
else
printf("the given number is not armstrong number");
}
