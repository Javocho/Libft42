#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL)
        return NULL; // Manejar casos de error si s o f son nulos.
    size_t len = strlen(s);
    char *result = malloc(sizeof(char) * (len + 1));
    if (result == NULL) return NULL;
    unsigned int i = 0;
    while (i < len) {
        result[i] = f(i, s[i]);
        ++i;
    }
    result[len] = '\0';
    return result;
}