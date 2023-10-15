// Take a two digit number and reverse the digits

#include <stdio.h>

int main(void){
  int num, d1, d2;

  printf("Enter a two digit number:"); 
  scanf("%d", &num);
  
  d1 = num % 10;
  d2 = num / 10;

  printf("%d%d\n", d1, d2);
}
