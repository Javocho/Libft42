/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:16:41 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/27 18:18:49 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < dest_size)
		i++;
	while (src[j] && i + j + 1 < dest_size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != dest_size)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

/*
int main(void) {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t dest_size = sizeof(dest);
    
    size_t result = ft_strlcat(dest, src, dest_size);
    
    printf("Result: %s\n", dest);
    printf("Result length: %zu\n", result);
    
    return 0;
}
*/
