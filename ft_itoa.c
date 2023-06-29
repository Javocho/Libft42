/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:20:37 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/29 16:38:19 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = count_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	--digits;
	if (n == 0)
		str[0] = '0';
	else if (n == -2147483648)
		str = "-2147483648";
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[digits] = '0' + n % 10;
		n /= 10;
		--digits;
	}
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

	return 0;
}
*/