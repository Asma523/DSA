#include<iostream>
using namespace std;
int main()
{
   int i,j,m,n,a,b;
   int sum=0;
   cout<<"n is";
   cin>>n;
   cout<<"m is";
   cin>>m;

   for (i=0;i<=n;i++)
   {
      cout<<"a is";
      cin>>a;
      for(j=0;j<=m;j++)
      {
         int prod;
         cout<<"b is";
         cin>>b;
         prod=a*b;
         sum=sum+prod;
      }
      
      
   } 
   cout<<"The final value is"<<sum;
   return 0; 
}