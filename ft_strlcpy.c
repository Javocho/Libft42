/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:19:15 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/27 18:41:17 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0 ;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
int main(void) {
    char dest[20];
    const char *src = "Hello, world!";
    size_t size = sizeof(dest);
    
    size_t result = ft_strlcpy(dest, src, size);
    
    printf("Result: %s\n", dest);
    printf("Result length: %zu\n", result);
    
    return 0;
}
*/