#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number to be checked:"<<endl;
	cin>>num;
	if(num%2==0)
	cout<<num<<"is even";
	else
	cout<<num<<"is odd";
	getch();
}
