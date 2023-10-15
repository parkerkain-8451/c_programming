// Write a program that asks the user to enter a series of integers
// stores them in an array, and then sorts the array by calling the function
// selection_sort. When given an array with n elements, selection_sort must
// do the following:
// 1. Search the array to find the largest element, then move it to the last
// position in the array.
// 2. Call itself recursively to sort the first n - 1 elements of the array.
#include <stdio.h>

void print_array(int n, int a[n]){
  printf("=====================\n");
  for (int i = 0; i < n; i++){
    printf("Curr Index: %d\t", i);
    printf("Curr Value: %d\n", a[i]);
  }
  printf("=====================\n");

}

void selection_sort(int n, int a[n]){

  // Break for recursion
  if (n == 0){
    printf("Returning ... \n");
    return;
  }

  // Search the array to find the largest element
  int old_last, largest = -9999, largest_index = -9999;
  for(int i = 0; i < n; i++){
    if(a[i] > largest){
      largest = a[i];
      largest_index = i;
    }
  }
  printf("Largest of first %d elements:\n", n);
  printf("Index %d, Value %d\n", largest_index, largest);

  // Move it to the last position in the array
  old_last = a[n-1];
  printf("Last element before swap: %d\n", old_last);
  a[n-1] = largest;
  a[largest_index] = old_last;

  printf("Current state of list ...\n");
  print_array(n, a);

  // Call itself recursively
  selection_sort(n-1, a);
}


int main(){

  int num_nums;
  printf("How many numbers will you be entering? ");
  scanf("%d", &num_nums);

  int input[num_nums];
  printf("Enter a list of %d integers, separated by spaces: ", num_nums);
  for (int i = 0; i < num_nums; i++){
    scanf("%d", &input[i]);
  }

  selection_sort(num_nums, input);
  printf("In sorted order:\n");
  print_array(num_nums, input);

  return 0;
}


