/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:02:12 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/29 23:24:30 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s != NULL && f != NULL)
	{		
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			++i;
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