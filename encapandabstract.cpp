// program to display encapsulation and abstraction
#include<iostream>
#include<conio.h>
#include<stdio.h>
classs employee
{
private:
    int eid;
    char name[30];
    int salary;
public:
    void getdata();
    void display();
}
void employee::getdata()
{
cout<<"\nenter the employee ID: \t";
cin>>eid;
cout<<"\nenter the name of the employee: \t";
cin>>name;
cout<<"\nenter the salary of the employeee":\t;
cin>>salary;
}
void employee::display()
{
cout<<"\n Employee no       :"<<eid;
cout<<"\n Employee Name     :"<<name;
cout<<"\n Employee salary   :"<<salary;
}

void main()
{
clrscr();
char a;
employee e;
e.getdata();
cout<<"do you wish to display the data : [y/n]";
cin>>a;
if (tolower(a)=='y')
{
e.display();
}
else
{
cout<<"thanks for using program ";
}
getch();
}
