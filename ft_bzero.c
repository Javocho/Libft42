/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:49:45 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/05/24 13:09:00 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
/*
int main() {
    // Prueba 1: Inicializar un arreglo de caracteres
    char str1[] = "Hola";
    printf("Antes de bzero(): %s\n", str1);
    ft_bzero(str1, strlen(str1));
    printf("Después de bzero(): %s\n", str1);

    // Prueba 2: Inicializar un arreglo de enteros
    int numbers[] = {1, 2, 3, 4, 5};
    size_t numbers_size = sizeof(numbers);
    printf("Antes de bzero(): ");
    for (size_t i = 0; i < numbers_size / sizeof(int); i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    ft_bzero(numbers, numbers_size);
    printf("Después de bzero(): ");
    for (size_t i = 0; i < numbers_size / sizeof(int); i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Prueba 3: Inicializar una estructura
    struct Person {
        char name[20];
        int age;
    };
    struct Person person;
    strcpy(person.name, "John");
    person.age = 30;
    printf("Antes de bzero(): Nombre: %s, Edad: %d\n", 
	person.name, person.age);
    ft_bzero(&person, sizeof(person));
    printf("Después de bzero(): Nombre: %s, Edad: %d\n",
	 person.name, person.age);

    return 0;
}
*/