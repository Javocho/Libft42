/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:41:13 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/24 12:55:10 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
//     const char *test_cases[] = {
//         "42",
//         "-123",
//         "+987",
//         "0",
//         "   555",
//         "  -999",
//         "abc",
//         "123abc",
//         "  42abc",
//         "- 123",
//         "+456",
//         "  - 789",
//         NULL
//     };

//     int i = 0;
//     while (test_cases[i] != NULL)
//     {
//         int result = ft_atoi(test_cases[i]);
//         printf("Input: \"%s\", Output: %d\n", test_cases[i], result);
//         i++;
//     }

//     return 0;
// }