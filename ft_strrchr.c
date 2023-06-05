/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:45:45 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/23 14:09:24 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief 
 * s = (char *)str para trabajar con el inicio del puntero en la cadena
 * fin = s + s_length para apuntar al final de cadena
 * si mi puntero 'fin' es mayor o igual que el inicio de la cadena 's' 
 * (para que compare tambien * el primer caracter de la cadena) entra al 
 * bucle y comprueba si el contenido al que apunta fin
 * es igual que el caracter y devuelve su posicion 
 * si no le resto 1 a la posicion de mi puntero
 * si no encuentra el caracter retorna NULL
 * 
 * @param str string en el que buscar
 * @param c caracter a buscar
 * @return char* - puntero al caracter encontrado
 */
char	*ft_strrchr(const char *str, int c)
{
	char			*s;
	size_t			s_length;
	char			*fin;

	s = (char *)str;
	s_length = ft_strlen(str);
	fin = s + s_length;
	while (fin >= s)
	{
		if (*fin == (char)c)
			return (fin);
		fin--;
	}
	return (0);
}
