// Write macros that compute the following values
// The cube of x
// The remainder when n is divided by 4
// 1 if the product of x and y is less than 100, 0 otherwise

#include <stdio.h>
#define cube(x) ((x) * (x) * (x))
#define remainder(n) ((n) % 4)
#define prod_is_lt_100(x, y) (((x) * (y)) < 100 ? 1 : 0)

int main(void){

  int cube_result, remainder_result, prd_result;

  cube_result = cube(5);
  printf("5 cubed is %d\n", cube_result);

  remainder_result = remainder(5);
  printf("The remainder of 5 divided by 4 is %d\n", remainder_result);

  prd_result = prod_is_lt_100(33, 3);
  printf("Is the product of 33 and 3 less than 100? %d\n", prd_result);
  prd_result = prod_is_lt_100(50, 3);
  printf("Is the product of 50 and 3 less than 100? %d\n", prd_result);
  

  return 0;
}
