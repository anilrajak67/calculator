
include<iostream.h>
#include<conio.h>

 
 void main()
 {
 int p;
 float a;
 char ch;
 cout<<"Enter any value "<<endl;
 cin>>p>>a;
 cout<<"choose any operator(+,-,*,/) ::"<<endl;
 cin>>ch;


void switch(ch)
 {
 case '+':cout<<"addition "<<"="<<p+a<<endl;
	 break;
 case'-' : cout<<"subtraction "<<"="<<p-a<<endl;
	  break;
 case '*' : cout<<"multipication "<<"="<<p*a<<endl;
 break;
 case '/' : cout<<"division "<<"="<<p/a<<endl;
 break;

 default: cout<<"you choose wrong operator "<<endl;

 getch();
  }

