#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[5]={3,6,7,4,1};   //printing all the elements//
    for( int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    int min=0;
    for( int m=1;m<5;m++)   //printing the minimum element in array//
    {
        if( (a[min]<a[m]))
        {
                min=0;
        }
        else
        {
            min=m;
        }
    } 
    cout<<a[min]<<endl;
    
}