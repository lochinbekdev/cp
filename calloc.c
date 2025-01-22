#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int)); // 5 ta `int` uchun xotira ajratish va `0` bilan to'ldirish

    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Barcha elementlar `0`
    }

    free(ptr); // Xotirani bo'shatish
    return 0;
}
