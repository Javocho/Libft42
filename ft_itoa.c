/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:20:37 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 12:21:49 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		num;

	digits = 0;
	num = n;
	if (num < 0)
		++digits;
	while (num != 0)
	{
		++digits;
		num /= 10;
	}
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	str[digits--] = '\0';
	while (digits >= 0)
	{
		str[digits] = '0' + n % 10;
		n /= 10;
		--digits;
	}
	return (str);
}

/*
int main(void)
{
	int num = -12345;
	char *str = ft_itoa(num);

	if (str == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return 1;
	}

	printf("Número: %d\n", num);
	printf("Cadena resultante: %s\n", str);

	free(str); /

	return 0;
}
*/