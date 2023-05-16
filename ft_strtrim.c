#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;
    int k;

    i = 0;
    j = strlen(s1) - 1;
    k = 0;
    while (s1[i] && strchr(set, s1[i]))
        i++;
    while (j > i && strchr(set, s1[j]))
        j--;
    str = (char *)malloc(sizeof(char) * (j - i + 2));
    if (!str)
        return (NULL);
    while (i <= j)
    {
        str[k] = s1[i];
        k++;
        i++;
    }
    str[k] = '\0';
    return (str);
}