#include <stdio.h>
#include <stdarg.h>

void add(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    printf("Sum = %d\n", sum);
}

int main() {
    add(3, 10, 20, 30);
    return 0;
}

