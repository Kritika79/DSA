#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// first step is to construct the to construct a class second assign the elemets of class third 
// make a pointer which points towards the next linked list //
class linkedlistnode       //making of class//
{
    public:
    int data;   //members of class //
    linkedlistnode* next; //making pointer //
    linkedlistnode(int data, &next)    //making construct to assign the value //
   {
       this->data=data;  // for assign the value we use this function//
        this->next=next;       
   }
};
int main()
{
    int m;
      linkedlistnode* node1 = new linkedlistnode(500,node2);
      cout<< node1->data<<endl;
      cout<< node1->next<<endl;
         linkedlistnode* node2 = new linkedlistnode(1900,node3);
      cout<< node2->data<<endl;
      cout<<node2->next<<endl;
          linkedlistnode* node3 = new linkedlistnode(156,NULL);
      cout<< node3->data<<endl;
      cout<<node3->next<<endl;
       
}