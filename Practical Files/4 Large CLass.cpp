#include<iostream.h>
#include<conio.h>
class ITEM
{
int itemcode[50]; float it_price[50];
public:
void initialize(void); float largest(void); float sum(void);
void display_item(void); };
void ITEM::initialize(void)
{ for(int i=0;i<50;i++)
{  cout<<"\n"<<"item no:"<<(i+1);
cout<<"\n"<<"enter item code:";
cin>>it_price[i];
cout<<"\n"; }}
float ITEM::largest(void)
{  float large=it_price[0];
for(int i=1;i<50;i++)
{  if(large<it_price[i])
large=it_price[i]; }
return large;  }
float ITEM::sum(void)
{  float sum=0;
for(int i=0;i<50;i++)
sum+=it_price[i];
return sum;  }
void ITEM::display_item(void)
{    cout<<"\ncode price\n";
for(int i=0;i<50;i++)
{cout<<"\n"<<itemcode[i];
cout<<" "<<it_price[i];}
cout<<"\n";}
int main()
{  ITEM order;
order.initialize();
float total,biggest;
int ch=0;  clrscr();
do
{ cout<<"\nmain menu.\n";
cout<<"\n1.display largest price.";cout<<"\n2.display sum of price.";
cout<<"\n3.display item list.";
cout<<"\nenter your choice(1-3):";
cin>>ch;
switch(ch)
{ case 1:biggest=order.largest();
cout<<"the largest price is"<<biggest<<"\n";  break;
case 2:total=order.sum();
cout<<"the sum of price is"<<total<<"\n"; break;
case 3:order.display_item();  break;
default: cout<<"\nwrong choice!\n";  break; }  }
while(ch>=1&&ch<=3);   return 0;
getch();
}    
