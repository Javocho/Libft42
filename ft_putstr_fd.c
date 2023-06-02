/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:55:01 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/06/02 20:21:52 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	n;

	n = ft_strlen(s);
	write(fd, s, n);
}

/*
#include <stdlib.h>
int main(int argc, char **argv) {
	if (argc > 2) {
		ft_putstr_fd(argv[1], atoi(argv[2]));
	}
}
*/