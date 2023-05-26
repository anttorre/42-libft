/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:05:00 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/25 21:33:35 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * tres varialbes una para almacenar el numero otra para guardar el signo
 * y otra para iterar sobre la cadena. En el primer bucle itero sobre los
 * espacios o tabulaciones delante del string, despues compruebo el signo
 * y si es negativo cambio la variable sign a -1, el siguiente bucle itera 
 * sobre los caracteres entre el 0 y el 9 y guarda en num el numero
 * resultante por ejemplo si fuese '1' haria lo siguiente
 * num = 0 * 10 + (49 - 48) una vez acabado retorna el num * sign.
 * 
 * @param str 
 * @return int 
 */
int	ft_atoi(const char *str)
{
	int				num;
	unsigned int	i;
	int				sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
