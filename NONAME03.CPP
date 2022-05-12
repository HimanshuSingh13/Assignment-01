#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<endl<<"Enter first no:";
cin>>a;
cout<<endl<<"Enter second no:";
cin>>b;
cout<<endl<<"NO before swapping are:"<<a<<"     "<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<endl<<"NO after  swapping are:"<<a<<"     "<<b;
getch();
}