#include <stdio.h>

int main() {
  // 문자열, 문자 변수 선언
  char str[50];
  char ch;
  int i = 0;

  // 문자열과 문자 입력 받기
  fgets(str, 50, stdin);
  scanf("%c", &ch);

  // 입력받은 문자열에서 입력받은 문자를 찾아서 해당하면 표시
  while(str[i] !='\0') {
    if(str[i] == ch) {
      printf("문자 %c의 인덱스 위치는 %d입니다.", ch, i);
      return 0;
    }
    i++;
  }
  
  return 0;
}