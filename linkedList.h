#include<stdio.h>
#include<stdlib.h>

struct LinkedList
{
  int data;
  struct LinkedList* next;
};

void addLL(int data, struct LinkedList* L)
{
  struct LinkedList* step = L; 
  while(step)
   {
    if(step->next != NULL) 
     step = step->next;
    else
     break;
   }
   step -> next  = (struct LinkedList*)malloc(sizeof(struct LinkedList));
   step = step->next;
   step -> data = data;
   step -> next = NULL;
}

void printLL(struct LinkedList * L)
{
  struct LinkedList* step = L;
  while(step)
   {
     printf("%d -> ", step->data);
     step = step->next;
   }
   printf("NULL\n");
}
