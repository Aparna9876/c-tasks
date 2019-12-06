#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],i,j,n,temp;
	cout<<"enter the size of an array:"<<endl;
	cin>>n;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		    }
		}
	}
	cout<<"list of the array in ascending order:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}
