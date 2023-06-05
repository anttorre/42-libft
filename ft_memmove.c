/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:14:15 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/25 21:03:52 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * Comprobamos si no hay nada en ambas cadenas y esto retorna NULL,
 * luego comprobamos la superposicion de las memorias, esto quiere
 * decir que mi puntero de origen esté antes que mi puntero de destino
 * si es asi hacemos la copia desde el 'len' hasta que llegue a 0, de 
 * lo contrario se copia de forma normal de izquierda a derecha empezando
 * desde el principio devuelve un puntero generico al dst
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (s < d)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *) dst);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char s[] = "Antono";
	char src[] = "Hola";
	
	//printf("%s\n", ft_memmove(s+3, s, 2));
	printf("%s\n", memmove(s, src, 2));
	//printf("%s\n", memmove(((void *)0), dst, 2));
	//printf("%s\n", dst);
}
*/