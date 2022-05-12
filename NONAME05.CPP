#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<endl<<"enter three number";
cin>>a>>b>>c;
if((a>b) && (a>c))
{
cout<<"A is largest among all three no";
}
else
{
if((b>a) && (b>c))
{
cout<<"B is largest among all three no";
}
else
{
cout<<"C is largest among all three no";
}}
getch();
}