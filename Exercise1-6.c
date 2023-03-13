#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char next[100] = "skipy := 1";

int keyword(char s){
  static unsigned int string_indexer = 0;
  if(s == next[string_indexer]){
    memmove(&next[string_indexer], &next[string_indexer+1], strlen(&next[string_indexer+1])+1);
    return 1;
  }
  string_indexer++;
  return 0;
}

int main(){
  if(keyword('s')){
    keyword('k');
    keyword('i');
    keyword('p');
    keyword('y');
  }
  printf("Remaining: '%s'\n", next);
  return 0;
}
