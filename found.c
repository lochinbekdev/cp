#include <stdio.h>
#include <dirent.h> // Katalog bilan ishlash uchun kutubxona

int main() {
    char dirname[256];  
    struct dirent *entry; // Fayl va papka ma'lumotlarini saqlash uchun
    DIR *dir; // Katalogni ifodalovchi pointer

    // Foydalanuvchidan katalog nomini so'rash
    printf("Katalog nomini kiriting: ");
    scanf("%s", dirname);

    dir = opendir(dirname);
    if (dir == NULL) {
        printf("Katalogni ochishda xatolik: %s\n", dirname);
        return 1;
    }

    printf("Fayl va papkalar:\n");

    while ((entry = readdir(dir)) != NULL) {
                printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;   
}
