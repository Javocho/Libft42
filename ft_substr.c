/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:51:44 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/28 16:53:20 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main()
{
    char *s = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *substr = ft_substr(s, start, len);
    if (substr)
    {
        printf("Subcadena: %s\n", substr);
        free(substr); // Liberar la memoria asignada por ft_substr
    }
    else
    {
        printf("Error al obtener la subcadena.\n");
    }

    return 0;
}
*/