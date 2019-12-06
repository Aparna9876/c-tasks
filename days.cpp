#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long d,k;
    int year,week,day;
    cout<<"enter the number of days:"<<endl;
    cin>>d;
    k=d;
    year=d/365;
    d=d-365*year;
    week=d/7;
    day=d-7*week;
    cout<<"total days:"<<k<<endl;
	cout<<"year:"<<year<<ends;
	cout<<"week:"<<week<<ends;
	cout<<"days:"<<day<<endl;
	getch();
}
