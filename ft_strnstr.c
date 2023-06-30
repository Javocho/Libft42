/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:26:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/30 11:50:00 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i])
	{
		j = 0;
		while (str1[i + j] == str2[j] && (size_t)(i + j) < n)
		{
			if (str2[j + 1] == '\0')
				return ((char *)(str1 + i));
			++j;
		}
		++i;
	}
	return (NULL);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    const char *str1 = "Hello, world!";
    const char *str2 = "world";
    //size_t n = -1;
	if (argc > 1) {
		char *result = ft_strnstr(str1, str2, ft_atoi(argv[1]));

		if (result != NULL)
			printf("Substring found at position: %ld\n", result - str1);
		else
			printf("Substring not found\n");
	}
	return 0;
}*/
