#include <string.h>

void    *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p;

    p = ptr;
    while(num > 0)
    {
        *p = value;
        p++;
        num--;
    }
}