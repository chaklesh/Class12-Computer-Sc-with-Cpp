#include<iostream.h>
#include<conio.h>
void seqsort(float a[],int n)
{ float temp;
for(int i=0;i<n-1;i++)
{  for(int j=i+1;j<n;j++)
{  if(a[i]>a[j])
{	 temp=a[i]; a[i]=a[j];  a[j]=temp; } } }
for(int k=0;k<n;k++)
{ cout<<a[k]<<endl;} }
void main()
{ float x[10];
cout<< "Enter the 10 numbers \n ";
for(int i=0;i<10;i++)
{  cin>>x[i];  }
seqsort(x,10);
getch();
}
