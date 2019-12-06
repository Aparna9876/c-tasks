#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *,int *);
int main()
{
int x,y;
cout<<"Enter first number:- "<<endl;
cin>>x;
cout<<"Enter second number:- "<<endl;
cin>>y;
cout<<"Before swaping."<<endl;
cout<<"First number:- "<<x<<endl;
cout<<"Second nunber:- "<<y<<endl;
swap(&x,&y);
cout<<"After swaping."<<endl;
cout<<"First number:- "<<x<<endl;
cout<<"Second number:- "<<y<<endl;
getch();
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
