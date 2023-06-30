/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:34:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/30 11:07:17 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] && (unsigned char)str[i] != (unsigned char)c)
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char *)& str[i]);
	return (NULL);
}

/*#include <stdio.h> 
he intnetado poner unsigned char para el juego de prueba
 fuera de carácteres válidos
int main(void) {
    const char *str = "Hello, World!";
    int c = 'W';

    char *result = ft_strchr(str, c);
    if (result != NULL) {
        printf("Carácter encontrado: %c\n", *result);
        printf("Resto de la cadena: %s\n", result);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
