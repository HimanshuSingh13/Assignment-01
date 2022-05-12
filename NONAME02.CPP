#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float width, length;
cout<<endl<<"enter the length of rectangle:";
cin>>length;
cout<<endl<<"enter the width of rectangle:";
cin>>width;
cout<<endl<<"Area of rectangle as per dimenision is :"<<length*width;
cout<<endl<<"parameter of rectangle :"<<(2*(length+width));
getch();
}