#include <stdio.h>

int y = 3;

void dubly_calculate(int *x, int y) {
    *x = *x + 2;
    y = y - 2;

    printf("Y = %d\n",  y);
}
int main() {
    int x=11;

    dubly_calculate(&x,y);
    printf("X = %d, Y = %d\n", x, y);
    return 0;
}