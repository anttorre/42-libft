/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:19:43 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/25 16:50:01 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * compara n bytes sin comprobar que ambas cadenas no tengan nada
 * si 'i' que es mi contador de bytes es menor que la cantidad
 * de bytes a comprobar entra y comprueba si el contenido de los
 * punteros es distinto si es asi devuelve la resta en unsigned char
 * si no suma un byte a 'i' y mueve una posicion adelante a los
 * punteros st1 y st2 para comparar, si todos son iguales devuelve 0
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*st1 != *st2)
			return ((unsigned char)*st1 - (unsigned char)*st2);
		i++;
		st1++;
		st2++;
	}
	return (0);
}
