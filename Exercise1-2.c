#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char next[100] = "123";

int between(char low, char high){
  static unsigned int int_indexer = 0;
  switch(low){
    case '0':
      memmove(&next[int_indexer], &next[int_indexer+1], strlen(&next[int_indexer+1])+1);
      printf("Eaten '0' \n");
      break;
    case '1': 
      memmove(&next[int_indexer], &next[int_indexer+1], strlen(&next[int_indexer+1])+1);
      printf("Eaten '1' \n");
      break;
    default:
      return 1;
  }  
  return 0;
}

int main(){
  if(between('0','9')){
    printf("Eaten a digit\n");
  }
  printf("Remaining: '%s'\n", next);
  return 0;
}
