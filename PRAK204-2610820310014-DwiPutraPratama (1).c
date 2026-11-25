/* PRAK204 - Volume, luas permukaan, dan keliling alas tabung (dengan tutup) */
#include <stdio.h>

int main() {
    double r, t, volume, luas, keliling;
    double PHI = 3.142857;

    scanf("%lf %lf", &r, &t);

    volume = PHI * r * r * t;
    luas = 2 * PHI * r * (r + t);
    keliling = 2 * PHI * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}
