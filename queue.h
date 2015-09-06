#include <stdio.h>
#include <stdlib.h>

struct queue
{
  int data;
  struct queue *next;
};

void enQueue(int data, struct queue* queue)
{
  if (queue->data == -1)
   {
     queue->data = data;
   }
  else
   {
     struct queue *step = queue;
     while(step->next)
      {
        step = step->next;
      }
     step->next = (struct queue*) malloc(sizeof(struct queue));
     step->next->data = data;
   }
}

struct queue* deQueue(struct queue* queue)
{
  if (queue == NULL)
   {
     printf("Error! Queue empty!");
     return queue;
   }

   else
    {
      struct queue *temp = queue;
      queue = queue->next;
      free(temp);
      return queue;
    }
   
    return queue;
}

void printQueue(struct queue* queue)
{
   while(queue)
    {
      printf("%d -> ", queue->data);
      queue= queue->next;
    }
   printf("NULL\n");
}
