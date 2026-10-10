#include <stdio.h>

int main() {
    int a; float b; double c; char ch, name[50];

    printf("Enter int, float, double, char, string: ");
    scanf("%d %f %lf %c %s", &a, &b, &c, &ch, name);

    printf("\n%d\n%.2f\n%.2lf\n%c\n%s\n", a, b, c, ch, name);
    return 0;
}