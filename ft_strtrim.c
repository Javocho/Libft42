/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:35:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/28 13:35:56 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = strlen(s1) - 1;
	k = 0;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	while (j > i && strchr(set, s1[j]))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*
int main()
{
    const char *s1 = "   Hello, world!   ";
    const char *set = " ";

    char *result = ft_strtrim(s1, set);

    if (result != NULL)
        printf("Trimmed string: '%s'\n", result);
    else
        printf("Failed to trim string\n");

    free(result);

    return 0;
}
*/