#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *substr;
    size_t i;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (!(substr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1))))
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}