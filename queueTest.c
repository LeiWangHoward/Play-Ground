#include <stdio.h>
#include "queue.h"

int main()
{
  struct queue* queue = (struct queue*)malloc(sizeof(struct queue));
  queue->data = -1;
  int test[10] = {1,5,6,2,4,7,3,8,9,0};
  int i=0;
  //queue = deQueue(queue);
  for(i=0; i<10; i++)
   {
     enQueue(test[i],queue);
     printQueue(queue);
   }
   printf("Dequeue\n");
   queue = deQueue(queue);
   printQueue(queue);
   return 0;
}
