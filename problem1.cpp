#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int n;
    cin>>n;

   int a[n];
   int target;
   for( int i=0;i<n;i++)
   {
    cin>>a[i]; 
   }
   cin>>target;
   for( int  m=0;m<n;m++)
   {
       for( int w=m+1;w<n;w++)
       {
        if( a[m]+a[w]==target)
        {
            cout<<"("<<m<<","<<w<<")"<<endl;
            break;
        }

       }
   }
}  


   

