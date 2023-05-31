/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:04:29 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 18:40:17 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str)
{
	size_t	len;
	char	*newstr;

	len = ft_strlen(str) + 1;
	newstr = malloc(len * sizeof(char));
	ft_strlcpy(newstr, str, len);
	return (newstr);
}
