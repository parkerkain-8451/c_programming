// Write a program that evaluater RPN expressions.

#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

int stack[STACK_SIZE], operands[2];
int top = 0;


void push(int value);
int pop();
void print_stack(void);
void clear_stack(void);
void pop_operands(void);

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

void push(int value){
  // Push the value onto the stack
  
  if(top == STACK_SIZE){
    printf("Expression is too complex\n");
    exit(1);
  } 
  
  printf("Pushing %d onto the stack\n", value);
  stack[top++] = value;
}

int pop(void){
  // Pop the top value off of the stack
  if(top < 0){
    printf("Not enough operands\n");
    exit(1);
  } 

  return stack[--top];
}

void print_stack(void){
  // Print the current stack
  printf("==============================\n");
  printf("Printing the stack:\n");
  for(int i=0; i<top; i++){
    printf("Index %d, Value %d\n", i, stack[i]);
  }
  printf("==============================\n");
}

void pop_operands(void){
  // Pop two operands before performing an operation
  operands[0] = pop();
  operands[1] = pop();
}

void clear_stack(void){
  top = 0;
}
