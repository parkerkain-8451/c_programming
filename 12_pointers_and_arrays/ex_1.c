// Write a program that reads a message and reverses it

#include <stdio.h>

#define ARRAY_SIZE 50

int main(void){

  char message[ARRAY_SIZE];
  int used_array_i = 0;

  printf("Enter a message: ");
  for (; used_array_i < ARRAY_SIZE; used_array_i++ ) {
    message[used_array_i] = getchar();
    if (message[used_array_i] == '\n'){
      break;
    }
  
  }

  printf("Reversal is: ");
  for (; used_array_i >= 0; used_array_i--){
    printf("%c", message[used_array_i]);
  }
  printf("\n");
}
