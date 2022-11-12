#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
     int  t; // t be the number of test cases//
   cin>>t;
    if( (1<=t)  && (t<=100 ) )
    {
      for( int m=0;m<t;m++)
        {
                int x; //x be the number whose factorial is found //
                cin>>x;
                 int factorial=1;
              if(  (1<=x) && (x<=100) )
               {

                for( int n=1;n<=x;n++)
                {
                    factorial=factorial*n;
                }
                cout<<factorial<<endl;
               }
        }
    
        
    }
  }