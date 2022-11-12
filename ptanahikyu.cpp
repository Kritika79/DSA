#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    node1->data=1000;
    node1->next=NULL;
    head=node1;
    struct node  *node2=(struct node*)malloc(sizeof(struct node));
  node2->data=10200;
     node2->next=node1;
     cout<<node1->data;
     cout<<node2->data;
  
   
}