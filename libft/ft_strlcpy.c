/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:15:35 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/29 12:07:22 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * si no hay src o no hay dst (nulas) deuelve 0,
 * luego se comprueba que hay espacio en el destino
 * es decir que el dstsize sea mayor que 0 si es asi entra
 * en el bucle que mientras el caracter que copiamos sea distinto
 * de nulo y 'i' sea menor que el tamaño de destino - 1 para reservar
 * un nulo al final de la cadena comienza a copiar y si no se cumple
 * es por que solo habia 1 espacio y este ha sido usado para el nulo
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			srclength;
	unsigned int	i;

	srclength = ft_strlen(src);
	if (!src || !dst)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclength);
}
/*
#include <stdio.h>
int main()
{
	char dst[10] = "";
	char src[10] = "";

	printf("%zu",ft_strlcpy(dst, src, 10));
}
*/