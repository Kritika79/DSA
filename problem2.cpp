#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m,w,r;
        for( m=0 ;m<n;m++)
        {
        for( w=0; w<n;w++  )
        {
            for( r=0;r<n;r++)
            { 
               if( (m!=w) && (w!=r)& (r!=m) && ( a[m]+a[w]+a[r]==k))
                {
                    cout<<a[m]<<" "<<a[w]<<" "<<a[r]<<endl;
                    break;
                }   
                   
                
            }
        }
    }


}