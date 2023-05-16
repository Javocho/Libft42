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

void* calloc(size_t n, size_t size)
{
    void* ptr = malloc(n * size);
    if (ptr != NULL)
        memset(ptr, 0, n * size);
    return ptr;
}