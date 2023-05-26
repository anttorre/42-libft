/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:21:41 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/26 19:56:28 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * creamos un puntero void y le asignamos memoria con la cantidad
 * de elementos que queremos y el tamaño de estos (si queremos 15
 * caracteres tendremos que dar el tamaño de 1 bye que es un caracter)
 * si se produce que el puntero es null no ha podido reservar memoria
 * y devuelve null si no llamo a la funcion bzero que me pone cada
 * posicion de la memoria en zero '\0' y me devuelve el puntero generico
 * 
 * @param num_elements 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*memory_allocated;

	memory_allocated = malloc(num_elements * size);
	if (memory_allocated == NULL)
		return (NULL);
	ft_bzero(memory_allocated, (num_elements * size));
	return (memory_allocated);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = (char *)calloc(0, sizeof(char));
	strlcpy(str, "Holae12346789*", 150);
	printf("LIBC calloc: '%s'\n", str);
	free(str);
	return (0);
}
*/