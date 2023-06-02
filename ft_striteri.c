/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:02:12 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/02 21:06:48 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		len = strlen(s);
		result = malloc(sizeof(char) * (len + 1));
		if (result != NULL)
		{
			i = 0;
			while (i < len)
			{
				f(i, s);
				result[i] = s[i];
				++s;
				++i;
			}
			result[len] = '\0';
			s = result;
			free(result);
		}
	}
}

/*
int main() {
    char s[] = "Hello, World!";
    
    printf("Original string: %s\n", s);
    
    ft_striteri(s, printChar);
    
    return 0;
}
*/