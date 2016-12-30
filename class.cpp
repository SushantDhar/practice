#include<iostream.h>
#include<conio.h>
#include<stdio.>
class student
{
public:
    int rollno;
    char name[30];
    float score;
private:
    void getdata();
    void putdata();
    int ret()
    {
        return(rollno);
    }
}
void student::getdata()
{
    cout<<"\n enter roll no :";
    cin>>rollno;
    cout<<"\n enter name    :";
    cin>>name;
    cout<<"\n enter marks in %(float):";
    cin>>scores;
}
void student::putdata()
{
    cout<<"\n Roll NO   :"<<rollno;
    cout<<"\n Name      :"<<name;
    cout<<"\n Score     :"<<score;
}
void main()
{
clrscr();
student s[30];
int size,a,b,c;
cout<<"\nhow many names do you wish to enter    :";
cin>>size;
for(int i=0; i<size;i++)
{
    s[i].getdata();
}
clrscr();
cout<<"\n1.Display All Records ";
cout<<"\n2.Search for a Record";
cin>>a;
if(a=='1')
{
    for(int j=0;j<size;j++)
    s[j].putdata();
}
else if(a==2)
{
    cout<<"\nenter roll no of needed record :";
    cin>>b;
    for(i=0;i<size;i++)
    {
        c=s[i].ret();
        if(b==c)
        {
            s[i].putdata();
        }
    }
}
getch();
}
