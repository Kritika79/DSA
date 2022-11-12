#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int queue[100];
int n=100;
int front=-1;
int rear=-1;
void  Insert()
{
    int val;
    if( rear==n-1)
    {
        cout<<"Queue is overflow";
    }
    else
    {
        if( front==-1)
        {
            cout<<"insert the element"<<endl;
            cin>>val;
            rear++;
           queue[rear]=val;
        }
    }
}
void Display()
{
    if( (front==-1))
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"wueues elemets are :"<<endl;
        for( int i=0;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
            cout<<endl;
        }

    }
}
void Delete()
{
    if((front==-1)|| (front>rear))
    {
        cout<<"quueue is underflow"<<endl;
    }
    else
    {
        cout<<queue[front]<<endl;
        front++;

    }
}
int main()
{
   Insert();
   Display();
   Delete();
}