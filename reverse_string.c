#include <stdio.h>
#include <string.h>

/* O(n) solution */

void reverse_string(char *str)
{
  int i=0;
  int last_char =strlen(str)-1;
  char temp;
  for(i=0; i< (last_char+1)/2; i++)
   {
     temp = str[i];
     str[i] = str[last_char-i];
     str[last_char-i]=temp;
   } 
}

int main()
{
  char a[20] = "This is a test";
  printf("%s\n",a);
  reverse_string(a);
  printf("%s\n",a);  
  return 0;
}
