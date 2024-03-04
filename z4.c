/*Задача: подсчитаь количество слов в текстовом файле*/

#include <stdio.h>

#define MAX_LENG 100

int main() {
    FILE *file = fopen("z1.txt", "r"); 

    int cnt = 0;
    char word[MAX_LENG];

    while (fscanf(file, "%s", word) != EOF) {
        cnt++;
    }

    fclose(file);

    printf("%d\n", cnt);

    return 0;
}
