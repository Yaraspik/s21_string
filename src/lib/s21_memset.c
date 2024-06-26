#include "s21_string.h"

/**
 * Функция memset заполняет первые n байт области памяти, на которую указывает аргумент destination, символом, код которого указывается аргументом c.
 *
 * @param destination указатель на заполняемый массив
 * @param c код символа для заполнения
 * @param n размер заполняемой части массива в байтах
 *
 * @return Функция возвращает указатель на заполняемый массив.
 */
void *s21_memset(void *destination, int c, size_t n)
{
    unsigned char *_destination = destination;
    const unsigned char _c = c;
    void *res = NULL;

    for (size_t i = 0; i < n; i++)
    {
        *_destination = _c;
        _destination++;
    }

    return res;
}