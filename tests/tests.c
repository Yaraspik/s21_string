#include <stdio.h>
#include <string.h>
#include "../src/s21_string.h"
#include "./tests.h"

int main()
{
    s21_memchr_test();

    return 0;
}

void s21_memchr_test()
{
    unsigned char src[5000];
    FILE *file = fopen("test.txt", "r");
    char *sym = NULL, *sym2 = NULL;
    int error = 0, test_count = 1;

    for (int i = 33; i < 94; i++)
    {
        fscanf(file, "%9999[^\n]", src);

        sym = s21_memchr(src, i, 10000);
        sym2 = memchr(src, i, 10000);

        if (sym != NULL && sym2 != NULL)
        {
            if (sym == sym2)
            {
                printf("---Тест № %d---\n  s21: %c | def: %c \n----------\n", test_count, *sym, *sym2);
            }
            else
            {
                error++;
            }
        }
        test_count++;
    }

    printf("Всего ошибок: %d\n", error);

    fclose(file);
}