#include <string.h>

char *ft_strnstr(const char *str1, const char *str2, size_t n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i] && str2[j] && i < n)
    {
        if (str1[i] == str2[j])
            j++;
        else
            j = 0;
        i++;
    }
    if (str2[j] == '\0')
        return (str1 + i - j);
    return (NULL);
}