#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *arr = NULL;
  arr = malloc(sizeof(int)*3);
  if(arr == NULL) {
    printf("Memory allocation problem!\n");
    return -1;
  }
  *arr = 100;
  int i;
  for(i=0; i<3; i++) {
    printf("Value : %d\n",(*arr + i));
  }
  free(arr);
  arr = NULL;
  return 0;
}