#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* next;

void space(){
  char ignore[] = {'\n', '\t', '\r', ' '};
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

int main(){
  next = "   \n\t  \t \r\n Hello";
  space();
  printf("Remaining: '%s'\n", next);
  return 0;
}
