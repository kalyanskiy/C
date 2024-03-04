/*Протестировал задачу с Metanit. Запись файла*/

#include <stdio.h>

int main(void)
{
    // записываемая строка
    char message[] = "Hello World!";
    // файл для записи
    char * filename = "z1.txt";
    // находим длину записываемой строки
    int n = sizeof(message)/sizeof(message[0]);
 
    FILE * fp= fopen(filename, "w");
    if(fp)
    {
        // посимвольно записываем в файл
        for(int i=0; i < n; i++)
        {
            putc(message[i], fp);
        }
         
        fclose(fp);
        printf("Данные записаны\n");
    }
}