#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* next;

int eat(char c){
  if(c == *next){
    next++;
    return 1;
  }
  return 0;
}

int main(){
  next = "Hello";
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
