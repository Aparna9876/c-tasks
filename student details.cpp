#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int rollno,m1,m2,m3,total;
	float avg;
	char name[25],dept[10];
	public:
		void getdata();
		void calculate();
		void display();
};
void student::getdata()
{
	cout<<"enter name of the student:"<<endl;
	cin>>name;
	cout<<"enter department of the student:"<<endl;
	cin>>dept;
	cout<<"enter marks in 3 subjects:"<<endl;
	cin>>m1>>m2>>m3;
	cout<<"enter rollno of the student:"<<endl;
	cin>>rollno;
}
void student::calculate()
{
	total=m1+m2+m3;
	avg=total/3;
}
void student::display()
{
	cout<<"name:"<<name<<endl;
	cout<<"department:"<<dept<<endl;
	cout<<"rollno:"<<rollno<<endl;
	cout<<"marks in maths:"<<m1<<endl;
	cout<<"marks in physics:"<<m2<<endl;
	cout<<"marks in chemistry:"<<m3<<endl;
	cout<<"total marks:"<<total<<endl;
	cout<<"average marks:"<<avg<<endl;
}
int main()
{
	student s;
	s.getdata();
	s.calculate();
	s.display();
	getch();
}

