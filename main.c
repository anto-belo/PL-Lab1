#include <stdio.h>

int main() {
    printf("Input two numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b); // NOLINT(cert-err34-c)

    if (a <= b) a = 0;
    printf("%d %d", a, b);

    return 0;
}
