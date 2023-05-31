/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:33:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 18:16:43 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
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