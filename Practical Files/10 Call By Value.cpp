#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
int c=a;
 a=b;
 b=c;
}
void main()
{
int x,y;
cout<<"Enter x and y\n";
cin>>x>>y;
swap(x,y) ;
cout<<x<<y;
getch();
}
