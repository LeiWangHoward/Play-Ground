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

struct LinkedList* deleteLL(int data, struct LinkedList* L)
{
  struct LinkedList* step = L;
  if (step->data == data) /* Head node */
    {
      L = L->next;
      free(step);
      return L;
    }

  while(step->next)
   {
     struct LinkedList* temp = step->next;
     if (step->next->data == data)
       {
         step->next = step->next->next;
         free(temp);
         return L;
       }
     step = step->next;
   }
  
   printf("Error, not found %d", data);
   return L;
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
