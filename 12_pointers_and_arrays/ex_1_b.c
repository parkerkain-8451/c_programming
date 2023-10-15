// Write a program that reads a message and reverses it
// BUT, use a pointer instead of an int to keep track of the 
// position of the array 

#include <stdio.h>

#define ARRAY_SIZE 50

int main(void){

  char message[ARRAY_SIZE], *p;
  

  printf("Enter a message: ");
  for (p = message; p < message + ARRAY_SIZE; p++ ) {
    scanf("%c", p);
    if (*p == '\n'){
      break;
    }
  }

  printf("Reversal is: ");
  for (; p >= message; p--){
    printf("%c", *p);
  }
  printf("\n");
}

