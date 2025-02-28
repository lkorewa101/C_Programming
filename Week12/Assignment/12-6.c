#include <stdio.h>
#define PI 3.141592 // 원주율

double cylinder(double radius, double height) {
    double surfaceArea;

    // 원통의 넓이 계산식
    surfaceArea = 2 * PI * radius * (radius + height);

    return surfaceArea;
}

int main() {
    double radius, height;

    scanf("%lf %lf", &radius, &height); // 반지름, 높이 입력받기

    // 원통의 넓이 계산
    double result = cylinder(radius, height);

    printf("%.2lf\n", result); // 출력

    return 0;
}