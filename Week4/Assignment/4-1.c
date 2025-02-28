#include <stdio.h>

int main()
{
  int x, y;
  int x1, y1, x2, y2;
  
  scanf("%d %d", &x, &y);
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  if (x1 > x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
  }

  if (y1 > y2) {
    int temp = y1;
    y1 = y2;
    y2 = temp;
  }

  if ((x == x1 || x == x2) && (y >= y1 && y <= y2)) {
    printf("True\n");
  }
  else if ((y == y1 || y == y2) && (x >= x1 && x <= x2)) {
    printf("True\n");
  }
  else if (x > x1 && x < x2 && y > y1 && y < y2) {
    printf("True\n");
  }
  else {
    printf("False\n");
  }

  return 0;
}