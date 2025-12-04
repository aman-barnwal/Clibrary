#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current Time: %s", ctime(&t));
    return 0;
}

