#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"enter a year"<<endl;
	cin>>year;
	if(year%4==0)
	cout<<year<<"is aleap year"<<endl;
	else
	cout<<year<<"is not a leap year"<<endl;
	getch();
}
