// Write a program that finds the smallest anc largest in a series of words
// Stop when the user inputs a four letter word. 
// No word will be longer than 20 letters long

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
int main(){

  char smallest_word[MAX_LENGTH] = "zzz", largest_word[MAX_LENGTH] = "a", curr_word[MAX_LENGTH];
  int curr_len;

  while(1) {
    printf("Enter word: ");
    fgets(curr_word, MAX_LENGTH, stdin);
    curr_len = strlen(curr_word);
    if (curr_len == 5){
      // fgets appents a \n to the end of the string, hence 5 rather than 4
      break;
    } else if (strcmp(curr_word, smallest_word) < 1){
      strcpy(smallest_word, curr_word);
    } else if (strcmp(curr_word, largest_word) > 1){
      strcpy(largest_word, curr_word);
    }
  }

  printf("Smallest Word: %s", smallest_word);
  printf("Largest Word: %s", largest_word);
  return 0;

}
