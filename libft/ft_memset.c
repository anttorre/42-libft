/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:24:30 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/24 15:35:01 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * casting de tipo void a unsigned char de b,
 * mientras que 'i' sea menor que 'len' copia desde el inicio
 * del puntero hasta 'len' caracteres de 'c', devuelve un
 * puntero generico al primer parámetro
 * 
 * @param b destino en la memoria
 * @param c caracter a copiar
 * @param len cantidad de caracteres
 * @return void* puntero a un generico
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*dst;

	i = 0;
	dst = (unsigned char *)b;
	while (i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
