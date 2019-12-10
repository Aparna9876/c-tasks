#include<stdio.h>
#include<conio.h>
int main()
{
float c,f;
printf("enter temperature in celsius:");
scanf("%f",&c);
f=9*(c+32)/5;
printf("temperature in fahrenheit is %f",f);
getch();
}
