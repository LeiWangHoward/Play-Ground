#include <stdio.h>
#include <stdlib.h>

#define BASE_SIZE_ARRAY_LIST          3

struct arrayList {
    int size;
    int used;
    void ** data;
};

struct arrayList *arrayListCreate() {
    /* Allocate Memory */
    struct arrayList *list = malloc(sizeof(struct arrayList));
    list->data = (void*)malloc(BASE_SIZE_ARRAY_LIST*sizeof(void *));
    if (list->data == NULL) 
      {
        free(list);
        return NULL;
      }
    list->size = BASE_SIZE_ARRAY_LIST;
    list->used = 0;
    list->data[0] = NULL;
    return list;
}


int arrayListSize(struct arrayList *list) {
    return list->size;
}

void arrayListAdd(struct arrayList *list, void *elem) {
    void ** reallocList;
    if (list->used < list->size)
      {
        list->data[list->used]=elem;
        ++list->used;
      }
    else
      {
         reallocList = realloc(list->data, 2*arrayListSize(list));
         list->data = reallocList;
         list->data[list->used] = elem;
         ++list->used;
         list->size *=2;
      }
}

void *arrayListGet(struct arrayList *list, int index) {
    return list->data[index];
}

void arrayListDelete(struct arrayList *list, int index) {
    int i = 0;
    if (index > list->used - 1)
      {
        printf("Invalid index, ecceed existing number of element");
        return;
      }
    for (i = index; i < list->used; i++)
      {
        if (i == list->used - 1)
            list->data[i] = NULL;
        else
            list->data[i] = list->data[i + 1];
      }
    --list->used;
}

void arrayListPrint(struct arrayList *list)
{
  int i=0;
  int size = arrayListSize(list);
  printf("Arraylist size %d, used %d\n", size, list->used);
  for (i=0; i<list->used; i++)
   {
     printf("%s ->", (char*)arrayListGet(list, i));
   }
   printf("NULL\n");
}
