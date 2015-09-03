#include "heap.h"
#include <stdio.h>
int main()
{
  struct binaryHeap heap;
  heap.heap[0] =0;
  int test[8] = {1,6,2,5,4,9,77,222};
  int i=0;
  for (i=0;i< 8; i++)
   addHeap(&heap,test[i]);
  
  printHeap(heap);
  return 0;
}
