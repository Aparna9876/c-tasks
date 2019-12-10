#include<stdio.h>
#include<conio.h>
int main()
{
int m,p,c;
float total,avg;
printf("enter marks in maths:");
scanf("%d",&m);
printf("enter  marks in physics:");
scanf("%d",&p);
printf("enter marks in chemistry:");
scanf("%d",&c);
total=m+p+c;
avg=total/3.0;
printf("total is: %f\n",total);
printf("average is:%f\n",avg);
getch();
}
