#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[10]={3,5,4,6,8,3};
    int n;        //index at which number is inseted 
     int k;        // k be the elements present in the arrray//
    int num;     // num be the number that insert at index n 
    cin>>n;
    cin>>num;
    cin>>k;
    for( int i=5;i>=n;i--)
    {
        a[i+1]=a[i]; 
    }
      a[n]=num;
        k=k+1;

    for( int j=0;j<k;j++)
    {
        cout<<a[j]<<" ";
    }
    int w;      //index that delelted //
    cin>>w;
    int temp;
    a[w]=temp;
     for( int i=6;i>=4;i++)
     {
            a[i+1]=a[i];
           
     }
       a[w]=0;
       k=k-1;




}