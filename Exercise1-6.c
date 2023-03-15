#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* next;

int keyword(char s){
  char *tmp = next;
  if(munch(s) && !letter()){
    return 1;
  }
  next = tmp;
  return 0;
}

void main(){
  next = "skipy := 1";
  if(keyword("skip")) printf("Eaten a 'skip'\n");
  if(var()) printf("Eaten a variable\n");
  printf("Remaining: '%s'\n", next);
}
