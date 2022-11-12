#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[5]={2,4,6,33,1};      // declaration and intialisation of array  //
    for( int i=0; i<5; i++)
    {
        cout<<a[i]<<endl;
    }
    int b[3];           // declaration of array//
    b[0]=3;
    b[1]=6;
    b[2]=7;
    for( int j:b )    // method to print 
    {
        cout<<b[j]<<endl;
    }
    cout<<sizeof(a);
    // when size of array is not given //
    int c[10]={3,6,7};
    //cout<<sizeof(c)<<endl;
for (int m =0;m<10;m++)
{
    cout<<c[m]<<endl;
}

// we can create  variable size array but we cant intialise it it is the drawback //
int n;
cin>>n;
cout<<n;
int w[n]={2,4,5,8};
cout<<w[2]<<endl;
cout<<&w[2];
}
