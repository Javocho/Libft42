#include <stdlib.h>
#include "ft_atoi.c"

char *ft_itoa(int n) {
    char *str;
    int digits = 0;
    int num = n;
    if (num < 0) ++digits;
    while (num != 0) {
        ++digits;
        num /= 10;
    }
    str = malloc(sizeof(char) * (digits + 1));
    if (str == NULL) return NULL;
    str[digits--] = '\0';
    while (digits >= 0) {
        str[digits] = '0' + n%10;
        n /= 10;
        --digits;
    }
    return (str);
}