#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int operands[2];

int main(void){

  char curr_char;

  printf("Enter an RPN expression: ");
  do{
    scanf(" %c", &curr_char);

    if((curr_char >= '0') && (curr_char <= '9')){
      push(atoi(&curr_char));
    } else if (curr_char == '+'){
      printf("Adding from the stack\n");
      pop_operands();
      push(operands[0] + operands[1]);
    } else if (curr_char == '-'){
      printf("Subtracting from the stack\n");
      pop_operands();
      push(operands[0] - operands[1]);
    } else if (curr_char == '*'){
      printf("Multiplying from the stack\n");
      pop_operands();
      push(operands[0] * operands[1]);
    } else if (curr_char == '/'){
      printf("Dividing from the stack\n");
      pop_operands();
      push(operands[0] / operands[1]);
    } else if (curr_char == '=') {
      printf("Printing and Clearing!\n");
      print_stack();
      clear_stack();
      printf("Enter an RPN expression: ");
    } else {
      break;
    }

  }while(1);

  return 0;

}

