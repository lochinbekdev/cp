#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); // 5 ta `int` uchun xotira ajratish

    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Xotiraga ma'lumot yozish
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Ma'lumotni ekranga chiqarish
    }

    free(ptr); // Xotirani bo'shatish
    return 0;
}
