#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
 int a,b,temp;
 clrscr();
 cout<<"enter two numbers:";
 cin>>a>>b;
 cout<<"before interchanging a="<<a<<"/tb="<<b<<endl;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"after inchanging a="<<a<<"/tb="<<b<<endl;
 getch();
 }