#include <string.h>

char *ft_strstr(const char *str1, const char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i] && str2[j])
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