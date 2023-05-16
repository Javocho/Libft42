#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    if (s == NULL || f == NULL)
        return NULL; // Manejar casos de error si s o f son nulos.
    size_t len = strlen(s);
    char *result = malloc(sizeof(char) * (len + 1));
    if (result == NULL) return NULL;
    unsigned int i = 0;
    while (i < len) {
        f(i, s[i]);
        result[i] = s[i];
        ++i;
    }
    result[len] = '\0';
    s = result;
    free(result);
}