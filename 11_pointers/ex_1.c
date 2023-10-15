// Create a progran that determines the smallest number of $20, 10, 5, 1 needed to pay an amount
//

#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){

  int dollars;
  int twenties = 0, tens = 0, fives = 0, ones = 0;

  printf("Enter payment amount: ");
  scanf("%d", &dollars);

  pay_amount(dollars, &twenties, &tens, &fives, &ones);

  printf("Twenties needed: %d\n", twenties);
  printf("Tens needed: %d\n", tens);
  printf("Fives needed: %d\n", fives);
  printf("Ones needed: %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

  int curr_amount = dollars;

  *twenties = curr_amount / 20;
  curr_amount = curr_amount - (*twenties * 20);
 
  *tens = curr_amount / 10;
  curr_amount = curr_amount - (*tens * 10);

  *fives = curr_amount / 5;
  curr_amount = curr_amount - (*fives * 5);

  *ones = curr_amount / 1;
  curr_amount = curr_amount - (*ones * 1);
}

