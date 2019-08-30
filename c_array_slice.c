#include <stdio.h>
#include "slice.h"

int main(int argc, char *argv[]) {
  // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // int *sliceArr = (int*) slice(arr, 2, 8, INT);
  // float arr[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};
  // float *sliceArr = (float*) slice(arr, 2, 8, FLOAT);
  char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
  char *sliceArr = (char*) slice(arr, 2, 8, CHAR);

  printf("Normal array\n");
  for(int i=0; i<10; i++) {
    printf("%c, ", arr[i]);
  }
  printf("\nSlice array\n");
  for(int i=0; i<6; i++) {
    printf("%c, ", sliceArr[i]);
  }
  printf("\n");

  free(sliceArr);

  return 0;
}