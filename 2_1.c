/* Задача: ввести информацию о студентах (имя и возраст) с клавиатуры и сохранить ее в текстовом файле, с использованием
структуры*/
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void saveStudents(const char *filename, struct Student *students, int count) {
    FILE *file = fopen(filename, "w");

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d\n", students[i].name, students[i].age);
    }

    fclose(file);
}

int main() {
    const char *filename = "2_1.txt";
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Имя %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Возраст %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    saveStudents(filename, students, 3);

    printf("Сохранено\n");

    return 0;
}

