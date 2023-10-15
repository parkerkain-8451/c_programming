// Write a progam that finds the largest in a series of numbers entered by the user.
// The program must prompt the user to enter numbers one by one. 
// When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:
//

#include <stdio.h>

int main(void){
  float entered_value, max_value = 0;

  do {
    printf("Enter a number: ");
    scanf("%f", &entered_value);

    if (entered_value > max_value) {
      max_value = entered_value;
    }
  } while (entered_value >= 0);

  printf("The largest number entered was %.2f\n", max_value);
}
