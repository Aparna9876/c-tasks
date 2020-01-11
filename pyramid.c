#include<stdio.h> 
#include<conio.h> 
int main()
{
    int i,j;
	printf("\nThe required pyramid is:\n");
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",j);
		printf("\t");
		}	
		printf("\n");
	}
	getch();
}
