#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;     //  number of test cases//
    if( 1<=n<=1000 )
    {
    for( int m=0; m<n ;m++)
    {
        int b[2];      
        for( int k=0;k<2;k++)
        {
            cin>>b[k];
        }
           // b[0] is the amount of money given by the company   x  //
          
 // b[1] is the amount of money spent on the car for correction y//
    
           if ((b[0]<=b[1]) && (1<=b[0]) && (b[1]<=30))
           {
            cout<<b[0]<<endl;
           }
           else if  ( b[0]>=b[1]  && (1<=b[0]) && (b[1]<=30))
           {
             cout<<b[1]<<endl;
           }
         }    
           
          
    }
               
    

    }
