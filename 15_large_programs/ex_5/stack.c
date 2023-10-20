#include <stdio.h> 
#include <stdlib.h>

#define STACK_SIZE 5

int stack[STACK_SIZE];
int top = 0;
int operands[2];

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

