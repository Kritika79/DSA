#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int  t;  // number of testcases//
    cin>>t;
    if( 1<=t<=1000 )
    {
       for(int k=0;k<t;k++) 
       {
        int n; // n be the number of question added by the chef //
        cin>>n;
         int a[n];
         if( 1<=n<=1000)
         {
         for( int m=0;m<n;m++)
         {
            cin>>a[m];
         }
         // a[0],a[1],...... a[n] be the difficulty levels of the question //
         int sum=0;
        for( int i=0;i<n;i++)
        {
            if( (a[i]>=1000 ) && (1<=a[i]<=5000))
            {
               sum=sum+1;
            }
            
        }
        cout<<sum<<endl;
         }
       }
    }
}