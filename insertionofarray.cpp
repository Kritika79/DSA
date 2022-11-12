#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
      int t;
    cin>>t; // t be the number of testcases;
    if( (1<=t)&&(t<=100))
    {
       for( int p=0;p<t;p++)
       { 
        int n;  // let n be the number entered //
        cin>>n;
        if((1<=n) && (n<=100))
        {
            int a[n]; 
        for( int m=0;m<n;m++)
        {
                a[m]=m+1;

        }
        int product=1;
        for( int s=0;s<n;s++)
        {
            product=product*a[s];
        }
          cout<<product<<endl;
        }
    }
    }
} 