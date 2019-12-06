#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],n,i,max,min;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	cout<<"largest element is:"<<max<<endl;
	cout<<"smallest element is:"<<min<<endl;
	getch();
}
