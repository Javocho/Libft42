/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:42:56 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/27 18:45:45 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		++i;
	}
	result[len] = '\0';
	return (result);
}

/*
int main(void) {
    const char *str = "Hello, world!";
    
    char *result = ft_strmapi(str, uppercase_mapping);
    
    printf("Original string: %s\n", str);
    printf("Result string: %s\n", result);
    
    free(result);
    
    return 0;
}
*/