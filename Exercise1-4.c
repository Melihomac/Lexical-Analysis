#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* next;
char *tmp = next;

void space(){
  char ignore[]={'\n', '\t', '\r', ' '};
  while(1){
    int eaten = 0;
    for(int i=0; i<4; i++){
      if(*next == ignore[i]){
        next++;
        eaten = 1;
      }
    }
    if(!eaten) break;
  }
}

int between(char low, char high){
  if(low <= *next && high >= *next){
    next++;
    return 1;
  }
  return 0;
}

int letter(){
  return between('a','z');
}

int digit(){
  return between('0','9');
}

int var(){
  if(letter()){
    return 0;
  }
  next = tmp;
  return 1;
}

int num(){
  if(letter()){
  return 0;  
  }
  next = tmp;
  return 1;
}

void main(){
  next = "foo 12 bar";
  if(var()) printf("Eaten a variable. Remaining: '%s'\n", next);
  space();
  if(num()) printf("Eaten a number. Remaining: '%s'\n", next);
}
