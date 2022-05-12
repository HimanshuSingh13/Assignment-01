#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char letter;
cout<<endl<<"Enter the char";
cin>>letter;
if (letter=='a'|| letter=='A' || letter=='e'|| letter=='E'|| letter=='i'|| letter=='I'|| letter=='o'|| letter=='O'|| letter=='u'|| letter=='U')
{
	cout<<"Letter is vovel";
}
else {
cout<<"Letter is const";
}
getch();
}