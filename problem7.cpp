#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;     //  number of test cases//
    if( 1<=n<=100 )
    {
    for( int m=0; m<n ;m++)
    {
         int f; // be the battery//
         cin>>f;
         if( (f<=15) && (f>=0))
         {
            cout<<"yes"<<endl;
         }
         else if ((f<=100 ) && (f>15))
         {
            cout<<"no"<<endl;
         }

    }
    } 
}