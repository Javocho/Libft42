/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:47:11 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/08/10 00:33:53 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	c1 = str1[i];
	c2 = str2[i];
	while (i < n && c1 != '\0' && c2 != '\0' && c1 == c2)
	{
		i++;
		c1 = str1[i];
		c2 = str2[i];
	}
	if (i == n)
		return (0);
	return (c1 - c2);
}

/*
int main(void) {
    const char *str1 = "test\200";
    const char *str2 = "test\0";
    int result = ft_strncmp(str1, str2, 10);
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Comparison result: %d\n", result);
    
    return 0;
}
*/
