#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[50];
	int i;
	cout<<"enter the string:"<<endl;
	cin>>str;
	for (i=0;i<50;i++)
	{
		if((str[i]>=65) && (str[i]<=92))
      {
	  str[i]=str[i]+32;
      }
   }
   for(i=0;str[i]!='\0';i++)
   {
       cout<<"string in lowercase is:"<<str[i];
   }
   getch();
}
