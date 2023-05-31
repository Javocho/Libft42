/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:32:04 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 18:42:05 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n > 0)
	{
		if (*p == c)
		{
			s = p;
			return ((char *)(p));
		}
		p++;
		n--;
	}
	return (NULL);
}

/*
int main(void)
{
    char str[] = "Hello, World!";
    char *result = memchr(str, 'W', sizeof(str));

    if (result == NULL)
    {
        printf("El caracter 'W' no se encontró en la cadena.\n");
    }
    else
    {
        size_t index = result - str;
        printf("El caracter 'W' se encontró en la posición %zu de 
		la cadena.\n", index);
    }

    return 0;
}

*/
