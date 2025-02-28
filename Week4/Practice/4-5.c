#include <stdio.h>

int main()
{
  int a, b;
  char op;
  scanf("%d %c %d", &a, &op, &b);
  switch(op)
    {
      case '+':
        {
          printf("%d %c %d = %d\n", a, op, b, a+b);
          break;
        }
      case '-':
        {
          printf("%d %c %d = %d\n", a, op, b, a-b);
          break;
        }
      case '*':
        {
          printf("%d %c %d = %d\n", a, op, b, a*b);
          break;
        }
      case '/':
        {
          if(b!=0) printf("%d %c %d = %d\n", a, op, b, a/b);
          else printf("0으로 나눌 수 없습니다.");
          break;
        }
      case '%':
        {
          printf("%d %c %d = %d\n", a, op, b, a%b);
          break;
        }
      default:
        {
          printf("연산을 수행할 수 없습니다.");
        }
    }

  return 0;
}