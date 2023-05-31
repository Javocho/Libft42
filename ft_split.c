/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:56:00 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/31 23:59:38 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//intentar asignar dinámicamente con strncpy :)
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*extract_word(const char *s, char c, int *start)
{
	int		i;
	int		word_len;
	char	*word;

	i = *start;
	word_len = 0 ;
	while (s[i] == c)
		i++;
	while (s[i + word_len] && s[i + word_len] != c)
		word_len++;
	word = ft_substr(s, i, word_len);
	*start = i + word_len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**strs;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!strs)
		return (NULL);
	i = 0;
	start = 0;
	while (i < word_count)
	{
		strs[i] = extract_word(s, c, &start);
		if (!strs[i])
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
