#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strncpy.c"

//intentar asignar dinámicamente con strncpy :)
char **ft_split(char const *s, char c) {
    char **strs;
    int word, nletter;
    int i, j;
    i = j = word = nletter = 0;
    word = ft_strlen(s);
    strs = malloc(sizeof(char *) * (word + 1));
    if (strs == NULL) return NULL;

    while (i < word) {
        j = 0;
        while (s[j] != c && s[j] != '\0') {
            ++j;
            ++nletter;
        }
        strs[i] = malloc(sizeof(char) * j);
        if (strs[i] == NULL) return NULL;
        ft_strncpy(strs[i], s[nletter - j], j);
        ++i;
    }
    strs[i] == NULL;
    return strs;
}