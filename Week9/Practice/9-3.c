#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr;
  int i, j, num, size, temp;

  scanf("%d", &size);
  arr = (int*)malloc(size * sizeof(int));

  for(i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &num);
  switch(num) {
    case 1:
    for(i = 0; i < size; i++){
      for(j = 0; j < size-1; j++){
        if(arr[j] > arr[j+1]) {
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    break;

    case 2:
    for(i = 0; i < size; i++){
      for(j = 0; j < size-1; j++){
        if(arr[j] < arr[j+1]) {
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    break;
  }
  for(i = 0; i < size; i++) {
  printf("%d ", arr[i]);
  }
  free(arr);
  return 0;
}