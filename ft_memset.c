/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:12:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 13:17:29 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num > 0)
	{
		*p = value;
		p++;
		num--;
	}
	return (ptr);
}

/*
int main()
{
    char str[] = "Hello, world!";
    size_t len = strlen(str);

    printf("Antes: %s\n", str);

    ft_memset(str, 'A', len);

    printf("Después: %s\n", str);

    return 0;
}
*/
