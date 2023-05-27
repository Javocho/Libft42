/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:47:11 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/27 18:57:10 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

/*
int main(void) {
    const char *str1 = "Hello";
    const char *str2 = "Hellp";
    int result = ft_strncmp(str1, str2, 4);
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Comparison result: %d\n", result);
    
    return 0;
}
*/