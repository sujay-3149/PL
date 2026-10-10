#include <stdio.h>

int main() {
    int a[5], i; float f[5]; char c[5];

    printf("Enter 5 ints, 5 floats, 5 chars: ");
    for (i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (i = 0; i < 5; i++) scanf("%f", &f[i]);
    for (i = 0; i < 5; i++) scanf(" %c", &c[i]);

    for (i = 0; i < 5; i++)
        printf("%d  %p\t%.1f  %p\t%c  %p\n", a[i], (void*)&a[i], f[i], (void*)&f[i], c[i], (void*)&c[i]);
    return 0;
}