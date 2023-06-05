/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:27:37 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/26 14:45:22 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * Si la cadena a buscar es nula devuelve un puntero a la cadena
 * donde iba a buscar, mientras que 'i' sea menor que
 * la cantidad de caracteres a buscar y la primera posicion
 * de la cadena no contenga un nulo entra en el bucle y pone 'j' a 0
 * que servira para los caracteres de la cadena 'to_find', entra en el
 * segundo bucle y comprueba que el caracter siguiente de 'str' no sea 
 * nulo, que el caracter de 'to_find' no sea nulo, que el caracter que compara
 * con 'to_find' sean iguales y que no exceda de la cantidad de caracteres
 * que buscara, si se cumple entra en el bucle y comprueba que la siguiente
 * posicion de 'to_find' sea nula y si es nula ha encontrado lo que buscaba
 * y devuelve su puntero, si no siguen iterando y si no encuentra nada
 * devuelve NULL
 * 
 * @param haystack 
 * @param needle 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	i = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = "The brown pepe";
	needle = NULL;
	printf("%s", ft_strnstr(haystack, needle, 15));
	return (0);
}
*/