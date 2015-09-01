#include <stdio.h>
#include "linkedList.h"

int main(){
  int i=0;
  struct LinkedList* L = (struct LinkedList *)malloc(sizeof(struct LinkedList));
  for(i=0; i< 19; i++)
   {
     if(i%5 ==1)
      addLL(i,L);
   }
  printLL(L);
  return 0;
}
