#include<iostream.h>
#include<conio.h>
int seqsearch(float a[],int n,float data)
{ int found =0;   for(int i=0;i<n;i++) {  if(a[i]==data)  found=1; }
return found; }
void main()
{   float x[10] ;  float d;   int f;
cout<<"Enter the 10 numbers \n";
for(int j=0;j<10;j++)
{cin>>x[j];}
cout<<"Enter number to be found\n";
cin>>d;     f=seqsearch(x,10,d);      cout<<f;
getch();
 }
