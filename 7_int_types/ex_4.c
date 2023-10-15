// Write a program that tratslates an alphabetic thone number into numeric form:
// CALLATT == 2255288
// Leave nonalphabetic characters unchanged
// Assume all letters are upper case

#include <stdio.h>

int main(void){
  char curr_letter;

  printf("Enter phone number: ");
  while((curr_letter = getchar()) != '\n'){
    if ('A' <= curr_letter && curr_letter <= 'C'){
      printf("2");
    } else if ('D' <= curr_letter && curr_letter <= 'F'){
      printf("3");
    } else if ('G' <= curr_letter && curr_letter <= 'I'){
      printf("4");
    } else if ('J' <= curr_letter && curr_letter <= 'L'){
      printf("5");
    } else if ('M' <= curr_letter && curr_letter <= 'O'){
      printf("6");
    } else if ('P' <= curr_letter && curr_letter <= 'R'){
      printf("7");
    } else if ('S' <= curr_letter && curr_letter <= 'U'){
      printf("8");
    } else if ('W' <= curr_letter && curr_letter <= 'Y'){
      printf("9");
    } else {
      printf("%c", curr_letter);
    } 
  }
  printf("\n");
  return 0;

}
