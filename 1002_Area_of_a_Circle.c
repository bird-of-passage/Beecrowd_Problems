#include <stdio.h>
int main()
{
    double R = 100.64, A;
    scanf("%lf", &R);
    A = 3.14159 * R * R;
    printf("A=%.4lf\n", A);
    return 0;
}