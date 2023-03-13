#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char next[100] = "   \n\t  \t \r\n Hello";

int space(){
  static unsigned int space_indexer = 0;
  switch(space_indexer){
    case ' ':
      memmove(&next[space_indexer], &next[space_indexer+1], strlen(&next[space_indexer+1])+1);
      break;
    case '\t':
      memmove(&next[space_indexer], &next[space_indexer+1], strlen(&next[space_indexer+1])+1);
      break;
    case '\n':
      memmove(&next[space_indexer], &next[space_indexer+1], strlen(&next[space_indexer+1])+1);
      break;
    case '\r':
      memmove(&next[space_indexer], &next[space_indexer+1], strlen(&next[space_indexer+1])+1);
      break;
    default:
      printf("Error");
      return 1;
  }
  return 0;
}

int main(){
  space();
  printf("Remaining: '%s'\n", next);
  return 0;
}
