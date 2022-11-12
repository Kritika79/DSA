#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[4];
    for( int m=0;m<4;m++)
    {
        cin>>a[m];
    }
    
    int sum=0;
    int i;
    for( i=0;i<4;i++)
    {
    if( (a[i]>=10) && (1<=a[i]<=100) )
    {
          sum=sum+1;
          sum=sum;
    }
    }
     cout<<sum<<endl;

}