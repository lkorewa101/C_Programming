#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; // 
    char* str;   
    scanf("%d", &num);
  
    str = (char*)calloc(num + 1, sizeof(char));
    if (str == NULL) {
        printf("메모리 할당에 실패했습니다.");
        return 1;  
    }
    scanf("%s", str);
    printf("%s", str);
    free(str);

    return 0;
}