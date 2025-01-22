#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        ptr[i] = i + 1;
    }

    ptr = (int*) realloc(ptr, 5 * sizeof(int)); // 5 ta `int` uchun xotirani kengaytirish

    for (int i = 3; i < 5; i++) {
        ptr[i] = (i + 1) * 10; // Yangi ajratilgan xotiraga qiymat kiritish
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Xotirani bo'shatish
    return 0;
}
