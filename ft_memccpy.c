/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:26:35 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 18:32:30 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		if (*(char *)src == c)
			return (dest + 1);
		dest++;
		src++;
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