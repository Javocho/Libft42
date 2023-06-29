/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:20:37 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/29 22:39:48 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		++digits;
	if (n < 0)
		++digits;
	while (n != 0)
	{
		++digits;
		n /= 10;
	}
	return (digits);
}

static char	*ft_array(char *x, int number, size_t len)
{
	while (number > 0)
	{
		x[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digits;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	--digits;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str = ft_array(str, n, digits);
	return (str);
}

/*#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int num = ft_atoi(argv[1]);
	char *str = ft_itoa(num);

	if (str == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return 1;
	}

	printf("Número: %d\n", num);
	printf("Cadena resultante: %s\n", str);

	free(str);

	return 0; //que guay hacerlo con strdup
}
*/