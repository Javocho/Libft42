/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:26:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/28 13:32:24 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] && str2[j] && i < n)
	{
		if (str1[i] == str2[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (str2[j] == '\0')
		return (str1 + i - j);
	return (NULL);
}

/*
int main()
{
    const char *str1 = "Hello, world!";
    const char *str2 = "world";
    size_t n = strlen(str1);

    char *result = ft_strnstr(str1, str2, n);

    if (result != NULL)
        printf("Substring found at position: %ld\n", result - str1);
    else
        printf("Substring not found\n");

    return 0;
}
*/