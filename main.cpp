#include <iostream>
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
    for( int j=0;j<3;j++)
    {
        cout<<b[j]<<endl;
    }

}