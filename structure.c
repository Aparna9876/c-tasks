#include<stdio.h>
struct book
{
char title[50];
char author[50];
char genre[50];
};
struct book b;
int display()
{
printf("Title of the book is:%s\n",b.title);
printf("Author of the book is:%s\n",b.author);
printf("Genre of the book is:%s\n",b.genre);
}
int main()
{
printf("enter the name of the book:");
gets(b.title);
printf("enter the name of the author:");
gets(b.author);
printf("enter the genre of the book:");
gets(b.genre);
display();
}
