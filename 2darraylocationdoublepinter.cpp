#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int **a;
    a=new int *[3];
    a[0]=new int[4];
     a[1]=new int[4];
      a[2]=new int[4];
      a[0][0]=7;
    a[0][1]=8;
    a[0][2]=8;
    a[0][3]=8;
    a[1][0]=8;
    a[1][1]=8;
    a[1][2]=8;
    a[1][3]=8;
    a[2][0]=8;
    a[2][1]=8;
    a[2][2]=8;
    a[2][3]=0;
    int i,j=0;
    for( i=0;i<3;i++)
       {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<endl;
        }
       }

}
