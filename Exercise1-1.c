#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char next[100] = "Hello";

int eat(char c){
  static unsigned int string_indexer = 0;
  if(c == next[string_indexer]){
    memmove(&next[string_indexer], &next[string_indexer+1], strlen(&next[string_indexer+1])+1);
    return 1;
  }
  string_indexer++;
  return 0;
}

int main(){
  if(eat('H') && eat('e')){
    printf("Eaten 'H' and 'e' \n");
  }
  if(eat('x')){
    printf("Eaten 'x' \n");
  }
  if(eat('l')){
    printf("Eaten 'l' \n");
  }
  printf("Remaining: %s",next);
  return 0;
}
