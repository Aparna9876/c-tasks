#include<iostream>
#include<conio.h>
using namespace std;
int anagram(char str1[],char str2[])
{
	int i,flag=0,a[26]={0},b[26]={0};
	for(i=0;str1[i]!='\0';i++)
	   a[str1[i]-'a']++;
	for(i=0;str2[i]!='\0';i++)
	   b[str2[i]-'a']++;
	   for(i=0;i<26;i++)
	   {
	   	if(a[i]!=b[i])
	   	 flag=1;
	   }
	   if(flag==1)
	      cout<<"given strings are not anagrams";
	   else
	      cout<<"given strings are anagrams";
}
int main()
{
	char str1[50],str2[50];
	int flag;
	cout<<"enter first string:"<<endl;
	gets(str1);
	cout<<"enter second string:"<<endl;
	gets(str2);
	anagram(str1,str2);
	getch();
}
	
