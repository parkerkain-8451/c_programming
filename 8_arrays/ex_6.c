// Write a B1FF filter that reads a message and translates it into B1FF-speak
// All upper case, A->4, B->8, E->3, I->1, O->0, S->5. 
// 10 exclamation marks at the end
//
// Test Case: Hey dude, C is rilly cool
// Answer:    H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void){
  char base[1000], tranformed[1000];
  int i = 0, len;

  printf("Enter message: ");
  do{
    base[i] = toupper(getchar());
    switch (base[i]) {
      case 'A':
        tranformed[i] = '4';
        break;
      case 'B':
        tranformed[i] = '8';
        break;
      case 'E':
        tranformed[i] = '3';
        break;
      case 'I':
        tranformed[i] = '1';
        break;
      case 'O':
        tranformed[i] = '0';
        break;
      case 'S':
        tranformed[i] = '5';
        break;
      default:
        tranformed[i] = base[i];
        break;
    }
  }while(base[i++] != '\n');
  len = i - 1;

  printf("In B1FF-speak: ");
  for(i=0; i<len; i++){
    printf("%c", tranformed[i]);
  }
  printf("!!!!!!!!!!\n");

  return 0;
}
