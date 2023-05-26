/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:35:17 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/26 19:36:59 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_strcpy(dest, src);

	printf("Cadena fuente: %s\n", src);
	printf("Cadena destino: %s\n", dest);

	return 0;
}*/