#include<iostream.h>
#include<conio.h>
int binasearch(float a[],int n, float data)
{     int l=0,u=n-1,m,found=0;
       while(found==0&&u>l)
{
         m=(l+u)/2;       if(a[m]==data)
         { found=1;}
else if(a[m]>data)    {u=m-1;}
else    {l=m+1;}
}
return found;
}
void main()
{     float x[10] ;   float d;    int f;
cout<<"Enter the 10 numbers \n";
for(int j=0;j<10;j++)               {        cin>>x[j];       }
cout<<"Enter number to be found\n";
cin>>d;       f=binasearch(x,10,d);
 cout<<f;
 getch();
}
