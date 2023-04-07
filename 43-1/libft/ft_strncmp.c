#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)str1[i] - (unsigned char)str2[i]); //por si compilador interpreta char como signed que no creo que pase pero xd en la upc me maltratan
}