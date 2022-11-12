#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    //print the array //
   int  a[4]={2,4,5}; 
   for( int i=0;i<4;i++)
   {
    cout<<a[i]<<" ";
   }
   // find the minimum elements of an array //
   int min=0;
   for(int m=0;m<4;m++)
   {
       if( a[min]<a[m])
       {
        min=0;
       }
       else
       {
        min=a[m];
       }
   }
   cout<<"The minimum element is  "<<min;
   // search the element //
   int search;
   cin>>search;
   for( int u=0;u<4;u++)
   {
    if( search==a[u])
    {
        cout<<"number is found "<<endl;
    }
   }
   // inserting the elememt in array at given index //
   int q;  // at index whixh numer is inserted//
   cin>>q;
   int r;      // let r be the number which is inserted at r//
   cin>>r;
   int length;   // let length be the number present in array//
    cin>>length;
   for( int y=2;y>=q;y--)
   {
       a[y+1]=a[y];
   }
       a[q]=r;
       length=length+1;
       for( int z=0;z<4;z++)
       {
        cout<<a[z]<<" ";
       }
       // deletion of an array at given index //
       int index; // index at whixh the element is deleted //
       cin>>index;
       int length2;
       cin>>length2;
      for( int  h=length2;h<4;h++)
      {
                    a[h]=a[h-1]; 
      }
      a[index]=0;
      length2=length2-1;
      for( int x=0;x<length2;x++)
    {
        cout<<endl;
    cout<<a[x]<<" ";
     }





}