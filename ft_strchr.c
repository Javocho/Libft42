#include <string.h>

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] && str[i] != c)
        i++;
    if (str[i] == c)
        return (str + i);
    return (NULL);
}