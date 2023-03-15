#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* next;

int between(char low, char high){
  if(low <= *next && high >= *next){
    next++;
    return 1;
  }
  return 0;
}

int main(){
  next = "123";
  if(between('0','9')){
    printf("Eaten a digit\n");
  }
  printf("Remaining: '%s'\n", next);
  return 0;
}
