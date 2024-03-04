/*Задача: подсчитать сумму чисел в текстовом файле*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");

    int num;
    int sum = 0;

    while (fscanf(file, "%d", &num) != EOF) {
        sum += num;
    }

    fclose(file); 

    printf("%d\n", sum);

    return 0;
}
