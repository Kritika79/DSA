#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int *p;
    int *q;
    p=new int[3];
    q=new int[10];
    p[0]=6;
    p[1]=8;
    p[2]=9;
    for ( int i=0;i<5;i++)
    {
        p[i]=q[i];
    }
    p=q;
    delete []p;
     q=nullptr;
    
    
}