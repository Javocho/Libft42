/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:26:35 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 12:29:50 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		if (*s == c)
			return (d + 1);
		d++;
		s++;
		n--;
	}
	return (NULL);
}
//si lo encuentra tiene que devolver puntero al siguiente byte. Sino NULL

/*
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    char *result = memccpy(dest, src, 'W', sizeof(src));

    if (result == NULL)
    {
        printf("El caracter 'W' no se encontró en la cadena.\n");
    }
    else
    {
        size_t index = result - dest;
        printf("El caracter 'W' se encontró en la posición %zu de 
		la cadena.\n", index);
    }

    printf("Cadena copiada: %s\n", dest);

    return 0;
}

*/