#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[4][4];
    for( int i=0;i<4;i++)
    {
        for( int j=0;j<4;j++)
        {
            if( (i-j>1)||(j-i>1))
            {
                a[i][j]=0;
            }
            else 
            {
                cin>>a[i][j];
            }
        }
    }
    for( int m=0;m<4;m++)
      for( int n=0;n<4;n++)
      {
        cout<<a[m][n];
      }



}
