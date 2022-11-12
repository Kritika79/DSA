#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[3][3];
    for( int i=0;i<3;i++)
    {
        for( int j=0;j<3;j++)
        {
            if( i==j) 
            {
               cin>>a[i][j];
            }
            else
            {
                  a[i][j]=0;
            }
        }
    }
for( int m=0;m<3;m++)
       for( int k=0;k<3;k++)
     {
           cout<<a[m][k];
               }
   

    }
