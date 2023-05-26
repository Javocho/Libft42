/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:33:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 12:35:09 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*

int main(void)
{
    unsigned char arr1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    unsigned char arr2[] = {0x01, 0x02, 0x03, 0x04, 0x06};
    size_t size = sizeof(arr1);

    int result = ft_memcmp(arr1, arr2, size);

    if (result < 0)
    {
        printf("arr1 es menor que arr2.\n");
    }
    else if (result > 0)
    {
        printf("arr1 es mayor que arr2.\n");
    }
    else
    {
        printf("arr1 es igual a arr2.\n");
    }

    return 0;
}
*/