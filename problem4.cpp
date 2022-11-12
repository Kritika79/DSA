#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;    //number of test cases//
       cin>>n;
    if ( 1<=n<=1000 )
    {
    for( int m=0;m<n;m++)
    {
         int b[3];
        for( int u=0;u<3;u++)
        {
            cin>>b[u];
        }
       //  b[0] is the size of friends group //
       //b[1] is the capacity of students in course //
        // b[2] is the number of students enrolled//
       if( (b[0]+b[2]<=b[1]) && (1<=b[0]<=100 ) && (0<=b[1]<=100) && (0<=b[2]<=b[1]) )
       {
             cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
       }
    }
    }
}
