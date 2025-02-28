#include <stdio.h>

int main() {
  int arr[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10; i++) {
    if(arr[i] % 2 == 0) {
      printf("Even\n", arr[i]);
    } else {
      printf("Odd\n", arr[i]);
    }
  }

  return 0;
}
