/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:34:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 19:34:26 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

/*
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
}
*/