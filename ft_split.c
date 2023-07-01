/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:56:00 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/01 11:10:37 by fcosta-f         ###   ########.fr       */
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

static char	*extract_word(const char *s, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	int		start;

	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !strs)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			strs[j++] = extract_word(s, start, i);
			start = -1;
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}
