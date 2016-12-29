//functions and looping
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void swap(char &a,char &b);
char* reverse(char a[]);
void swap(char &a, char &b)
{
char c;
c=a;
a=b;
b=c;
}
char* reverse(char a[])
{
int n;
n=strlen(a);
cout<<"length of string="<<n<<"\n";
for (int i=0;i<n/2;i++)
swap(a[i],a[n-i-1]);
return a;
}

void main()
{
clrscr();
char a[100];
cout<<"Enter the string"<<"\n";
gets(a);
strcpy(a,reverse(a));
cout<<"The reversed string is=> "<<a;
getch();
}
