#include <iostream>

using namespace std;
    int  printarray( int arr[], int size)
    {
      for( int n=0;n<size;n++)
         {
            cout<<arr[n]<<" ";
         }
    }
int main()
{
        int num[6]={7,5,3,34,56,234};
        int m=6;
    printarray(num,6);

}