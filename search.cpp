#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[7]={2,4,5,7,22,33,55};         //linear search //
    int b;      //elememt that to be searched //
    cin>>b;
    for( int i=0;i<7;i++)
    {
        if(a[i]==b)
        {
            cout<<"number found index of number is - "<<i;
        }
    }





}