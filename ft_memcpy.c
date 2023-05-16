#include <string.h>

void    *memcpy(void *dest, const void *src, size_t n)
{
    char    *d;
    char    *s;

    char *d = dest;
    char *s = src;
    while (n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
}