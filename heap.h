#include <stdio.h>
#include <stdlib.h>
/* min heap */
struct binaryHeap
{
  int heap[100];
};

void addHeap(struct binaryHeap* heap, int data)
{
  int parent =0;
  if(heap->heap[0] ==0)
    {
      heap->heap[1] = data;
      heap->heap[0] = 1;
    }
  else
    {
      heap->heap[++heap->heap[0]] = data;
      parent = (heap->heap[0])/2;
      while((heap->heap[parent] > data) && (parent > 0))
        {
          heap->heap[heap->heap[0]] = heap->heap[parent];
          heap->heap[parent] = data;
          parent = parent/2;
        }
    }
}

void printHeap(struct binaryHeap heap)
{
  int i=1;
  int levelSize=1;
  while ( i <= heap.heap[0])
   {
     if (i == levelSize)
       {
         printf("\n");
         levelSize *=2;
       }
     printf("%d  ", heap.heap[i]);
     ++i;
   }
}
