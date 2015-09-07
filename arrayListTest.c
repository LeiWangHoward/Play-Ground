#include <stdio.h>
#include "arrayList.h"

int main(){
  struct arrayList* list = arrayListCreate();
  arrayListAdd(list, "TOM");
  arrayListAdd(list, "JERRY");
  arrayListAdd(list, "Song of ice and fire");
  arrayListAdd(list, "Game of Throne");  
  arrayListPrint(list);
  arrayListDelete(list, 2);
  arrayListPrint(list);
  return 0;
}
