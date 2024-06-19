#include "s21_string.h"
#include <stdio.h>

int main()
{
    unsigned char src[15] = "1234567890";
    char *sym = NULL;

    printf("src old: %s\n", src);

    sym = memchr(src, '4', 10);

    if (sym != NULL)
        sym[0] = '!';

    printf("src new : %s\n", src);

    return 0;
}
