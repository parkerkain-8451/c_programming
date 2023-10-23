// Write a program that sorts a series of words entered by the user
// Assume that each word is no more than 20 characters long. 
// Store each word in a dynamically allocated string, using an 
// array of pointers to keep track of the strings. 
// After all words have been read, sort the array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20
#define MAX_WORDS 10

int read_line(char str[], int n);
void sort_largest(char *words[], int num_words);

int main(void){

  char *words[MAX_WORDS], str_holder[MAX_LENGTH + 1];
  int str_len, word_count = 0;

  while(1){
    printf("Enter word: ");

    // Read a word
    str_len = read_line(str_holder, MAX_LENGTH);

    if(str_len == 0){
      break;
    }

    // Dynamically allocate the string
    words[word_count] = malloc(str_len * sizeof(char) + 1);
    strcpy(words[word_count++], str_holder);
  
  };

  // Now, we need to sort the array
  for(int j=word_count; j>1; j--){
    sort_largest(words, j);
  }

  printf("Here is your sorted list of words: \n");
  for(int j=0; j<word_count; j++){
    printf("%s\n", words[j]);
  } 

  return 0;

}

void sort_largest(char *words[], int num_words){
  char curr_largest[MAX_LENGTH];
  int index_to_sub = 0;

  strcpy(curr_largest, words[0]);
  for(int i=1; i<num_words; i++){
    if (strcmp(words[i], curr_largest) > 0){
      strcpy(curr_largest, words[i]);
      index_to_sub = i; 
    }
  }

  if(index_to_sub != (num_words-1)){
    strcpy(words[index_to_sub], words[num_words-1]);
    strcpy(words[num_words-1], curr_largest);
  }
}

int read_line(char str[], int n){
  // Read a string of MAX_LENGTH or less characters to an array.
  // Returns the length of the string.
  int ch, i = 0;

  while((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
