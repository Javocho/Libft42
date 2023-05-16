#include <string.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
        size_t  i;
    
        i =  0 ;
        while (i < size -  1  && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] =  '\0' ;
        return (i);
    }