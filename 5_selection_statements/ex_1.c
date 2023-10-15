// Count the digits of a provided number

#include <stdio.h>

int main(void){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if ((0 < num) && (num < 10)){
    printf("Number has 1 digit\n");
  } else if ((10 < num) && (num < 100)){
    printf("Number has 2 digits\n");
  }
}
