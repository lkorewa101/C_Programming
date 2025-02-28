#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    double s = 210 * PI/180;
    double c = 120 * PI/180;
    double t = 25 * PI/180;

    double si = sin(s);
    double co = cos(c);
    double ta = tan(t);

    printf("%.1f %.1f %.4f", si, co, ta);

    return 0;
}
