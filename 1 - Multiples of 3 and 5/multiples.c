#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(int argc, char *argv[]) {

    int sum = 0;
    for (int i = 1; i < atoi(argv[1]); ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("sum = %d\n", sum);

    return;
}

