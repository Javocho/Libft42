#include <string.h>

void *memccpy(void *dest, const void *src, int c, size_t n)
{
    char *d;
    char *s;

    d = dest;
    s = src;
    while (n > 0)
    {
        *d = *s;
        if (*s == c)
            return (d + 1); //si lo encuentra tiene que devolver puntero al siguiente byte. Sino NULL
        d++;
        s++;
        n--;
    }
    return (NULL);
}