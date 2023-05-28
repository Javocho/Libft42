/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:34:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/28 13:34:47 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] && str2[j])
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

    char *result = ft_strstr(str1, str2);

    if (result != NULL)
        printf("Substring found at position: %ld\n", result - str1);
    else
        printf("Substring not found\n");

    return 0;
}
*/