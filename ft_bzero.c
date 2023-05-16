#include <string.h>

//cal afegir la funció memset o es pot importar libft o alguna cosa per l'estil? Passava el mateix a ft_aldigit 

//lo bueno de bzero es que es más eficiente porque su implementación es más sencilla por lo tanto no tiene sentido usar memset, intentar hacerla más eficiente
/*void    bzero(void *s, size_t n)
{
    memset(s, 0, n);
}*/

void    ft_bzero(void *ptr, size_t n) {
    unsigned char *p ;
    p = ptr;
    while (n > 0) {
        *p = 0;
        p++;
        n--;
    }
}