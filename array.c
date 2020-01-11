#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100];
	int max,min,n,i;
	printf("enter the number of elements in an array:\n");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    min=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	min=a[i];
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	max=a[i];
	}
	printf("the smallest element in the array is %d\n",min);
	printf("the largest element in the array is %d\n",max);
}
