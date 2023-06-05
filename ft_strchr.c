/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:59:46 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/23 14:09:37 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * casting de str a char * en la variable s para poder trabajar sobre ella
 * obtengo el tamaño del string para almacenar hasta donde llega el puntero
 * en str_end luego compruebo que mientras el inicio de mi puntero s sea menor
 * o igual que el final del puntero str_end me compara si el contenido en esa 
 * posicion es igual que el caracter que busco y retorno su puntero si no me 
 * mueve una posicion adelante el puntero inicial, 
 * si no encuentra nada devuelve null
 * 
 * @param str string donde buscar
 * @param c caracter a buscar
 * @return char* - puntero a str donde encontro el caracter
 */
char	*ft_strchr(const char *str, int c)
{
	char	*s;
	size_t	s_length;
	char	*str_end;

	s = (char *)str;
	s_length = ft_strlen(s);
	str_end = s + s_length;
	while (s <= str_end)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	char *s = "H\0l\0";
	
	printf("%p", ft_strchr(s, '\0'));
}
*/