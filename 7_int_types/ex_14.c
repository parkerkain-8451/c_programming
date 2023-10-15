// Write a program that calculates the average word length for a sentence
// Punctuation is a part of the word, diplay with one decimal point
//
// Test Case: It was deja vu all over again.
// Answer: 3.4

#include <stdio.h>

int main(void){
  char curr_char;
  int num_chars = 0, num_words = 1;
  float average_length;

  printf("Enter a sentence: ");
  while((curr_char = getchar()) != '\n'){
    if (curr_char == ' ') num_words++;
    else num_chars++;
  }
  average_length = (float) num_chars / (float) num_words;
  printf("Average word length: %.1f\n", average_length);
  return 0;
}

// This doesn't handle multiple spaces, but oh well
