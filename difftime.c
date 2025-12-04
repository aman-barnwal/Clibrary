#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;

    start = time(NULL);

    for (int i = 0; i < 99999999; i++);

    end = time(NULL);

    double diff = difftime(end, start);
    printf("Time taken = %.2f seconds\n", diff);

    return 0;
}

