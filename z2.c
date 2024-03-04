/*Протестировал задачу с Metanit. Чтение файла*/

#include <stdio.h>
  
int main(void)
{
    // символ для считывания
    char c;
    // файл для чтения
    char * filename = "z1.txt";
 
    FILE * fp= fopen(filename, "r");
    if(fp)
    {
        // считываем посимвольно из файла
        while((c=getc(fp))!= EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
        printf("Данные прочитаны\n");
    }
}