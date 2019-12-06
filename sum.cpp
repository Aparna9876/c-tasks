#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],n,i,sum=0;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	cout<<"enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	sum+=a[i];
	cout<<"sum of array elements:"<<sum<<endl;
	return 0;
}
	
