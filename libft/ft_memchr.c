/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:10:37 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/25 20:06:02 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * busca un caracter 'c' en 'n' caracteres que le pasemos
 * mientras que 'i' sea menor que la cantidad que le pasamos
 * entra al bucle y comprueba si en contenido del puntero es igual
 * al caracter que buscamos si es asi retorna un puntero generico
 * de 'str' si no suma uno en la 'i' y mueve en 1 la posicion del puntero
 * si no encuentra nada devuelve null
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		i++;
		str++;
	}
	return (NULL);
}
