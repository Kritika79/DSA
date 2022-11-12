#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    //symmetric matrix//
    int a[4][4];
    for( int i=0;i<4;i++)
    {
        for( int j=0;j<4;j++)
        {
             if( i==j )
             {
                  cin>>a[i][j];
             }
             else
             {
                a[i][j]=a[j][i]=0;
    
             }
        }
    }
    for( int m=0;m<4;m++)
     for( int n=0;n<4;n++)
     {
        cout<<a[m][n];
     }
}