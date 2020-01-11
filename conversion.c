#include<stdio.h>
int main()
{
float f,c;
int choice;
printf("enter your choice:1)convert from celsius to fahrenheit\n 2)convert from fahrenheit to celsius\n 3)exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the temperature in celsius\n");
scanf("%f",&c);
f=(1.8*c)+32;
printf("temperature in fahrenheit is:%f\n",f);
break;
case 2:
printf("enter the temperature in fahrenheit\n");
scanf("%f",&f);
c=(f-32)/1.8;
printf("temperature in celsius is:%f\n",c);
break;
case 3:
printf("wrong choice");
break;
}
}
