#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int *p;
    int *q;
    p=new int[3];
    p[0]=6;
    p[1]=8;
    p[2]=10;
    q=new int[5];
    q[3]=9;
    q[4]=11;
    for(int i=0;i<3;i++)
    {
        q[i]=p[i];
    }
    for( int m=0;m<3;m++)
    {
       cout<<q[m]<<endl; 
    }
    p=q;
    delete p;
    q=nullptr;
   cout<<p[3]<<endl;
   cout<<p[4];
    
   
    
}