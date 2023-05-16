#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;

    d = dest;
    s = src;
    if (d < s)
        while (n > 0)
        {
            *d++ = *s++;
            n--;
        }
    else
    {
        d += n;
        s += n;
        while (n > 0)
        {
            *d = *s;
            d--;
            s--;
            n--;
        }
    }
    return (dest);
}