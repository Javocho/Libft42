/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:56:00 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/01 15:51:15 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//intentar asignar dinámicamente con strncpy :)
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	trigger;
	int	i;

	count = 0;
	trigger = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

static void	*maximumfree(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	count;
	size_t	worlds;
	char	*news;

	worlds = count_words(s, c);
	count = 0;
	ptr = malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (count < worlds)
	{
		while (*s == c && *s)
			s++;
		news = (char *)s;
		while (*s != c && *s != '\0')
			s++;
		ptr[count] = ft_substr(news, 0, s - news);
		if (!ptr[count])
			return (maximumfree(ptr, count));
		count++;
	}
	ptr[count] = NULL;
	return (ptr);
}
