#include <stdio.h>
#include "linkedList.h"

int main(){
  int i=0;
  struct LinkedList* L = (struct LinkedList *)malloc(sizeof(struct LinkedList));
  for(i=0; i< 28; i++)
   {
     if(i%5 ==1)
      addLL(i,L);
   }
  printLL(L);
  printf("Test delete head\n");
  L= deleteLL(0, L);
  printLL(L);

  printf("Test delete middle\n");
  L = deleteLL(16, L);
  printLL(L);
  return 0;
}
