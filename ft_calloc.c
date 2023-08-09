/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:07:46 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/08/10 00:24:32 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (ptr != NULL)
		return (ft_memset(ptr, 0, n * size));
}
/*
int main() {
    // Prueba 1: Crear un arreglo de enteros
    int *numbers;
    size_t size = 5;
    numbers = (int *)ft_calloc(size, sizeof(int));
    if (numbers != NULL) {
        printf("Arreglo de enteros:\n");
        for (size_t i = 0; i < size; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
        free(numbers);
    }

    // Prueba 2: Crear un arreglo de caracteres
    char *str;
    size_t length = 10;
    str = (char *)ft_calloc(length, sizeof(char));
    if (str != NULL) {
        printf("Arreglo de caracteres: %s\n", str);
        free(str);
    }

    // Prueba 3: Crear una matriz de enteros
    int **matrix;
    size_t rows = 3, cols = 4;
    matrix = (int **)ft_calloc(rows, sizeof(int *));
    if (matrix != NULL) {
        for (size_t i = 0; i < rows; i++) {
            matrix[i] = (int *)ft_calloc(cols, sizeof(int));
        }
        printf("Matriz de enteros:\n");
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        for (size_t i = 0; i < rows; i++) {
            free(matrix[i]);
        }
        free(matrix);
    }

    return 0;
}

void *ft_calloc(size_t nmemb, size_t size) {
    void *ptr = malloc(nmemb * size);
    if (ptr != NULL) {
        memset(ptr, 0, nmemb * size);
    }
    return ptr;
}
*/