#include "string.h"

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    while (n > 0)
    {
        if (*p == c)
        {
            s = p;
            return (p);
        }
        p++;
        n--;
    }
    return (NULL);
}
