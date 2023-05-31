/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:35:32 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/01 00:08:01 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_atoi.c"
//#include <stdio.h>
//#include <stdlib.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*d ;
	const char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}
//cast implícito
/*int main(int argc, char** argv) {
	if (argc == 4) {
		int size = ft_atoi(argv[3]);
		size_t ssize = (size_t)size;
		char *dest = argv[2];
		memcpy(dest, argv[1], ssize);
		printf("%s", dest);
	}
	return (0);
}
*/
