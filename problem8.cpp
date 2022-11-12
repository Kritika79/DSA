#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int t;     // t be the number of test cases//
    cin>>t;
    if( 1<=t<=1000)
    {
     for( int m=0;m<t;m++)
    {
          int q;
          int a[4];
          for( q=0;q<4;q++)
          {
            cin>>a[q];
          }
          // w be the intial amount ,x be the amount depostied per month,y be the amount deducted 
        // per month ,z be the number of months//
        if( (1<=a[0],a[1],a[2],a[3]<=10000)) 
        {
                cout<<a[0]+a[1]*a[3]-a[2]*a[3]<<endl;
        }

    }

    
    }
}