#include<iostream.h>
#include<process.h>
#include<conio.h>
int i,findpos(int[],int,int);
int main()
{
int AR[50],item,n,index;
cout<<"how many elements do you want to crerate with? (max.50)";
cin>>n;
cout<<"\n enter array elements(must be sorted in asc order)\n";
for(int i=0;i<n;i++)
cin>>AR[i];
char ch='y';
while(ch=='y'||ch=='y')
{
cout<<"\n enter element to be inserted";
cin>>item;
if(n==50)
{
cout<<"overflow!!\n";
exit(1);
}
index=findpos(AR,n,item);
for(i=n;i>index;i--)
{
AR[i]=AR[i-1];
}
AR[index]=item;
n+=1;
cout<<"\n want to insert more elements?(y\n)";
cin>>ch;
}
cout<<"the array now is as shown below\n";
for(i=0;i<n;i++)
cout<<AR[i]<<"    ";
cout<<endl;
return 0;
getch();
}
int findpos(int AR[],int size,int item)
{
int pos;
if(item <AR[0]) pos=0;
else
{
for(int i=0;i<size-1;i++)
{
if(AR[i]==item&&item<AR[i+1])
{
pos=i+1; break;
}}
if(i==size-1)
pos=size;
} return pos;
}
