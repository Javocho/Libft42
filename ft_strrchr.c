/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:33:00 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 18:41:13 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/*
int main()
{
    const char *str = "Hello, world!";
    int c = 'o';

    char *result = ft_strrchr(str, c);

    if (result != NULL)
        printf("Last occurrence of '%c' found at position:
		 %ld\n", c, result - str);
    else
        printf("'%c' not found\n", c);

    return 0;
}
*/